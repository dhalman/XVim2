//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/NSObject-Protocol.h>

@class NSArray, NSImage, NSString, NSURL;
@protocol DVTPathCellItem;

@protocol DVTPathCellItem <NSObject>
@property(nonatomic, readonly) NSString *accessibilityIdentifier;
@property(nonatomic, readonly) NSURL *representedURLForExternalDrag;
@property(nonatomic, readonly) NSURL *representedURL;
@property(nonatomic, readonly) NSString *groupIdentifier;
- (BOOL)isEnabled;
- (BOOL)isVisible;
- (BOOL)isValid;
- (BOOL)representsDocumentRoot;
- (BOOL)isLeaf;
@property(nonatomic, readonly) NSArray *childItems;
@property(nonatomic, readonly) id <DVTPathCellItem> parentItem;
@property(nonatomic, readonly) id representedObject;
@property(nonatomic, readonly) NSString *toolTip;
@property(nonatomic, readonly) NSImage *image;
@property(nonatomic, readonly) NSString *name;

@optional
@property(nonatomic, readonly) BOOL mergeDecendants;

// Remaining properties
@property(nonatomic, readonly) BOOL enabled;
@property(nonatomic, readonly) BOOL leaf;
@property(nonatomic, readonly) BOOL valid;
@property(nonatomic, readonly) BOOL visible;
@end

