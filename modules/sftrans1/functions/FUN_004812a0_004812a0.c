/* Module: sftrans1.dll
   Function: FUN_004812a0
   Address: 004812a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004812a0(int *param_1,undefined4 param_2,undefined4 param_3,HWND param_4)

{
  int *piVar1;
  double dVar2;
  int iVar3;
  
  iVar3 = GetDlgCtrlID(param_4);
  if (iVar3 == 0x64d) {
    iVar3 = FUN_004c4710(param_2,param_3,param_4,1,100);
    if ((double)iVar3 * _DAT_0055ca40 != *(double *)(param_1[0xc] + 0x90)) {
      *(double *)(param_1[0xc] + 0x90) = (double)iVar3 * _DAT_0055ca40;
      piVar1 = (int *)param_1[0xd];
      if (piVar1 == (int *)0x0) {
        return 0;
      }
      (**(code **)(*piVar1 + 0x2c))(piVar1);
      return 0;
    }
  }
  else {
    if (iVar3 == 0x64f) {
      iVar3 = FUN_004c4710(param_2,param_3,param_4,1,100);
      if ((double)iVar3 * _DAT_0055ca40 == *(double *)(param_1[0xc] + 0x88)) {
        (**(code **)(*param_1 + 8))();
        return 0;
      }
      *(double *)(param_1[0xc] + 0x88) = (double)iVar3 * _DAT_0055ca40;
      piVar1 = (int *)param_1[0xd];
      if (piVar1 == (int *)0x0) {
        return 0;
      }
      (**(code **)(*piVar1 + 0x2c))(piVar1);
      return 0;
    }
    if (iVar3 != 0x660) {
      return 0;
    }
    iVar3 = FUN_004c4710(param_2,param_3,param_4,1,100);
    if (iVar3 < 0x3e9) {
      dVar2 = (double)iVar3 * _DAT_0055ca40;
    }
    else {
      dVar2 = ((double)iVar3 - _DAT_0055f598) * _DAT_005633b8 + _DAT_00555908;
    }
    if (dVar2 != *(double *)(param_1[0xc] + 0x98)) {
      *(double *)(param_1[0xc] + 0x98) = dVar2;
      piVar1 = (int *)param_1[0xd];
      if (piVar1 == (int *)0x0) {
        return 0;
      }
      (**(code **)(*piVar1 + 0x2c))(piVar1);
      return 0;
    }
  }
  (**(code **)(*param_1 + 8))();
  return 0;
}


