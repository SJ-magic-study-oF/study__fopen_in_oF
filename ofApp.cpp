#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetWindowTitle("fopen test");
	ofSetFrameRate(60);
	ofSetWindowShape(600, 400);
	// ofSetEscapeQuitsApp(false);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

/******************************
AppName.app/Contents/MacOS
	にて、
		./AppName
	とするので、
	実行場所は、
AppName.app/Contents/MacOS/AppName	

data dirは、AppNameと同じ階層にあるので、
3つ戻って、
	data/
とaccessする。
******************************/
void ofApp::keyPressed(int key){
	switch(key){
		case 'r':
		{
			FILE* fp;
			
			fp = fopen("../../../data/StoryBoard.txt", "r");
			if(fp == NULL)	{ printf("NG\n"); ofExit(1); }
			else			{ printf("OK\n"); fclose(fp); }
		}
			break;
			
		case 'w':
		{
			FILE* fp;
			
			fp = fopen("../../../data/Log.csv", "w");
			if(fp == NULL)	{ printf("NG\n"); ofExit(); }
			else			{ printf("OK\n"); fclose(fp); }
		}
			break;
	}
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
