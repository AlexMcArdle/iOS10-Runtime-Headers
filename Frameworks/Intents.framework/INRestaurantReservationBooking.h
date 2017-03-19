/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INRestaurantReservationBooking : NSObject <INRestaurantReservationBookingExport, NSCopying, NSSecureCoding> {
    bool  _bookingAvailable;
    NSDate * _bookingDate;
    NSString * _bookingDescription;
    NSString * _bookingIdentifier;
    NSArray * _offers;
    unsigned long long  _partySize;
    bool  _requiresEmailAddress;
    bool  _requiresManualRequest;
    bool  _requiresName;
    bool  _requiresPhoneNumber;
    INRestaurant * _restaurant;
}

@property (getter=isBookingAvailable, nonatomic) bool bookingAvailable;
@property (nonatomic, copy) NSDate *bookingDate;
@property (nonatomic, copy) NSString *bookingDescription;
@property (nonatomic, copy) NSString *bookingIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *offers;
@property (nonatomic) unsigned long long partySize;
@property (nonatomic) bool requiresEmailAddress;
@property (nonatomic) bool requiresManualRequest;
@property (nonatomic) bool requiresName;
@property (nonatomic) bool requiresPhoneNumber;
@property (nonatomic, copy) INRestaurant *restaurant;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)bookingDate;
- (id)bookingDescription;
- (id)bookingIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRestaurant:(id)arg1 bookingDate:(id)arg2 partySize:(unsigned long long)arg3 bookingIdentifier:(id)arg4;
- (bool)isBookingAvailable;
- (bool)isEqual:(id)arg1;
- (id)offers;
- (unsigned long long)partySize;
- (bool)requiresEmailAddress;
- (bool)requiresManualRequest;
- (bool)requiresName;
- (bool)requiresPhoneNumber;
- (id)restaurant;
- (void)setBookingAvailable:(bool)arg1;
- (void)setBookingDate:(id)arg1;
- (void)setBookingDescription:(id)arg1;
- (void)setBookingIdentifier:(id)arg1;
- (void)setOffers:(id)arg1;
- (void)setPartySize:(unsigned long long)arg1;
- (void)setRequiresEmailAddress:(bool)arg1;
- (void)setRequiresManualRequest:(bool)arg1;
- (void)setRequiresName:(bool)arg1;
- (void)setRequiresPhoneNumber:(bool)arg1;
- (void)setRestaurant:(id)arg1;

@end
