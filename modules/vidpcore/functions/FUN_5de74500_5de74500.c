/* Module: vidpcore.dll
   Function: FUN_5de74500
   Address: 5de74500
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5de74500(int *param_1,undefined4 param_2,undefined4 param_3,HWND param_4)

{
  double dVar1;
  int iVar2;
  HWND pHVar3;
  
  iVar2 = FUN_5deb35b0(param_2,param_3,param_4,1,100);
  pHVar3 = GetDlgItem((HWND)param_1[0xc],0x42d);
  if (param_4 != pHVar3) {
    pHVar3 = GetDlgItem((HWND)param_1[0xc],0x42e);
    if (param_4 == pHVar3) {
      dVar1 = (double)iVar2 * _DAT_5df1f300;
      *(double *)(param_1 + 0x18) = dVar1;
      if (dVar1 < *(double *)(param_1 + 0x16)) {
        *(double *)(param_1 + 0x16) = dVar1;
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
    }
    else {
      pHVar3 = GetDlgItem((HWND)param_1[0xc],0x433);
      dVar1 = (double)iVar2 * _DAT_5df1f300;
      if (param_4 == pHVar3) {
        *(double *)(param_1 + 0x1a) = dVar1;
        if (*(double *)(param_1 + 0x1c) < dVar1) {
          *(double *)(param_1 + 0x1c) = dVar1;
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
      *(double *)(param_1 + 0x1c) = dVar1;
      if (dVar1 < *(double *)(param_1 + 0x1a)) {
        *(double *)(param_1 + 0x1a) = dVar1;
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
    }
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
  dVar1 = (double)iVar2 * _DAT_5df1f300;
  *(double *)(param_1 + 0x16) = dVar1;
  if (*(double *)(param_1 + 0x18) < dVar1) {
    *(double *)(param_1 + 0x18) = dVar1;
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
  (**(code **)(*param_1 + 0x2c))(param_1);
  return 0;
}


