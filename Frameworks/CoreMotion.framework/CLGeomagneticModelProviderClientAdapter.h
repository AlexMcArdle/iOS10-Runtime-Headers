/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLGeomagneticModelProviderClientAdapter : CLNotifierServiceAdapter <CLGeomagneticModelProviderClientProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool valid;

+ (void)becameFatallyBlocked:(id)arg1;
+ (id)getSilo;
+ (bool)isSupported;
+ (void)performSyncOnSilo:(id)arg1 invoker:(id /* block */)arg2;

- (/* Warning: unhandled struct encoding: '{CLGeomagneticModelProviderClient=^^?{BasicMutex=^^?^{MutexInfo}}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}@@{map<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::Notification, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::Notification> > >={__tree<std::__1::__value_type<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::Notification>, std::__1::__map_value_compare<int, std::__1::__value_type<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::Notification>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::Notification> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::Notification>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::Notification>, std::__1::less<int>, true> >=Q}}}{map<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::ClientNotifications, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::ClientNotifications> > >={__tree<std::__1::__value_type<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::ClientNotifications>, std::__1::__map_value_compare<int, std::__1::__value_type<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::ClientNotifications>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::ClientNotifications> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::ClientNotifications>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::ClientNotifications>, std::__1::less<int>, true> >=Q}}}iB^{CLConnectionClient}@}' */ struct CLGeomagneticModelProviderClient { int (**x1)(); struct BasicMutex { int (**x_2_1_1)(); struct MutexInfo {} *x_2_1_2; } x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; id x4; struct map<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::Notification, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::Notification> > > { struct __tree<std::__1::__value_type<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::Notification>, std::__1::__map_value_compare<int, std::__1::__value_type<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::Notification>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::Notification> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::Notification>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::Notification>, std::__1::less<int>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_5_1_1; } x5; }*)adaptee;
- (void)beginService;
- (void)doAsync:(id /* block */)arg1;
- (void)doAsync:(id /* block */)arg1 withReply:(id /* block */)arg2;
- (void)endService;
- (id)initInSilo:(id)arg1;
- (bool)syncgetDoSync:(id /* block */)arg1;

@end