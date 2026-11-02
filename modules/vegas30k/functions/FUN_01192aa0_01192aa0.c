/* Module: vegas30k.dll
   Function: FUN_01192aa0
   Address: 01192aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01192aa0(undefined4 param_1,uint *param_2)

{
  int iVar1;
  
  if (((*param_2 & 0x10800000) != 0) && (iVar1 = FUN_01183340(0), iVar1 < 0)) {
    return;
  }
  if (DAT_012b0b30 != (code *)0x0) {
    (*DAT_012b0b30)(DAT_012b0b2c,0,param_2,DAT_012b0b34,param_1,0);
  }
  return;
}


