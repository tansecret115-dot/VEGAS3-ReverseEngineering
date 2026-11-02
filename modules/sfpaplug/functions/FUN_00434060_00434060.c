/* Module: sfpaplug.dll
   Function: FUN_00434060
   Address: 00434060
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00434060(short *param_1,short *param_2,uint param_3,int param_4)

{
  int iVar1;
  
  if (param_2 != (short *)0x0) {
    iVar1 = FUN_004340a0(param_1,param_2,param_3);
    if (iVar1 == 0) {
      if (param_4 != 0) {
        return 0;
      }
    }
    else if (param_4 == 0) {
      return 0;
    }
  }
  return 1;
}


