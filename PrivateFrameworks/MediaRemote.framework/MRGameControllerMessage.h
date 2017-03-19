/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRGameControllerMessage : MRProtocolMessage {
    bool  _eventInitialized;
    struct { 
        int type; 
        union { 
            struct { 
                struct { 
                    double x; 
                    double y; 
                    double z; 
                } gravity; 
                struct { 
                    double x; 
                    double y; 
                    double z; 
                } userAcceleration; 
            } motion; 
            struct { 
                float buttonA; 
                float buttonX; 
                float buttonPause; 
            } buttons; 
            struct { 
                struct { 
                    float buttonA; 
                    float buttonX; 
                    float buttonPause; 
                } buttons; 
                float dpadX; 
                float dpadY; 
                float buttonB; 
                float buttonY; 
                float leftShoulder; 
                float rightShoulder; 
                float leftThumbstickX; 
                float leftThumbstickY; 
                float rightThumbstickX; 
                float rightThumbstickY; 
                float leftTrigger; 
                float rightTrigger; 
            } extendedButtons; 
            struct { 
                float x; 
                float y; 
                bool touchDown; 
                unsigned long long timestamp; 
            } digitizer; 
        } ; 
    }  _gcEvent;
    bool  _hasEvent;
    unsigned long long  _priority;
}

@property (nonatomic, readonly) unsigned long long controllerID;
@property (nonatomic, readonly) struct { int x1; union { struct { struct { double x_1_3_1; double x_1_3_2; double x_1_3_3; } x_1_2_1; struct { double x_2_3_1; double x_2_3_2; double x_2_3_3; } x_1_2_2; } x_2_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_2_1_2; struct { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_3_2_1; float x_3_2_2; float x_3_2_3; float x_3_2_4; float x_3_2_5; float x_3_2_6; float x_3_2_7; float x_3_2_8; float x_3_2_9; float x_3_2_10; float x_3_2_11; float x_3_2_12; float x_3_2_13; } x_2_1_3; struct { float x_4_2_1; float x_4_2_2; bool x_4_2_3; unsigned long long x_4_2_4; } x_2_1_4; } x2; }*event;

- (unsigned long long)controllerID;
- (struct { int x1; union { struct { struct { double x_1_3_1; double x_1_3_2; double x_1_3_3; } x_1_2_1; struct { double x_2_3_1; double x_2_3_2; double x_2_3_3; } x_1_2_2; } x_2_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_2_1_2; struct { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_3_2_1; float x_3_2_2; float x_3_2_3; float x_3_2_4; float x_3_2_5; float x_3_2_6; float x_3_2_7; float x_3_2_8; float x_3_2_9; float x_3_2_10; float x_3_2_11; float x_3_2_12; float x_3_2_13; } x_2_1_3; struct { float x_4_2_1; float x_4_2_2; bool x_4_2_3; unsigned long long x_4_2_4; } x_2_1_4; } x2; }*)event;
- (id)initWithButtons:(struct { float x1; float x2; float x3; }*)arg1 controllerID:(unsigned long long)arg2;
- (id)initWithGameControllerEvent:(const struct { int x1; union { struct { struct { double x_1_3_1; double x_1_3_2; double x_1_3_3; } x_1_2_1; struct { double x_2_3_1; double x_2_3_2; double x_2_3_3; } x_1_2_2; } x_2_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_2_1_2; struct { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_3_2_1; float x_3_2_2; float x_3_2_3; float x_3_2_4; float x_3_2_5; float x_3_2_6; float x_3_2_7; float x_3_2_8; float x_3_2_9; float x_3_2_10; float x_3_2_11; float x_3_2_12; float x_3_2_13; } x_2_1_3; struct { float x_4_2_1; float x_4_2_2; bool x_4_2_3; unsigned long long x_4_2_4; } x_2_1_4; } x2; }*)arg1 controllerID:(unsigned long long)arg2;
- (unsigned long long)priority;
- (bool)shouldLog;
- (unsigned long long)type;

@end
