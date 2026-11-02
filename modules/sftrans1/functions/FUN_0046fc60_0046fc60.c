/* Module: sftrans1.dll
   Function: FUN_0046fc60
   Address: 0046fc60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0046fc60(int *param_1,undefined4 param_2,undefined4 param_3,HWND param_4)

{
  double dVar1;
  int iVar2;
  HWND pHVar3;
  int iVar4;
  
  iVar2 = FUN_004c4710(0x114,param_3,param_4,0x41,0x1999);
  pHVar3 = GetDlgItem((HWND)param_1[0xc],0x5b2);
  if (param_4 == pHVar3) {
    iVar4 = ftol();
    if (iVar4 != iVar2) {
      dVar1 = (double)iVar2 * _DAT_0055f640;
      *(double *)(param_1 + 0x20) = dVar1;
      if (param_1[0x24] != 0) {
        *(double *)(param_1 + 0x22) = dVar1;
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    }
  }
  else {
    pHVar3 = GetDlgItem((HWND)param_1[0xc],0x5b5);
    if (param_4 == pHVar3) {
      iVar4 = ftol();
      if (iVar4 != iVar2) {
        *(double *)(param_1 + 0x22) = (double)iVar2 * _DAT_0055f640;
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
    }
    else {
      pHVar3 = GetDlgItem((HWND)param_1[0xc],0x5b0);
      if (param_4 == pHVar3) {
        iVar4 = ftol();
        if (iVar4 != iVar2) {
          *(double *)(param_1 + 0x1a) = (double)iVar2 * _DAT_00561558 - _DAT_00555908;
          (**(code **)(*param_1 + 0x2c))(param_1);
        }
      }
    }
  }
  return 0;
}


