/* Module: sftrans1.dll
   Function: FUN_004650e0
   Address: 004650e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004650e0(double *param_1,undefined4 *param_2,double param_3)

{
  double *pdVar1;
  undefined1 uVar2;
  double *pdVar3;
  int iVar4;
  int iVar5;
  
  if ((param_3 < *param_1) || (param_1[1] < param_3)) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)((int)param_1 + 4) = 0xc12e8480;
    *(undefined4 *)((int)param_1 + 0xc) = 0x412e8480;
    iVar4 = **(int **)(param_1 + 5);
    iVar5 = 1;
    if (1 < iVar4) {
      pdVar1 = *(double **)((int)param_1 + 0x2c);
      do {
        pdVar3 = pdVar1 + 1;
        if ((*pdVar3 < param_3) && (*param_1 < *pdVar3)) {
          *(undefined4 *)param_1 = *(undefined4 *)pdVar3;
          *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)((int)pdVar1 + 0xc);
          *(int *)(param_1 + 4) = iVar5;
        }
        if ((param_3 <= *pdVar3) && (*pdVar3 < param_1[1])) {
          *(undefined4 *)(param_1 + 1) = *(undefined4 *)pdVar3;
          *(undefined4 *)((int)param_1 + 0xc) = *(undefined4 *)((int)pdVar1 + 0xc);
          *(int *)((int)param_1 + 0x24) = iVar5;
        }
        iVar5 = iVar5 + 1;
        pdVar1 = pdVar3;
      } while (iVar5 < iVar4);
    }
    iVar5 = *(int *)(param_1 + 4);
    iVar4 = *(int *)((int)param_1 + 0x24);
    if (*param_1 < _DAT_00560e60) {
      *(undefined4 *)param_1 = 0;
      *(int *)(param_1 + 4) = iVar4;
      *(undefined4 *)((int)param_1 + 4) = 0xc12e847c;
      uVar2 = ftol();
      *(undefined1 *)((int)param_1 + 0x36) = uVar2;
      uVar2 = ftol();
      *(undefined1 *)((int)param_1 + 0x35) = uVar2;
      uVar2 = ftol();
      *(undefined1 *)((int)param_1 + 0x34) = uVar2;
      uVar2 = ftol();
      *(undefined1 *)((int)param_1 + 0x37) = uVar2;
      *param_2 = *(undefined4 *)((int)param_1 + 0x34);
      return;
    }
    if (_DAT_00560e58 < param_1[1]) {
      *(undefined4 *)(param_1 + 1) = 0;
      *(int *)((int)param_1 + 0x24) = iVar5;
      *(undefined4 *)((int)param_1 + 0xc) = 0x412e847c;
      uVar2 = ftol();
      *(undefined1 *)((int)param_1 + 0x36) = uVar2;
      uVar2 = ftol();
      *(undefined1 *)((int)param_1 + 0x35) = uVar2;
      uVar2 = ftol();
      *(undefined1 *)((int)param_1 + 0x34) = uVar2;
      uVar2 = ftol();
      *(undefined1 *)((int)param_1 + 0x37) = uVar2;
      *param_2 = *(undefined4 *)((int)param_1 + 0x34);
      return;
    }
    param_1[2] = param_1[1] - *param_1;
    if (param_1[1] - *param_1 <= _DAT_00555910) {
      *(undefined4 *)(param_1 + 2) = 0;
      *(undefined4 *)((int)param_1 + 0x14) = 0x3ff00000;
    }
    param_1[3] = _DAT_00555908 / param_1[2];
  }
  else {
    iVar4 = *(int *)((int)param_1 + 0x24);
    iVar5 = *(int *)(param_1 + 4);
    if (iVar4 == iVar5) {
      *param_2 = *(undefined4 *)((int)param_1 + 0x34);
      return;
    }
  }
  if (_DAT_00555910 <
      (param_1[1] - param_3) * param_1[3] *
      (double)*(float *)((iVar5 + 1) * 0x10 + *(int *)(param_1 + 5) + 0xc) +
      (param_3 - *param_1) * param_1[3] *
      (double)*(float *)((iVar4 + 1) * 0x10 + *(int *)(param_1 + 5) + 0xc)) {
    uVar2 = ftol();
    *(undefined1 *)((int)param_2 + 2) = uVar2;
    uVar2 = ftol();
    *(undefined1 *)((int)param_2 + 1) = uVar2;
    uVar2 = ftol();
    *(undefined1 *)param_2 = uVar2;
    uVar2 = ftol();
    *(undefined1 *)((int)param_2 + 3) = uVar2;
    return;
  }
  *(undefined1 *)((int)param_2 + 3) = 0;
  *(undefined1 *)param_2 = 0;
  *(undefined1 *)((int)param_2 + 1) = 0;
  *(undefined1 *)((int)param_2 + 2) = 0;
  return;
}


