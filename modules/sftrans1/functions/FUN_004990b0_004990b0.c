/* Module: sftrans1.dll
   Function: FUN_004990b0
   Address: 004990b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004990b0(int *param_1,undefined4 param_2,undefined4 param_3,HWND param_4)

{
  int iVar1;
  HWND pHVar2;
  
  iVar1 = FUN_004c4710(0x114,param_3,param_4,6,0x1999);
  pHVar2 = GetDlgItem((HWND)param_1[0xc],0x1648);
  if (param_4 == pHVar2) {
    if ((float)iVar1 * _DAT_0055c070 != (float)param_1[0x1b]) {
      param_1[0x1b] = (int)((float)iVar1 * _DAT_0055c070);
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    }
  }
  else {
    pHVar2 = GetDlgItem((HWND)param_1[0xc],0x164b);
    if (param_4 == pHVar2) {
      if ((float)iVar1 * _DAT_0055c070 != (float)param_1[0x1c]) {
        param_1[0x1c] = (int)((float)iVar1 * _DAT_0055c070);
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
    }
    else {
      pHVar2 = GetDlgItem((HWND)param_1[0xc],0x164c);
      if ((param_4 == pHVar2) && ((float)iVar1 * _DAT_0055c070 != (float)param_1[0x1a])) {
        param_1[0x1a] = (int)((float)iVar1 * _DAT_0055c070);
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
    }
  }
  return 0;
}


