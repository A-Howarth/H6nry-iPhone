/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import "VoiceServices-Structs.h"
#import <Foundation/NSObject.h>

@class VSKeepAlive, VSRecognitionAction, NSString, VSSpeechSynthesizer, NSArray;
@protocol VSRecognitionSessionDelegate;

@interface VSRecognitionSession : NSObject {
@private
	NSString *_modelIdentifier;
	VSKeepAlive *_keepAlive;
	id<VSRecognitionSessionDelegate> _delegate;
	VSRecognitionAction *_currentAction;
	NSArray *_topLevelKeywords;
	id _handlingThread;
	VSSpeechSynthesizer *_synthesizer;
	NSString *_languageID;
	NSString *_debugDumpPath;
	NSString *_audioInputPath;
	double _levelInterval;
	unsigned _keywordPhase;
	struct {
		unsigned delegateWillBegin : 1;
		unsigned delegateBegin : 1;
		unsigned delegateOpenURL : 1;
		unsigned delegateFinishedSpeaking : 1;
		unsigned delegateComplete : 1;
		unsigned debugDumpEnabled : 1;
		unsigned preferredEngine : 2;
		unsigned performHandlerActions : 1;
		unsigned allowSensitiveActions : 1;
		unsigned bluetoothAllowed : 1;
		unsigned resetNextAction : 1;
		unsigned isSpeaking : 1;
		unsigned actionBegan : 1;
		unsigned actionBeginning : 1;
		unsigned actionBeginDeferred : 1;
		unsigned invalid : 1;
		unsigned observeKeywordChange : 1;
	} _sessionFlags;
}
-(id)init;
-(id)initWithModelIdentifier:(id)modelIdentifier;
-(void)_actionCompleted:(id)completed nextAction:(id)action error:(id)error;
-(BOOL)_actionStarted:(id)started;
-(id)_beginSpeakingAttributedString:(id)string;
-(id)_beginSpeakingString:(id)string attributedString:(id)string2;
-(CFDictionaryRef)_createKeywordIndex;
-(id)_createPhaseSortedKeywordsFromArray:(id)array;
-(id)_currentRecognizeAction;
-(void)_init;
-(void)_keywordIndexChanged;
-(id)_keywordsForModelIdentifier:(id)modelIdentifier;
-(void)_notifyDelegateActionStarted;
-(void)_notifyDelegateFinishedSpeakingWithError:(id)error;
-(id)_notifyDelegateOpenURL:(id)url;
-(id)_recognitionResultHandlingThread;
-(void)_setAction:(id)action;
-(id)_topLevelKeywords;
-(id)beginNextAction;
-(id)beginSpeakingFeedbackString;
-(id)beginSpeakingString:(id)string;
-(id)cancel;
-(id)cancelMaintainingKeepAlive:(BOOL)alive;
-(void)dealloc;
-(id)debugDumpPath;
-(id)displayResultString;
-(id)displayStatusString;
-(BOOL)hasDeferredAction;
-(float)inputLevel;
-(float)inputLevelDB;
-(BOOL)isActivelyRecognizing;
-(BOOL)isBusy;
-(BOOL)isFinished;
-(BOOL)isRecognizing;
-(BOOL)isValid;
-(id)keywordAtIndex:(int)index;
-(int)keywordCount;
-(BOOL)nextActionWillRecognize;
-(BOOL)nextActionWillTerminateSession;
-(void)recognitionResultHandlingThread:(id)thread didHandleResults:(id)results nextAction:(id)action;
-(id)reset;
-(BOOL)sensitiveActionsEnabled;
-(BOOL)setBluetoothInputAllowed:(BOOL)allowed;
-(BOOL)setDebugDumpEnabled:(BOOL)enabled;
-(void)setDelegate:(id)delegate;
-(void)setInputLevelUpdateInterval:(double)interval;
-(void)setKeywordPhase:(unsigned)phase;
-(BOOL)setNextRecognitionAudioInputPath:(id)path;
-(BOOL)setNextRecognitionRequiresReset:(BOOL)reset;
-(void)setPerformRecognitionHandlerActions:(BOOL)actions;
-(BOOL)setPreferredEngine:(int)engine;
-(void)setSensitiveActionsEnabled:(BOOL)enabled;
-(void)speechSynthesizer:(id)synthesizer didFinishSpeaking:(BOOL)speaking withError:(id)error;
-(id)spokenFeedbackAttributedString;
-(id)spokenFeedbackString;
@end

