if ((gps_fd = open("/dev/ttyUL1", O_RDONLY | O_NOCTTY)) == -1) {
        perror("Open GPS serial: Failed to Open!");
        return -1;
    }

char read_GPS() {
    char in;
    if (read(gps_fd, &in, sizeof in) < 0) {
        perror("Failed to read GPS serial");
        exit(1);
    }
    return in;
}

if (video_fd = open("/dev/video0", O_RDWR) == -1) {
        perror("Open Video: Failed to Open!");
        return -1;
    }