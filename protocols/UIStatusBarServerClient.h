/* Generated by RuntimeBrowser.
 */

@protocol UIStatusBarServerClient

@required

- (void)statusBarServer:(UIStatusBarServer *)arg1 didReceiveDoubleHeightStatusString:(NSString *)arg2 forStyle:(long long)arg3;
- (void)statusBarServer:(UIStatusBarServer *)arg1 didReceiveGlowAnimationState:(bool)arg2 forStyle:(long long)arg3;
- (void)statusBarServer:(UIStatusBarServer *)arg1 didReceiveStatusBarData:(const struct { bool x1[35]; BOOL x2[64]; int x3; int x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[2][100]; BOOL x8[1024]; unsigned int x9; int x10; int x11; unsigned int x12; int x13; unsigned int x14; BOOL x15[150]; int x16; int x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; BOOL x21[256]; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; BOOL x31[256]; BOOL x32[256]; BOOL x33[100]; unsigned int x34 : 1; unsigned int x35 : 1; }*)arg2 withActions:(int)arg3;
- (void)statusBarServer:(UIStatusBarServer *)arg1 didReceiveStyleOverrides:(int)arg2;

@end
