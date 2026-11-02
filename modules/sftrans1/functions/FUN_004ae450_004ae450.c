/* Module: sftrans1.dll
   Function: FUN_004ae450
   Address: 004ae450
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004ae450(int *param_1,undefined4 param_2,undefined4 param_3,HWND param_4)

{
  int iVar1;
  HWND pHVar2;
  
  iVar1 = FUN_004c4710(param_2,param_3,param_4,1,0x1999);
  pHVar2 = GetDlgItem((HWND)param_1[0xc],0x6df);
  if (param_4 == pHVar2) {
    param_1[0x14] = (int)((float)iVar1 * (float)_DAT_0055f640);
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
  pHVar2 = GetDlgItem((HWND)param_1[0xc],0x6e2);
  if (param_4 == pHVar2) {
    param_1[0x15] = (int)((float)iVar1 * (float)_DAT_00563ce0);
    (**(code **)(*param_1 + 0x2c))(param_1);
  }
  return 0;
}


