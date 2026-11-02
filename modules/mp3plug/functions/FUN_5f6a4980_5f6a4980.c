/* Module: mp3plug.dll
   Function: FUN_5f6a4980
   Address: 5f6a4980
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_5f6a4980(int param_1,undefined4 *param_2,undefined4 param_3,uint *param_4,int param_5,
            int param_6,int *param_7)

{
  double dVar1;
  undefined4 uVar2;
  uint _NewValue;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  float10 fVar6;
  float10 extraout_ST0;
  float10 extraout_ST1;
  
  puVar4 = param_2;
  param_2 = (undefined4 *)0x0;
  iVar3 = 0;
  if (param_6 == 0) goto LAB_5f6a4c2b;
  if (*(int *)(param_1 + 4) == 2) {
    fVar6 = (float10)*(int *)(param_5 + -8 + param_6 * 8);
    iVar3 = *(int *)(param_5 + -4 + param_6 * 8);
    bVar5 = *(double *)(param_1 + 0x20) < _DAT_5f7349d0;
    if (bVar5) {
      uVar2 = ftol();
      *puVar4 = uVar2;
      uVar2 = ftol();
      puVar4[1] = uVar2;
      puVar4 = puVar4 + 2;
      *(double *)(param_1 + 0x20) = *(double *)(param_1 + 0x28) + *(double *)(param_1 + 0x20);
      fVar6 = extraout_ST1;
    }
    param_2 = (undefined4 *)(uint)bVar5;
    *(double *)(param_1 + 0x30) = (double)fVar6;
    *(double *)(param_1 + 0x50) = (double)iVar3;
    _NewValue = _controlfp(0,0);
    _controlfp(0x300,0x300);
    dVar1 = *(double *)(param_1 + 0x20);
    while (dVar1 < (double)(param_6 + -1)) {
      iVar3 = (int)ROUND(*(double *)(param_1 + 0x20));
      if (_DAT_5f7349d0 == *(double *)(param_1 + 0x20) - (double)iVar3) {
        *puVar4 = *(undefined4 *)(param_5 + iVar3 * 8);
        uVar2 = *(undefined4 *)(param_5 + 4 + iVar3 * 8);
      }
      else {
        uVar2 = ftol();
        *puVar4 = uVar2;
        uVar2 = ftol();
      }
      puVar4[1] = uVar2;
      dVar1 = *(double *)(param_1 + 0x20) + *(double *)(param_1 + 0x28);
      puVar4 = puVar4 + 2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      *(double *)(param_1 + 0x20) = dVar1;
    }
LAB_5f6a4c12:
    _controlfp(_NewValue,0xffffffff);
  }
  else if (*(int *)(param_1 + 4) == 1) {
    fVar6 = (float10)*(int *)(param_5 + -4 + param_6 * 4);
    if (*(double *)(param_1 + 0x20) < _DAT_5f7349d0) {
      do {
        uVar2 = ftol();
        *puVar4 = uVar2;
        dVar1 = *(double *)(param_1 + 0x20) + *(double *)(param_1 + 0x28);
        puVar4 = puVar4 + 1;
        param_2 = (undefined4 *)((int)param_2 + 1);
        *(double *)(param_1 + 0x20) = dVar1;
        fVar6 = extraout_ST0;
      } while (dVar1 < _DAT_5f7349d0);
    }
    *(double *)(param_1 + 0x30) = (double)fVar6;
    _NewValue = _controlfp(0,0);
    _controlfp(0x300,0x300);
    dVar1 = *(double *)(param_1 + 0x20);
    while (dVar1 <= (double)(param_6 + -1)) {
      if (_DAT_5f7349d0 ==
          *(double *)(param_1 + 0x20) - (double)(int)ROUND(*(double *)(param_1 + 0x20))) {
        *puVar4 = *(undefined4 *)(param_5 + (int)ROUND(*(double *)(param_1 + 0x20)) * 4);
      }
      else {
        uVar2 = ftol();
        *puVar4 = uVar2;
      }
      dVar1 = *(double *)(param_1 + 0x20) + *(double *)(param_1 + 0x28);
      puVar4 = puVar4 + 1;
      param_2 = (undefined4 *)((int)param_2 + 1);
      *(double *)(param_1 + 0x20) = dVar1;
    }
    goto LAB_5f6a4c12;
  }
  *(double *)(param_1 + 0x20) = *(double *)(param_1 + 0x20) - (double)param_6;
  iVar3 = param_6;
LAB_5f6a4c2b:
  *param_7 = iVar3;
  *param_4 = (uint)param_2;
  return 0;
}


