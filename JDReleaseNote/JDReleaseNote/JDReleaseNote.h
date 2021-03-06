//
//  BKReleaseNote.h
//  Connect
//
//  Created by Jean-Baptiste Denoual on 23/01/2014.
//  Copyright (c) 2014 Dexem. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JDReleaseNote : NSObject

+ (void)displayReleaseNoteBandIfNeeded;
+ (void)saveInstallVersionAsAnteriorIfNeeded;

+ (void)displayReleaseNoteBand;
+ (void)displayReleaseNotesFullScreen;

+ (void)setDisplayCompletionBlock:(void (^)(void))completion;

@end
