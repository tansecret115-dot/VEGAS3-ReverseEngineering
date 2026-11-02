/* Module: vidpcore.dll
   Function: FUN_5de69de0
   Address: 5de69de0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5de69de0(int *param_1,undefined4 param_2,undefined4 param_3,HWND param_4)

{
  int iVar1;
  HWND pHVar2;
  int iVar3;
  
  iVar1 = FUN_5deb35b0(param_2,param_3,param_4,1,100);
  pHVar2 = GetDlgItem((HWND)param_1[0xc],0xc9);
  if (param_4 == pHVar2) {
    iVar3 = ftol();
    if (iVar3 != iVar1) {
      *(double *)(param_1 + 0x1a) = (double)iVar1 * _DAT_5df1f300;
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    }
  }
  else {
    pHVar2 = GetDlgItem((HWND)param_1[0xc],0xca);
    if (param_4 == pHVar2) {
      iVar3 = ftol();
      if (iVar3 != iVar1) {
        *(double *)(param_1 + 0x1c) = (double)iVar1 * _DAT_5df1f300;
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
    }
    else {
      pHVar2 = GetDlgItem((HWND)param_1[0xc],0xcb);
      if (param_4 == pHVar2) {
        iVar3 = ftol();
        if (iVar3 != iVar1) {
          *(double *)(param_1 + 0x1e) = (double)iVar1 * _DAT_5df1f300;
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
      }
      else {
        pHVar2 = GetDlgItem((HWND)param_1[0xc],0xcd);
        if (param_4 == pHVar2) {
          iVar3 = ftol();
          if (iVar3 != iVar1) {
            *(double *)(param_1 + 0x20) = (double)iVar1 * _DAT_5df1f300;
            (**(code **)(*param_1 + 0x2c))(param_1);
          }
        }
      }
    }
  }
  return 0;
}


