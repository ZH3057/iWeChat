//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AsyncImageView, NSSet, UIEvent;

@protocol AsyncImageViewDelegate <NSObject>

@optional
- (void)touchesCancelled_AsyncImageView:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesEnded_AsyncImageView:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesMoved_AsyncImageView:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesBegan_AsyncImageView:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)onAsyncLoadImageOK:(AsyncImageView *)arg1;
@end
