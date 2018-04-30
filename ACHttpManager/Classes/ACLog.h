//
//  ACLog.h
//  Pods
//
//  Created by acmedcare on 2017/5/17.
//
//

#ifndef ACLog_h
#define ACLog_h

#ifdef DEBUG

#define ACLog(fmt,...) NSLog((@"[%s] %s [Line %d] " fmt), __TIME__ ,__PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)

#else

#define ACLog(...)

#endif

#define NSStringFormat(format,...) [NSString stringWithFormat:format,##__VA_ARGS__]

#endif /* ACLog_h */
