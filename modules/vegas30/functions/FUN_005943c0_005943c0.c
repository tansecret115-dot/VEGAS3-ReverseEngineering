/* Module: vegas30.exe
   Function: FUN_005943c0
   Address: 005943c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005943c0(int param_1,undefined4 param_2,int param_3)

{
  if (param_1 == 0x22) {
    return param_3 + 0x1a;
  }
  if (param_1 == 0x20) {
    return param_3;
  }
  return -1;
}


