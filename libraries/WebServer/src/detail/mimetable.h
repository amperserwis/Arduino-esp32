#ifndef __MIMETABLE_H__
#define __MIMETABLE_H__


namespace mime
{

enum type
{
  html,
  htmlgz,
  htm,
  htmgz,
  css,
  cssgz,
  txt,
  js,
  jsgz,
  json,
  png,
  gif,
  jpg,
  ico,
  svg,
  ttf,
  otf,
  woff,
  woff2,
  eot,
  sfnt,
  xml,
  xmlgz,
  pdf,
  zip,
  gz,
  appcache,
  none,
  maxType
};

struct Entry
{
  const char endsWith[16]; 
  const char mimeType[32];
};


extern const Entry mimeTable[maxType];
}


#endif
