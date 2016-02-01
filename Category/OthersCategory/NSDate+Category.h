//
//  NSDate+Category.h
//  cal365
//
//  Created by Li Xiang
//

#import <Foundation/Foundation.h>
#import "NSDate+DateSetting.h"
@interface NSDate (DateFormatter)

- (NSString *)yearStr;
- (NSString *)monthStr;
- (NSString *)dayStr;
- (NSString *)hourStr;

- (NSString *)fullStyleDate;
- (NSString *)fullStyleDateChinese;
- (NSString *)fullStyleDateWithWeekDay;
- (NSString *)fullStyleDateWithoutYear;
- (NSString *)fullStyleChineseDateWithoutYear;
- (NSString *)fullStyleDateWithoutDay;
- (NSString *)fullStyleDateWithSep:(NSString *)sepStr;
- (NSString *)fullStyleDateTimeWithoutSecond;
- (NSString *)fullStyleDateTime;
- (NSString *)dateStringWithFormat:(NSString *)format;
- (NSString *)dateStringWithFormatter:(NSDateFormatter *)formatter;
- (NSString *)timeInDay;
//取分钟
- (NSString*)minuteInDay;
- (NSNumber*) dayNumber;
- (NSString*) monthYearString;
@end

@interface NSDate (NSCalendar)

#define  KMinuteOneDay   86400

struct DateInformation {
	int day;
	int month;
	int year;
	int weekday;
	int minute;
	int hour;
	int second;

};
typedef struct DateInformation DateInformation;
- (DateInformation)dateInformation;
- (NSDateComponents*)dateComponentsDetail;
+ (NSDate*)dateFromDateInformation:(DateInformation)info;
+ (NSDate*)GMTDateFromDateInformation:(DateInformation)info;
+ (NSDate*)dateFromDescriptionString:(NSString *)desStr;
+ (NSDate*)dateFromDateString:(NSString *)dateTimeStr;
+ (NSDate*)currentDateTime;
- (NSDate *)getDatePart;

@property (readonly,nonatomic) NSInteger weekdayWithMondayFirst;


- (NSString *)simpleChineseWeekdayStr;
- (NSString *)ChineseWeekdayStr;

- (NSInteger)differenceInDaysTo:(NSDate *)toDate;
- (NSInteger)differenceInMonthsTo:(NSDate *)toDate;
- (NSInteger)differenceYearsFrom:(NSDate *)start;
@property (readonly,nonatomic) BOOL isToday;

- (long long)toMilliSecond;
+ (long long)timestamp;
- (NSString*) dateDescription;
+ (NSDate*)dateFromMilliSecond:(long long)milliSecond;
- (NSDate*)dateWithNewTimeZone:(NSString*)timeZone;

- (NSDate *)firstDayOfMonth;
+ (NSDate *)firstMonthDayOfDate:(NSDate *)date;
- (NSDate *)lastDayOfMonth;
+ (NSDate *)lastMonthDayOfDate:(NSDate *)date;

- (NSInteger)weekday;
- (NSInteger)daysInMonth;
- (NSInteger)dayOfWeekInMonth;
- (NSString *)yearMonthStrWithSep:(NSString *)sepSt;
- (CFGregorianDate)getGregorianDate;
+ (NSDate *)dateFromCFGregorianDate:(CFGregorianDate)info;
+ (NSDate*) GMTDateFromCFGregorianDate:(CFGregorianDate)info;


//判断两个时间是不是同一天
- (BOOL)isSameDay:(NSDate*)anotherDate;
- (BOOL)isSameDay2:(long long)date;

//截至到现在的时间。
+(NSString*)getTimeStampFromReceiveTime:(long long)receiveTime;
@end


@interface NSDate (ChatList)
//1). 聊天对话页面
//若系统设置为12小时制：凌晨 0：00～05：00  上午：05：00～12：00  下午：12：00～24：00
//a. 一天内的消息，显示时间为 凌晨/上午/下午 XX:XX    eg：上午 10：08     下午 11：22
//b. 前一天的消息，显示为 昨天 凌晨/上午/下午 XX:XX     eg：昨天 上午 11：08
//c. 7天内的消息，显示为  星期N 凌晨/上午/下午 XX:XX   eg：星期二 上午 11：12
//d. 7天前的消息，显示为 2015-07-12 凌晨/上午/下午 XX:XX   eg：2015-07-12 上午/下午 XX:XX
//
//如果是24小时制，则不用显示 凌晨/上午/下午，直接显示时间。
+(NSString*)getChatListTimeStampFromReceiveTime:(long long)receiveTime;
@end

@interface NSDate (MessageList)
//2) 消息列表页面
//a. 一天内的最近一条消息发送时间，12小时制： 凌晨/上午/下午 XX:XX     24小时制：XX:XX
//b. 前一天的最近一条消息，显示为：昨天
//c. 7天内的消息，显示为：星期几
//d. 7天前到当年的消息，显示为：07-12
//e. 前一年的消息：2014-12-25
+(NSString*)getMessageListTimeStampFromReceiveTime:(long long)receiveTime;
@end

#ifdef Debug
@interface NSDate(Debug)
-(void)test;
@end
#endif


