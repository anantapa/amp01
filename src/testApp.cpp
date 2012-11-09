#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    size = 50;
    yPos = 100;
    ofEnableSmoothing();
    ofSetCircleResolution(60);//ways to draw a hexagon
    
    ofBackground(255, 100, 40);
    ofSetFrameRate(60);
    ofSetVerticalSync(true);//keep our program and our screen syncronize
    
}

//--------------------------------------------------------------
void testApp::update(){
    yPos++;
    
}

//--------------------------------------------------------------
void testApp::draw(){
    ofCircle(mouseX, mouseY, size);
    ofEllipse(100, yPos, size, size*2);
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofRect(ofGetWidth()/2, ofGetHeight()/2, size, size);
    ofSetRectMode(OF_RECTMODE_CORNER);
    ofLine(ofGetWidth(), ofGetHeight(), ofGetWidth()/2, ofGetHeight()/2);
    cout<<size<<endl;
    
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){
    
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){
    
}