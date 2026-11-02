/* Module: mp3plug.dll
   Function: FUN_5f6a4ed0
   Address: 5f6a4ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_5f6a4ed0(int param_1,double *param_2,undefined4 param_3,uint *param_4,double *param_5,
            int param_6,int *param_7)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  uint _NewValue;
  double *pdVar5;
  int iVar6;
  double *pdVar7;
  double *pdVar8;
  bool bVar9;
  
  pdVar8 = param_2;
  pdVar5 = (double *)0x0;
  param_2 = (double *)0x0;
  iVar6 = 0;
  if (param_6 == 0) goto LAB_5f6a5156;
  if (*(int *)(param_1 + 4) == 2) {
    dVar1 = param_5[param_6 * 2 + -2];
    uVar2 = *(undefined4 *)(param_5 + param_6 * 2 + -1);
    uVar3 = *(undefined4 *)((int)param_5 + param_6 * 0x10 + -4);
    bVar9 = *(double *)(param_1 + 0x20) < _DAT_5f7349d0;
    pdVar5 = pdVar8;
    if (bVar9) {
      dVar4 = *(double *)(param_1 + 0x20) + _DAT_5f72c7c8;
      pdVar5 = pdVar8 + 2;
      *pdVar8 = (*param_5 - *(double *)(param_1 + 0x30)) * dVar4 + *(double *)(param_1 + 0x30);
      pdVar8[1] = (param_5[1] - *(double *)(param_1 + 0x50)) * dVar4 + *(double *)(param_1 + 0x50);
      *(double *)(param_1 + 0x20) = *(double *)(param_1 + 0x28) + *(double *)(param_1 + 0x20);
    }
    param_2 = (double *)(uint)bVar9;
    *(double *)(param_1 + 0x30) = dVar1;
    *(undefined4 *)(param_1 + 0x50) = uVar2;
    *(undefined4 *)(param_1 + 0x54) = uVar3;
    _NewValue = _controlfp(0,0);
    _controlfp(0x300,0x300);
    dVar1 = *(double *)(param_1 + 0x20);
    while (dVar1 < (double)(param_6 + -1)) {
      dVar1 = *(double *)(param_1 + 0x20) - (double)(int)ROUND(*(double *)(param_1 + 0x20));
      pdVar8 = param_5 + (int)ROUND(*(double *)(param_1 + 0x20)) * 2;
      if (_DAT_5f7349d0 == dVar1) {
        *(undefined4 *)pdVar5 = *(undefined4 *)pdVar8;
        *(undefined4 *)((int)pdVar5 + 4) = *(undefined4 *)((int)pdVar8 + 4);
        *(undefined4 *)(pdVar5 + 1) = *(undefined4 *)(pdVar8 + 1);
        *(undefined4 *)((int)pdVar5 + 0xc) = *(undefined4 *)((int)pdVar8 + 0xc);
      }
      else {
        *pdVar5 = (pdVar8[2] - *pdVar8) * dVar1 + *pdVar8;
        pdVar5[1] = (pdVar8[3] - pdVar8[1]) * dVar1 + pdVar8[1];
      }
      dVar1 = *(double *)(param_1 + 0x28) + *(double *)(param_1 + 0x20);
      pdVar5 = pdVar5 + 2;
      param_2 = (double *)((int)param_2 + 1);
      *(double *)(param_1 + 0x20) = dVar1;
    }
LAB_5f6a5139:
    _controlfp(_NewValue,0xffffffff);
    pdVar5 = param_2;
  }
  else if (*(int *)(param_1 + 4) == 1) {
    dVar1 = param_5[param_6 + -1];
    pdVar7 = pdVar8;
    if (*(double *)(param_1 + 0x20) < _DAT_5f7349d0) {
      do {
        pdVar8 = pdVar7 + 1;
        pdVar5 = (double *)((int)pdVar5 + 1);
        *pdVar7 = (*(double *)(param_1 + 0x20) + _DAT_5f72c7c8) *
                  (*param_5 - *(double *)(param_1 + 0x30)) + *(double *)(param_1 + 0x30);
        dVar4 = *(double *)(param_1 + 0x28) + *(double *)(param_1 + 0x20);
        *(double *)(param_1 + 0x20) = dVar4;
        pdVar7 = pdVar8;
        param_2 = pdVar5;
      } while (dVar4 < _DAT_5f7349d0);
    }
    *(double *)(param_1 + 0x30) = dVar1;
    _NewValue = _controlfp(0,0);
    _controlfp(0x300,0x300);
    dVar1 = *(double *)(param_1 + 0x20);
    while (dVar1 <= (double)(param_6 + -1)) {
      iVar6 = (int)ROUND(*(double *)(param_1 + 0x20));
      dVar1 = *(double *)(param_1 + 0x20) - (double)iVar6;
      if (_DAT_5f7349d0 == dVar1) {
        *(undefined4 *)pdVar8 = *(undefined4 *)(param_5 + iVar6);
        *(undefined4 *)((int)pdVar8 + 4) = *(undefined4 *)((int)param_5 + iVar6 * 8 + 4);
      }
      else {
        *pdVar8 = (param_5[iVar6 + 1] - param_5[iVar6]) * dVar1 + param_5[iVar6];
      }
      dVar1 = *(double *)(param_1 + 0x28) + *(double *)(param_1 + 0x20);
      pdVar8 = pdVar8 + 1;
      param_2 = (double *)((int)param_2 + 1);
      *(double *)(param_1 + 0x20) = dVar1;
    }
    goto LAB_5f6a5139;
  }
  *(double *)(param_1 + 0x20) = *(double *)(param_1 + 0x20) - (double)param_6;
  iVar6 = param_6;
LAB_5f6a5156:
  *param_7 = iVar6;
  *param_4 = (uint)pdVar5;
  return 0;
}


