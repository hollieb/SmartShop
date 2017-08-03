//
//  RESTWebServiceHandler.h
//  SmartShop
//
//  Created by Hollie Bradley on 6/11/15.
//  Copyright (c) 2015 Hollie Bradley. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol RESTWebServiceHandlerDelegate

@required

- (void) serverDidFinishOperation:(NSData *) data ForOpCode:(NSString *) opCode;

@optional

-(void) serverDidFailOperation:(NSError *) error ForOpCode:(NSString *) opCode;

@end

@interface RESTWebServiceHandler : NSObject

@property (nonatomic, strong) id<RESTWebServiceHandlerDelegate> delegate;
@property (nonatomic, strong) NSString *currentCall;

- (void) callServerOperationWithRestEndPoint:(NSString *) uri andParameters:(NSString *) parameters;

@end
