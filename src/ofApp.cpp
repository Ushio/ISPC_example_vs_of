#include "ofApp.h"
#include "mandelbrot_ispc.h"

//--------------------------------------------------------------
void ofApp::setup() {
	unsigned int width = 768, height = 512;
	float x0 = -2., x1 = 1.;
	float y0 = -1., y1 = 1.;
	int maxIterations = 256;
	std::vector<int> buf(width*height);
	
	ispc::mandelbrot_ispc(x0, y0, x1, y1, width, height, maxIterations, buf.data());
	_image.allocate(width, height, OF_IMAGE_GRAYSCALE);
	uint8_t *ptr = _image.getPixels().getPixels();
	for (int i = 0; i < buf.size(); ++i) {
		ptr[i] = buf[i] * 10;
	}
	_image.update();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	_image.draw(0, 0);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
