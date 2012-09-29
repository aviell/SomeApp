//
//  SynthesizeSingleton.h
//  SomeApp
//
//  Created by Aviel Lazar on 9/29/12, a modification of SynthesizeSingleton.h by Matt Gallagher from 2009.
//  Copyright (c) 2012 Acme Corporation. All rights reserved.
//

//Usage:
//  .h file
//  --------
//  @interface MySingletonClass : NSObject
//
//  + (MySingletonClass *) sharedMySingletonClass;
//
//  @end
//
//  .m file
//  --------
//  @implementation MySingletonClass
//
//  SYNTHESIZE_SINGLETON_FOR_CLASS(MySingletonClass)
//
//  @end
//

#ifndef SynthesizeSingleton
#define SynthesizeSingleton


#define SYNTHESIZE_SINGLETON_FOR_CLASS(classname) \
\
static classname *shared##classname = nil; \
\
+ (classname *)shared##classname \
{ \
static dispatch_once_t pred; \
dispatch_once(&pred, ^{ shared##classname = [[self alloc] init]; }); \
return shared##classname; \
}

#endif
