void detect(IplImage *img) {

    CvSeq *object = cvHaarDetectObjects(
            img,                        //  The image
            cascade,                    //  The cascade file
            storage,
            2,                          //  SCALE FACTOR
            1,                          //  MIN NEIGHBOURS
            CV_HAAR_DO_CANNY_PRUNING,   //  CV_HAAR_DO_CANNY_PRUNING
            cvSize(35, 35),             //  MIN OBJECT SIZE
            cvSize(45, 45)              //  MAX OBJECT SIZE
            );

    density += object->total;
}