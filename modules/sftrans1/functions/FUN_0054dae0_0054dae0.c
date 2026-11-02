/* Module: sftrans1.dll
   Function: FUN_0054dae0
   Address: 0054dae0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0054dae0(int param_1,int param_2,int param_3,double param_4,double param_5)

{
  int *piVar1;
  double *pdVar2;
  double *pdVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  
  dVar5 = _DAT_00555910;
  piVar1 = *(int **)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8);
  pdVar2 = *(double **)(piVar1[2] + param_2 * 4);
  param_4 = param_4 - *pdVar2;
  param_5 = param_5 - pdVar2[1];
  if (param_3 == 5) {
    if (param_2 == 0) {
      return;
    }
    *(undefined1 *)((int)pdVar2 + 0x39) = 0;
    if (dVar5 < param_4) {
      param_4 = _DAT_00555910;
    }
    if (0 < param_2) {
      pdVar3 = *(double **)
                (*(int *)(*(int *)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8) + 8) +
                 -4 + *(int *)(param_1 + 0x158) * 4);
      dVar5 = *pdVar2 - *pdVar3;
      if (dVar5 < -param_4) {
        param_4 = *pdVar3 - *pdVar2;
      }
      pdVar2[3] = -(param_4 / dVar5);
    }
    pdVar2[5] = param_4;
    dVar5 = -param_4;
    bVar4 = _DAT_00563840 <= dVar5;
    pdVar2[6] = param_5;
    if (bVar4) {
      pdVar2[4] = param_5 / param_4;
    }
    dVar7 = _DAT_00557828;
    dVar6 = _DAT_00555908;
    if (*(char *)((int)pdVar2 + 0x15) != '\0') {
      if (dVar5 < _DAT_00563840) {
        if (param_5 < _DAT_00555910) {
          *(undefined1 *)((int)pdVar2 + 0x61) = 1;
          pdVar2[0xb] = dVar6;
          FUN_0054f0c0();
          return;
        }
        *(undefined1 *)((int)pdVar2 + 0x61) = 1;
        pdVar2[0xb] = dVar7;
        FUN_0054f0c0();
        return;
      }
      *(undefined1 *)((int)pdVar2 + 0x61) = 0;
      pdVar2[9] = pdVar2[4];
      if ((pdVar2[10] < _DAT_00563840) && (ABS(pdVar2[0xb]) < _DAT_00563840)) {
        pdVar2[0xb] = -param_5;
        pdVar2[10] = dVar5;
        FUN_0054f0c0();
        return;
      }
      pdVar2[0xb] = pdVar2[4] * pdVar2[10];
      FUN_0054f0c0();
      return;
    }
  }
  else {
    if (param_2 == *piVar1 + -1) {
      return;
    }
    bVar4 = param_4 < _DAT_00555910;
    *(undefined1 *)((int)pdVar2 + 0x61) = 0;
    if (bVar4) {
      param_4 = _DAT_00555910;
    }
    piVar1 = *(int **)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8);
    iVar8 = *(int *)(param_1 + 0x158) + 1;
    if (iVar8 < *piVar1) {
      dVar5 = **(double **)(piVar1[2] + iVar8 * 4) - *pdVar2;
      if (dVar5 < param_4) {
        param_4 = dVar5;
      }
      pdVar2[8] = param_4 / dVar5;
    }
    bVar4 = _DAT_00563840 <= param_4;
    pdVar2[10] = param_4;
    pdVar2[0xb] = param_5;
    if (bVar4) {
      pdVar2[9] = param_5 / param_4;
    }
    dVar6 = _DAT_00557828;
    dVar5 = _DAT_00555908;
    if (*(char *)((int)pdVar2 + 0x15) != '\0') {
      if (param_4 < _DAT_00563840) {
        if (param_5 < _DAT_00555910) {
          *(undefined1 *)((int)pdVar2 + 0x39) = 1;
          pdVar2[6] = dVar5;
          FUN_0054f0c0();
          return;
        }
        *(undefined1 *)((int)pdVar2 + 0x39) = 1;
        pdVar2[6] = dVar6;
        FUN_0054f0c0();
        return;
      }
      *(undefined1 *)((int)pdVar2 + 0x39) = 0;
      pdVar2[4] = pdVar2[9];
      if ((-pdVar2[5] < _DAT_00563840) && (ABS(pdVar2[6]) < _DAT_00563840)) {
        pdVar2[5] = -param_4;
        pdVar2[6] = -param_5;
        FUN_0054f0c0();
        return;
      }
      pdVar2[6] = pdVar2[9] * pdVar2[5];
      FUN_0054f0c0();
      return;
    }
  }
  FUN_0054f0c0();
  return;
}


