/* Module: mpgvout.001
   Function: FUN_10032578
   Address: 10032578
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_10032578(uint param_1,int param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_2 < param_4) {
LAB_10032592:
    uVar1 = 0;
  }
  else {
    if (param_2 <= param_4) {
      if (param_1 < param_3) goto LAB_10032592;
      if (param_1 <= param_3) {
        return 1;
      }
    }
    uVar1 = 2;
  }
  return uVar1;
}


