//
//  NMListningSet.h
//
//  Created by Murray Hughes on 12/09/13.
//  Copyright (c) 2013 NullMonkey. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NMListeningSet : NSObject

// The protocol the listners must conform to
@property (nonatomic, readonly) Protocol* listeningProtocol;

//
// constructor... listeningSetForProtocol:@protocol(MySpecialProtocol)
+ (instancetype) listeningSetForProtocol:(Protocol*) protocol;

// Add a listner, it will only be added if it conforms to the listeningProtocol
- (void) registerListener:(id) listner;

// Remove listner. Manual unregister only, listner object will automatically be removed
- (void) unregisterListener:(id) listner;

// Remove all
- (void) unregisterAllListeners;

@end