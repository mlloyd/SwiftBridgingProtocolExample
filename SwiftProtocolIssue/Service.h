//
//  Service.h
//  SwiftProtocolIssue
//
//  Created by Martin Lloyd on 27/01/2016.
//  Copyright © 2016 Martin Lloyd. All rights reserved.
//

#import <Foundation/Foundation.h>

// Doesn't work

@protocol Service <NSObject>

- (void)aServiceFunction;

@end

@interface Service : NSObject<Service>

@end

//// Does work
//@protocol ServiceProtocol <NSObject>
//
//- (void)aServiceFunction;
//
//@end
//
//@interface Service : NSObject<ServiceProtocol>
//
//@end