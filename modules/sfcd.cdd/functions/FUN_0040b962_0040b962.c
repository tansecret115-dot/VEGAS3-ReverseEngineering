/* Module: sfcd.cdd
   Function: FUN_0040b962
   Address: 0040b962
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0040b962(undefined4 param_1,byte param_2,undefined4 param_3,uint param_4)

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
  if ((param_4 & 8) != 0) {
    *in_EAX = 0x81;
  }
  if ((param_4 & 1) != 0) {
    *in_EAX = *in_EAX | 0x10;
  }
  if ((param_4 & 2) != 0) {
    *in_EAX = *in_EAX | 0x20;
  }
  if ((param_4 & 4) != 0) {
    in_EAX[3] = 2;
    in_EAX[4] = 3;
    *in_EAX = *in_EAX | 0x40;
    return 0;
  }
  in_EAX[3] = param_2;
  in_EAX[4] = param_2;
  return 0;
}


