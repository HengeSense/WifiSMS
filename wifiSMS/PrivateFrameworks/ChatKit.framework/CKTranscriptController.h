/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "ABUnknownPersonViewControllerDelegate.h"
#import "ABNewPersonViewControllerDelegate.h"
#import "ABPersonViewControllerDelegate.h"
#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "UIModalViewDelegate.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UIActionSheetDelegate.h"
#import "ChatKit-Structs.h"
#import <UIKit/UIViewController.h>
#import "CKTranscriptController.h"

@class CKLinksController, CKService, CKRecipientGenerator, CKRecipientListView, CKMessageComposition, UIView, CKTranscriptBubbleData, UINavigationController, UINavigationItem, UIBarButtonItem, PLPhotoScrollerViewController, NSMutableArray, NSArray, CKMessageEntryView, UIFrameAnimation, NSDictionary, ABPeoplePickerNavigationController, UIToolbar, NSOperationQueue, UIKeyboard, CKTranscriptStatusController, CKTranscriptTableView, CKRecipientSelectionView, CKConversation, CKMessage, CKContentOffsetAnimation;

@interface CKTranscriptController : UIViewController <UIActionSheetDelegate, UIModalViewDelegate, UITableViewDataSource, UITableViewDelegate, ABPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, ABUnknownPersonViewControllerDelegate, ABNewPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate> {
	CKConversation* _conversation;
	UINavigationController* _navigationController;
	UINavigationItem* _navItem;
	CKTranscriptStatusController* _statusBar;
	UIBarButtonItem* _actionItem;
	UIBarButtonItem* _clearAllItem;
	UIView* _backPlacard;
	CKTranscriptTableView* _transcriptTable;
	CKRecipientListView* _recipientListView;
	CKRecipientSelectionView* _recipientSelectionView;
	CKMessageEntryView* _entryView;
	PLPhotoScrollerViewController* _photoScrollerForActionSheet;
	CKTranscriptBubbleData* _bubbleInfo;
	id _lastMessage;
	id _composeDelegate;
	NSMutableArray* _outboundMessageLayers;
	NSMutableArray* _replacementMessageLayers;
	NSMutableArray* _throwAnimations;
	int _finishedThrows;
	NSMutableArray* _bubblizationAnimations;
	int _finishedBubbs;
	CKMessage* _messageToThrow;
	CKMessage* _smartForwardMessage;
	NSMutableArray* _recipients;
	NSArray* _newCompositionAddresses;
	CKMessageComposition* _newComposition;
	CKContentOffsetAnimation* _transcriptAnimation;
	UIFrameAnimation* _messageEntryViewAnimation;
	unsigned _rotationBlockingAnimationCount;
	unsigned _needsSetupForNewRecipient : 1;
	unsigned _dirty : 1;
	unsigned _locked : 1;
	unsigned _visible : 1;
	unsigned _viewNeedsSetup : 1;
	unsigned _newRecipient : 1;
	unsigned _rescroll : 1;
	unsigned _sending : 1;
	unsigned _recipientListShouldBeExpanded : 1;
	unsigned _transitioningToTranscript : 1;
	unsigned _entryViewCanAcceptFocus : 1;
	unsigned _keyboardLayerOnScreen : 1;
	unsigned _willRotateView : 1;
	unsigned _isAnimatingMessageSend : 1;
	unsigned _isDeleting : 1;
	unsigned _ignoresOverlayViewsForLayout : 1;
	unsigned _didCancel : 1;
	CKService* _currentService;
	CKRecipientGenerator* _recipientGenerator;
	NSDictionary* _abPropertiesCache;
	ABPeoplePickerNavigationController* _peoplePickerController;
	CKLinksController* _linkViewController;
	UIToolbar* _actionsToolbar;
	NSOperationQueue* _mediaPreviewQueue;
	UIKeyboard* _keyboardLayer;
	float _transcriptTableBottomOffset;
}
@property(assign, nonatomic) CKService* currentService;
@property(retain, nonatomic) CKMessage* messageToThrow;
@property(retain, nonatomic) CKMessage* smartForwardMessage;
@property(assign, nonatomic) id composeDelegate;
+(UIColor*)tableColor;
-(id)initWithNavigationController:(UINavigationController*)navigationController;
-(void)dealloc;
-(void)loadView;
-(BOOL)_canReloadView;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation;
-(void)_getRotationContentSettings:(XXStruct_TF$i3B*)settings;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(id)rotatingFooterView;
-(void)_screenLocked:(id)locked;
-(void)_screenUnlocked:(id)unlocked;
-(void)conversationUpdate:(id)update;
-(void)_stopEntryViewAnimation:(BOOL)animation;
-(void)_stopTranscriptAnimation:(BOOL)animation;
-(void)_stopThrowAnimations:(BOOL)animations;
-(CGPoint)bestVisibleOffsetForBubbleAtIndex:(int)index;
-(void)scrollBubbleIndexToVisible:(int)visible;
-(void)setConversation:(id)conversation;
-(void)_reloadTranscriptLayer;
-(void)reload:(BOOL)reload;
-(id)conversation;
-(void)_setupRecipientSelectionView;
-(void)updateEnablednessOfSendButton;
-(void)_adjustMessageEntryViewOriginDelta:(float)delta heightDelta:(float)delta2 animate:(BOOL)animate animationLength:(float)length fastAnimate:(BOOL)animate5;
-(void)_adjustTranscriptContentOffset:(CGPoint)offset animate:(BOOL)animate animationLength:(float)length fastAnimate:(BOOL)animate4;
-(BOOL)isSendingMessage;
-(id)entryView;
-(void)_resetTranscriptAndKeyboard;
-(void)_cancelMessageSendAnimations;
-(void)_setupViewForConversation;
-(void)moveCursorToEnd;
-(void)updateTitle;
-(id)actionItem;
-(id)clearAllItem;
-(void)updateNavigationButtons;
-(void)cancelButtonClicked:(id)clicked;
-(void)smsComposeControllerCancelled:(id)cancelled;
-(CGPoint)tableView:(id)view newContentOffsetAfterUpdate:(CGPoint)update context:(id)context;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(void)dismissModalViewControllerAnimated:(BOOL)animated;
-(void)_deleteSelectedMessages:(id)messages;
-(void)_deleteMessagesAtIndexPaths:(id)indexPaths;
-(void)_forwardSelectedMessages:(id)messages;
-(void)actionButtonClicked:(id)clicked;
-(void)clearButtonClicked:(id)clicked;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(void)restoreEntryViewCursor;
-(void)_setupTranscriptHeader;
-(void)_clearExpandRecipientListFlag;
-(void)_loadMore;
-(void)_showTranscriptButtons;
-(void)_hideAccessoryView;
-(void)_hideTranscriptButtons;
-(id)bubbleData;
-(void)_computeBubbleData;
-(NSRange)addOutboundMessage:(id)message;
-(int)numberOfRows;
-(void)cleanUpAfterSendAttempt;
-(void)_incrementRotationBlockingAnimationCount;
-(void)_decrementRotationBlockingAnimationCount;
-(void)animator:(id)animator startAnimation:(id)animation;
-(void)animator:(id)animator stopAnimation:(id)animation;
-(CGPoint)_transcriptScrollToBottomOffsetWithHeightDelta:(float)heightDelta;
-(void)transitionFromNewMessageToConversation;
-(void)throwOutboundMessageToTable:(id)table;
-(void)bubbilizationFinished:(id)finished forAnimation:(id)animation;
-(float)_topPaddingForBubbleRow:(int)bubbleRow;
-(float)_bottomPaddingForBubbleRow:(int)bubbleRow;
-(float)_topPaddingForRow:(int)row forEditing:(BOOL)editing;
-(void)didBeginSendingComposition:(id)composition message:(id)message;
-(void)displayAlertSheet:(id)sheet;
-(void)dismissAlertSheet:(id)sheet;
-(void)clearCurrentMessageThread;
-(void)sendMessage:(id)message;
-(void)messageCellTappedBalloon:(id)balloon;
-(void)messageCellTappedFailureButton:(id)button;
-(void)_finishedCreatingNewMessageForSending:(id)sending;
-(void)_startCreatingNewMessageForSending:(id)sending;
-(void)send:(id)send;
-(void)_shrinkRecipientList;
-(CGRect)entryViewFinalFrame;
-(void)entryFieldDidBecomeActive:(id)entryField;
-(BOOL)entryFieldShouldBecomeActive:(id)entryField;
-(void)entryFieldAttachmentsChanged:(id)changed;
-(void)entryFieldContentChanged:(id)changed;
-(void)entryFieldSubjectChanged:(id)changed;
-(BOOL)entryField:(id)field shouldInsertMediaObject:(id)object;
-(void)messageEntryViewSendButtonHit:(id)hit;
-(BOOL)messageEntryView:(id)view contentSizeChanged:(CGSize)changed animate:(BOOL)animate;
-(id)composition;
-(void)clearComposition;
-(void)setMessageParts:(id)parts;
-(void)setComposition:(id)composition;
-(void)findConversationForRecipients:(id)recipients;
-(id)recipients;
-(id)proposedRecipients;
-(void)setNewComposition:(id)composition addresses:(id)addresses;
-(void)_setupNewComposition;
-(void)setupForNewRecipient;
-(BOOL)isNewRecipient;
-(void)addRecipient:(void*)recipient identifier:(int)identifier phoneNumber:(id)number makingContentEntryViewActive:(BOOL)active;
-(void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;
-(void)CKTranscriptHeaderView:(id)view buttonClicked:(int)clicked;
-(void)_resendMessageAtIndexPath:(id)indexPath;
-(void)alertSheet:(id)sheet buttonClicked:(int)clicked;
-(void)_actuallyClearCurrentMessageThread;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didDeselectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(BOOL)_editableAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view shouldIndentWhileEditingRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;
-(BOOL)_disclosureSupportsMediaType:(int)type;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view accessoryButtonTappedForRowWithIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)_abPersonViewControllerForPerson:(void*)person property:(int)property withIdentifier:(int)identifier;
-(void)_displayABPersonViewController:(id)controller;
-(void)showABCardForPerson:(void*)person highlightedProperty:(int)property identifier:(int)identifier;
-(BOOL)personViewController:(id)controller shouldPerformDefaultActionForPerson:(void*)person property:(int)property identifier:(int)identifier;
-(void)unknownPersonViewController:(id)controller didResolveToPerson:(void*)person;
-(void)_updateUI;
-(void)newPersonViewController:(id)controller didCompleteWithNewPerson:(void*)newPerson;
-(id)_unknownPersonViewControllerForProps:(id)props;
-(id)_personViewControllerForProps:(id)props;
-(void)showABCardForLinkProperties:(id)linkProperties;
-(void)showURLsForMessage:(id)message;
-(void)peoplePickerNavigationControllerDidCancel:(id)peoplePickerNavigationController;
-(BOOL)peoplePickerNavigationController:(id)controller shouldShowInsertEditorForPerson:(void*)person insertProperty:(int*)property copyInsertValue:(id*)value copyInsertLabel:(id*)label;
-(BOOL)peoplePickerNavigationController:(id)controller shouldDismissAfterInsertEditorConfirmed:(BOOL)confirmed withPerson:(void*)person;
-(void)dismissPeoplePicker:(id)picker;
-(void)dismissPeoplePicker;
-(void)showPeoplePickerWithDelegate:(id)delegate;
-(void)transcriptController:(id)controller showPeoplePickerWithDelegate:(id)delegate;
-(void)tearDownPeoplePicker;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person property:(int)property identifier:(int)identifier;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person;
-(void)peoplePickerNavigationController:(id)controller displayedMembersOfGroup:(void*)group;
-(void)peoplePickerNavigationControllerDisplayedGroups:(id)groups;
-(void*)_createPersonWithValue:(CFStringRef)value forMultiValueProperty:(int)multiValueProperty;
-(void)showNewContactViewForEntity:(id)entity;
-(void)showAddToExistingContactViewForEntity:(id)entity;
-(id)navigationItem;
-(void)_setEntryViewVisible:(BOOL)visible;
-(id)transcriptTable;
-(CGRect)clippedTargetRectForBalloon:(id)balloon;
-(void)linksController:(id)controller showABCardForLinkProperties:(id)linkProperties;
-(void)recipientListView:(id)view addressAtomClicked:(id)clicked;
-(void)recipientListView:(id)view contentSizeDidChange:(CGSize)contentSize;
-(void)recipientSelectionView:(id)view contentSizeChanged:(CGSize)changed;
-(BOOL)recipientSelectionView:(id)view isValidAddress:(id)address;
-(void)recipientSelectionViewTextChanged:(id)changed;
-(void)recipientSelectionViewRecipientListChanged:(id)changed;
-(void)recipientSelectionView:(id)view showPeoplePickerWithDelegate:(id)delegate;
-(void)recipientSelectionViewFinishedWithPeoplePicker:(id)peoplePicker;
-(id)recipientSelectionView:(id)view recipientForAddress:(id)address;
-(id)recipientSelectionView:(id)view recipientForRecord:(void*)record property:(int)property identifier:(int)identifier;
-(id)recipientSelectionView:(id)view recipientsForText:(id)text;
-(void)transcriptStatusBar:(id)bar showNavBarTitle:(id)title;
-(void)transcriptStatusBar:(id)bar showNavBarCustomView:(id)view;
-(void)animationDidStop:(id)animation finished:(id)finished context:(void*)context;
-(id)_recipientGenerator;
-(id)_actionsToolbar;
-(void)_updateActionsToolbarItems;
-(void)_updateActionsToolbarItemsForRotation:(int)rotation;
-(void)_makeContentEntryViewActive;
-(void)_makeRecipientEntryViewActive;
-(void)_makeFieldForFocusActive;
-(id)_fieldForFocus;
-(void)_deactivateContentEntryView;
-(void)_resetEntryViewSize;
-(void)_updatePhotoButtonEnabled;
-(void)_refreshKeyboardAndAdjustFocus:(BOOL)focus;
-(void)_hideKeyboard;
-(void)_hideKeyboardAndDeactivateContent:(BOOL)content;
-(void)_showKeyboard:(BOOL)keyboard;
-(void)_showKeyboard:(BOOL)keyboard activateContent:(BOOL)content;
-(float)_maxHeightForOverlayView:(id)overlayView entryViewResize:(int)resize;
-(float)_overlayViewMinHeight;
-(id)_overlayView;
-(void)_showRecipientListView;
-(void)_hideRecipientListView;
-(void)_updateRecipientListView;
-(void)_synchronizeStatusBarStyle:(BOOL)style;
-(id)_statusBar;
-(void)_adjustCustomTitleViewFrame:(int)frame;
-(void)_refreshTranscript;
-(void)_refreshTranscript:(BOOL)transcript;
-(void)_resetTranscriptInsets;
-(void)_calculateTopVisibleRow:(int*)row andOffset:(float*)offset forTransitionToEditing:(BOOL)editing;
-(CGPoint)_offsetForRow:(int)row withInternalOffset:(float)internalOffset;
-(float)_maximumContentOffset;
@end

@interface CKTranscriptController (MediaEntry)
+(void)_sendDidStartSavingImageNotification;
+(void)_sendDidFinishSavingImageNotificationWithImage:(id)_send error:(id)error context:(void*)context;
-(void)_setupMediaEntryViewWithFrame:(CGRect)frame;
-(void)addMedia:(id)media;
-(void)actionSheet:(id)sheet didDismissWithButtonIndex:(int)buttonIndex;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)_showMediaSourceSelectionSheet;
-(void)_showPhotoPickerWithSourceType:(unsigned)sourceType;
-(void)imagePickerControllerDidCancel:(id)imagePickerController;
-(void)imagePickerController:(id)controller didFinishPickingMediaWithInfo:(id)info;
-(void)_addPreviewGeneratorObject:(id)object;
-(void)_generatePreviewsForMediaObject:(id)mediaObject;
-(void)_addPart:(id)part;
-(void)ckMediaPreviewGeneratorFinished:(id)finished;
-(void)_showPhotoScrollerForTranscriptStartingAtRow:(int)row;
-(BOOL)photoScrollerShouldShowActionItem:(id)photoScroller;
-(void)photoScroller:(id)scroller showActionSheetInView:(id)view;
-(void)_showMediaForTranscriptStartingAtRow:(int)row;
-(void)_showVCardViewerForRow:(int)row;
-(void)_showVCalViewerForRow:(int)row;
-(id)_supportedMediaTypesForPhotoPicker;
@end

@interface CKTranscriptController (Testing)
-(void)entryDebugClear;
-(void)entryDebugSliderChange:(id)change;
-(void)_entryDebugShowEntryHUD;
@end

