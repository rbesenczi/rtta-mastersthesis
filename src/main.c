init_gps();
MQTT_init();
init_video(argv[1]);

thread t_gps(gps_thread);
thread t_mqtt(mqtt_thread);
thread t_opencv(opencv_thread);

t_gps.join();
t_mqtt.join();
t_opencv.join();