/* Module: vidpcore.dll
   Function: FUN_5de72ad0
   Address: 5de72ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5de72ad0(int *param_1,undefined4 param_2,undefined4 param_3,HWND param_4)

{
  double dVar1;
  int iVar2;
  HWND pHVar3;
  
  iVar2 = FUN_5deb35b0(param_2,param_3,param_4,1,100);
  pHVar3 = GetDlgItem((HWND)param_1[0xc],0x41d);
  if (param_4 == pHVar3) {
    dVar1 = (double)iVar2 * _DAT_5df1f300;
    *(double *)(param_1 + 0x14) = dVar1;
    if (*(double *)(param_1 + 0x16) < dVar1) {
      *(double *)(param_1 + 0x16) = dVar1;
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    }
  }
  else {
    pHVar3 = GetDlgItem((HWND)param_1[0xc],0x41f);
    if (param_4 == pHVar3) {
      dVar1 = (double)iVar2 * _DAT_5df1f300;
      *(double *)(param_1 + 0x16) = dVar1;
      if (dVar1 < *(double *)(param_1 + 0x14)) {
        *(double *)(param_1 + 0x14) = dVar1;
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    }
    pHVar3 = GetDlgItem((HWND)param_1[0xc],0x421);
    if (param_4 == pHVar3) {
      dVar1 = (double)iVar2 * _DAT_5df1f300;
      *(double *)(param_1 + 0x18) = dVar1;
      if (*(double *)(param_1 + 0x1a) < dVar1) {
        *(double *)(param_1 + 0x1a) = dVar1;
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    }
    pHVar3 = GetDlgItem((HWND)param_1[0xc],0x423);
    if (param_4 != pHVar3) {
      pHVar3 = GetDlgItem((HWND)param_1[0xc],0x425);
      if (param_4 == pHVar3) {
        *(double *)(param_1 + 0x1c) = (double)iVar2 * _DAT_5df22b70 * _DAT_5df1f300 + _DAT_5df22b68;
        (**(code **)(*param_1 + 0x2c))(param_1);
      }
      return 0;
    }
    dVar1 = (double)iVar2 * _DAT_5df1f300;
    *(double *)(param_1 + 0x1a) = dVar1;
    if (dVar1 < *(double *)(param_1 + 0x18)) {
      *(double *)(param_1 + 0x18) = dVar1;
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    }
  }
  (**(code **)(*param_1 + 0x2c))(param_1);
  return 0;
}


