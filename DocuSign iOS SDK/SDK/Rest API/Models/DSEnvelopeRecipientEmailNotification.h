//
//  DSEnvelopeRecipientEmailNotification.h
//  DocuSign iOS SDK
//
//  Created by Arlo Armstrong on 5/6/14.
//  Copyright (c) 2014 DocuSign Inc. All rights reserved.
//

#import <Mantle/Mantle.h>

@interface DSEnvelopeRecipientEmailNotification : MTLModel <MTLJSONSerializing>

@property (nonatomic) NSString *emailSubject;
@property (nonatomic) NSString *emailBody;
@property (nonatomic) NSString *supportedLanguage;

@end
