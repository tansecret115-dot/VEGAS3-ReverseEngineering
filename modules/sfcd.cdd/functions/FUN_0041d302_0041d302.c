/* Module: sfcd.cdd
   Function: FUN_0041d302
   Address: 0041d302
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall
FUN_0041d302(undefined4 param_1,byte param_2,int param_3,undefined4 param_4,uint param_5)

{
  byte *in_EAX;
  
  in_EAX[0] = 0;
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  in_EAX[5] = 0;
  in_EAX[6] = 0;
  in_EAX[7] = 0;
  *in_EAX = 1;
  if ((param_5 & 8) != 0) {
    *in_EAX = 0x81;
  }
  if ((param_5 & 1) != 0) {
    *in_EAX = *in_EAX | 0x10;
  }
  if ((param_5 & 2) != 0) {
    *in_EAX = *in_EAX | 0x20;
  }
  if ((param_5 & 4) != 0) {
    *in_EAX = *in_EAX | 0x40;
    if (*(char *)(param_3 + 0x290) == '\x03') {
      in_EAX[3] = 0x21;
      in_EAX[4] = param_2;
      return 0;
    }
    in_EAX[3] = 0x10;
    in_EAX[4] = param_2;
    return 0;
  }
  in_EAX[3] = param_2;
  in_EAX[4] = param_2;
  return 0;
}


