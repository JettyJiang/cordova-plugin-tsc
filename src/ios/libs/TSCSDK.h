//
//  TSCSDK.h
//  TSCSDK
//
//  Created by Muta Huang on 14/1/28.
//  Copyright (c) 2014年 TSC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface TSCSDK : NSObject{
}
- (void) openport: (NSString*) destination;
- (void) openport_ethernet: (NSString*) destination;
- (void) openport_ethernet: (NSString*) destination
                     delay:(double)delay;
- (void) openportMFI;
- (void) openportMFI_withdelay: (double) delay;
- (void) openportMFI: (NSString*) MFIdestination;
- (void) openportMFI: (NSString*) MFIdestination
               delay:(double)delay;
- (void) closeport;
- (void) closeport:(double)delay;
- (void) closeport_withtime:(double)delay;
- (void) setupForWidth: (NSString*) width
                height: (NSString*) height
                 speed: (NSString*) speed
               density: (NSString*) density
                sensor: (NSString*) sensor
              vertical: (NSString*) vertical
                offset: (NSString*) offset;
- (void) setupForWidth: (NSString*) width
                height: (NSString*) height
                 speed: (NSString*) speed
               density: (NSString*) density
                sensor: (NSString*) sensor
              vertical: (NSString*) vertical
                offset: (NSString*) offset
                 delay: (double)delay;
- (void) clearBuffer;
- (void) clearBuffer:(double)delay;
- (void) barcodeFromX: (NSString*) x
                    y: (NSString*) y
          barcodeType: (NSString*) type
               height: (NSString*) height
             readable: (NSString*) readable
             rotation: (NSString*) rotation
               narrow: (NSString*) narrow
                 wide: (NSString*) wide
                 code: (NSString*) code;
- (void) barcodeFromX: (NSString*) x
                    y: (NSString*) y
          barcodeType: (NSString*) type
               height: (NSString*) height
             readable: (NSString*) readable
             rotation: (NSString*) rotation
               narrow: (NSString*) narrow
                 wide: (NSString*) wide
                 code: (NSString*) code
                delay: (double) delay;
- (void) printerfontFromX: (NSString*) x
                        y: (NSString*) y
                 fontName: (NSString*) fontName
                 rotation: (NSString*) rotation
       magnificationRateX: (NSString*) xmul
       magnificationRateY: (NSString*) ymul
                  content: (NSString*) content;
- (void) printerfontFromX: (NSString*) x
                        y: (NSString*) y
                 fontName: (NSString*) fontName
                 rotation: (NSString*) rotation
       magnificationRateX: (NSString*) xmul
       magnificationRateY: (NSString*) ymul
                  content: (NSString*) content
                    delay: (double) delay;
- (void) printerfont_GB2321: (NSString*) x
                        y: (NSString*) y
                 fontName: (NSString*) fontName
                 rotation: (NSString*) rotation
       magnificationRateX: (NSString*) xmul
       magnificationRateY: (NSString*) ymul
                  content: (NSString*) content;
- (void) printerfont_GB2321: (NSString*) x
                          y: (NSString*) y
                   fontName: (NSString*) fontName
                   rotation: (NSString*) rotation
         magnificationRateX: (NSString*) xmul
         magnificationRateY: (NSString*) ymul
                    content: (NSString*) content
                      delay: (double) delay;
- (void) printerfont_BIG5: (NSString*) x
                          y: (NSString*) y
                   fontName: (NSString*) fontName
                   rotation: (NSString*) rotation
         magnificationRateX: (NSString*) xmul
         magnificationRateY: (NSString*) ymul
                    content: (NSString*) content;
- (void) printerfont_BIG5: (NSString*) x
                          y: (NSString*) y
                   fontName: (NSString*) fontName
                   rotation: (NSString*) rotation
         magnificationRateX: (NSString*) xmul
         magnificationRateY: (NSString*) ymul
                    content: (NSString*) content
                      delay: (double) delay;
- (void) printerfont_UTF8: (NSString*) x
                          y: (NSString*) y
                   fontName: (NSString*) fontName
                   rotation: (NSString*) rotation
         magnificationRateX: (NSString*) xmul
         magnificationRateY: (NSString*) ymul
                    content: (NSString*) content;
- (void) printerfont_UTF8: (NSString*) x
                          y: (NSString*) y
                   fontName: (NSString*) fontName
                   rotation: (NSString*) rotation
         magnificationRateX: (NSString*) xmul
         magnificationRateY: (NSString*) ymul
                    content: (NSString*) content
                      delay: (double) delay;
- (void) sendCommand: (NSString*) commandText;
- (void) sendCommand: (NSString*) commandText
               delay:(NSUInteger) delay;
- (void) sendCommand_utf8: (NSString*) commandText;
- (void) sendCommand_utf8: (NSString*) commandText
               delay:(NSUInteger) delay;
- (void) sendCommand_gb2312: (NSString*) commandText;
- (void) sendCommand_gb2312: (NSString*) commandText
                    delay:(NSUInteger) delay;
- (void) sendCommand_big5: (NSString*) commandText;
- (void) sendCommand_big5: (NSString*) commandText
                    delay:(NSUInteger) delay;
- (void) sendCommandWithData: (NSData*) data;
- (void) sendCommandWithData: (NSData*) data
                       delay:(NSUInteger) delay;
- (void) printLabelWithNumberOfSets: (NSString*) sets
                             copies: (NSString*) copies;
- (void) printLabelWithNumberOfSets: (NSString*) sets
                             copies: (NSString*) copies
                              delay: (double) delay;
- (void) downloadPCX: (NSString*) srcPath
              asName: (NSString*) name;
- (void) downloadData: (NSData*) data
               asName: (NSString*) name;
- (void) sendfile: (NSString*) srcPath
              asName: (NSString*) name;
- (void) formfeed;
- (void) formfeed:(double)delay;
- (void) nobackfeed;
- (void) nobackfeed:(double)delay;
- (void) windowsfontFromX: (int) x
                        y: (int) y
                   height: (int) height
                 rotation: (int) rotation
                    style: (int) style
            withUnderline: (int) withUnderline
                 fontName: (NSString*) fontName
                  content: (NSString*) content;
- (void) windowsfontFromX: (int) x
                        y: (int) y
                   height: (int) height
                 rotation: (int) rotation
                    style: (int) style
            withUnderline: (int) withUnderline
                 fontName: (NSString*) fontName
                  content: (NSString*) content
                    delay: (double) delay;
- (void) searchMFI;
-(NSData *) printer_name;
-(NSData *) printer_codepage;
-(NSData *) printer_mileage;
-(NSData *) printer_freememory;
-(NSData *) printer_files;
-(NSData *) printer_status;
-(NSString *) BTMAC;
-(NSString *) WiFi_Default;
-(NSString *) WiFi_SSID:(NSString*)SSID;
-(NSString *) WiFi_WPA:(NSString*)WPA;
-(NSString *) WiFi_WEP:(NSInteger)number
                   WEP:(NSString*)WEP;
-(NSString *) WiFi_DHCP;
-(NSString *) WiFi_Port:(NSInteger)port;
-(NSString *) WiFi_StaticIP:(NSString*)IP
                       mask:(NSString*)mask
                    gateway:(NSString*)gateway;
-(int *) stream_status;
-(void) about;


@end
