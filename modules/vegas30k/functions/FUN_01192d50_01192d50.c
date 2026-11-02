/* Module: vegas30k.dll
   Function: FUN_01192d50
   Address: 01192d50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01192d50(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (((DAT_012b0b30 == (code *)0x0) ||
      (iVar1 = (*DAT_012b0b30)(DAT_012b0b2c,0x8000,param_2,DAT_012b0b34,param_1,0), iVar1 == 0)) &&
     ((*param_2 & 0x20000000) != 0)) {
    iVar1 = FUN_01183370(*param_1,param_1[1]);
    if (-1 < iVar1) {
      iVar1 = FUN_011833a0(*param_1,param_1[1]);
      if (iVar1 < 0) {
        FUN_01183390();
        if ((*param_2 & 0x800000) != 0) {
          FUN_01183360();
        }
        return iVar1;
      }
      return iVar1;
    }
    if ((*param_2 & 0x800000) != 0) {
      FUN_01183360();
    }
  }
  return iVar1;
}


