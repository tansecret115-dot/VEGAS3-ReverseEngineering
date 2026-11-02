/* Module: sftrans1.dll
   Function: FUN_004580a0
   Address: 004580a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004580a0(int *param_1,undefined4 param_2,undefined4 param_3,HWND param_4)

{
  int iVar1;
  HWND pHVar2;
  
  iVar1 = FUN_004c4710(param_2,param_3,param_4,0x41,0x1999);
  pHVar2 = GetDlgItem((HWND)param_1[0xc],0x459);
  if (param_4 == pHVar2) {
    param_1[0x14] = (int)((float)iVar1 * _DAT_0055c070);
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
  pHVar2 = GetDlgItem((HWND)param_1[0xc],0x45b);
  if (param_4 == pHVar2) {
    param_1[0x15] = (int)((float)iVar1 * _DAT_0055c070);
    (**(code **)(*param_1 + 0x2c))(param_1);
  }
  return 0;
}


