#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/aruco.hpp>

#include <iostream>
#include <sstream>

using namespace cv;
using namespace std;

void generateArucoMarkers() {
    Mat outMarker;
    Ptr<aruco::Dictionary> markerDictionary = aruco::getPredefinedDictionary(
            aruco::PREDEFINED_DICTIONARY_NAME::DICT_4X4_50);

    for(int i = 0; i < 50; i++) {
        aruco::drawMarker(markerDictionary, i, 500, outMarker, 1);
        ostringstream convert;
        string name = "4x4_AR_Marker_";
        convert << name << i << ".jpg";
        imwrite(convert.str(), outMarker);
    }
}

int main(int argc, char **argv) {
    generateArucoMarkers();
}
