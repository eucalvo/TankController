// void SD_TC::writePhPoints(const char* line) {
//   float pHPoint = std::stof(line);
//   File file = sd.open("arb_pH_points", O_CREAT | O_WRONLY);
//   file.write(line);
//   file.close();
// }

// const char * SD_TC::readTextFileLine(const char * path, char* bytes, uint32_t seekTo) {
//   float nextArbRightPoint;
//   File file = open(path, O_RDONLY);
//   file.seek(seekTo);
//   char c = file.read();

//   int i = 0;
//   while(c != '\n') {
//     bytes[i++] = c;
//     c = file.read();
//   }
//   uint32_t position = file.position();
//   float pHPoint = std::stof((const char *) bytes);
//   return ( char *) bytes;
// }
