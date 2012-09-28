//
//  Configuration.h
//  SomeApp
//
//  Created by Aviel Lazar on 9/28/12.
//  Copyright (c) 2012 Acme Corporation. All rights reserved.
//

#ifndef SomeApp_Configuration_h
#define SomeApp_Configuration_h

#define DEV 0
#define STAGING 1
#define PROD 2

#if (!defined HOST)
#define HOST DEV
#endif



#if (HOST == DEV)
//	#define kAppAPIHost				@"http://localhost:5000"	

//	#define kMixPanelEnabled        NO
//	#define kMixPanelToken          @"TOKEN"
//	#define kMixPanelTestMode       YES

// #define kCrittercismEnabled		NO
// #define kCrittercismAppId		@"APPID"
// #define kCrittercismKey			@"KEY"
// #define kCrittercismSecret		@"SECRET"

#elif (HOST == STAGING)
//	#define kAppAPIHost				@"http://intra.acme.com/api"	

//	#define kMixPanelEnabled        YES
//	#define kMixPanelToken          @"TOKEN"
//	#define kMixPanelTestMode       NO

// #define kCrittercismEnabled		YES
// #define kCrittercismAppId		@"APPID"
// #define kCrittercismKey			@"KEY"
// #define kCrittercismSecret		@"SECRET"
#elif (HOST == PROD)
//	#define kAppAPIHost				@"http://www.acme.com/api"	

//	#define kMixPanelEnabled        YES
//	#define kMixPanelToken          @"TOKEN"
//	#define kMixPanelTestMode       NO

// #define kCrittercismEnabled		YES
// #define kCrittercismAppId		@"APPID"
// #define kCrittercismKey			@"KEY"
// #define kCrittercismSecret		@"SECRET"
#endif
#endif
