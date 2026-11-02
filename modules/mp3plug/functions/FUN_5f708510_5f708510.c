/* Module: mp3plug.dll
   Function: FUN_5f708510
   Address: 5f708510
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5f708510(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int in_EAX;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float10 in_ST0;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 *in_stack_0000001c;
  float local_cc [5];
  int local_b8;
  double local_b4;
  int local_94;
  undefined4 uStack_90;
  int local_8c;
  int local_88;
  float *local_7c;
  
  local_8c = param_2;
  local_b4 = (double)in_ST0;
  iVar15 = in_stack_00000010;
  if (in_stack_00000014 + 5 < in_stack_00000010) {
    iVar15 = in_stack_00000014 + 5;
  }
  local_cc[0] = SQRT(*param_1 * *param_1 + param_1[1] * param_1[1]);
  local_cc[1] = SQRT(param_1[2] * param_1[2] + param_1[3] * param_1[3]);
  local_cc[2] = SQRT(param_1[4] * param_1[4] + param_1[5] * param_1[5]);
  local_cc[3] = SQRT(param_1[6] * param_1[6] + param_1[7] * param_1[7]);
  iVar14 = 0;
  local_b8 = iVar15 + -5;
  local_7c = param_1;
  local_88 = in_EAX;
  if (0 < iVar15 + -5) {
    _local_94 = CONCAT44(uStack_90,iVar15);
    iVar15 = 0;
    do {
      local_cc[(iVar15 + 4) % 5] =
           SQRT(param_1[iVar14 * 2 + 8] * param_1[iVar14 * 2 + 8] +
                param_1[iVar14 * 2 + 9] * param_1[iVar14 * 2 + 9]);
      iVar11 = -0x14;
      iVar13 = iVar15;
      fVar1 = _DAT_5f760850;
      fVar2 = _DAT_5f760854;
      do {
        fVar1 = *(float *)(&DAT_5f7607a8 + iVar11) * local_cc[iVar13] + fVar1;
        fVar2 = local_cc[iVar13] * *(float *)((int)&DAT_5f760794 + iVar11) + fVar2;
        iVar13 = iVar13 + 1;
        if (iVar13 == 5) {
          iVar13 = 0;
        }
        iVar11 = iVar11 + 4;
      } while (iVar11 != 0);
      iVar15 = iVar15 + 1;
      if (iVar15 == 5) {
        iVar15 = 0;
      }
      if (fVar2 <= _DAT_5f760858) {
        fVar2 = _DAT_5f7608a4;
      }
      fVar3 = fVar1 / fVar2;
      if (fVar1 / fVar2 < _DAT_5f760860) {
        fVar3 = _DAT_5f760864;
      }
      fVar1 = (fVar3 - _DAT_5f760868) * fVar3 + _DAT_5f76086c;
      if (_DAT_5f760870 < fVar1) {
        fVar1 = _DAT_5f760874;
      }
      if (fVar1 < _DAT_5f760878) {
        fVar1 = _DAT_5f76087c;
      }
      in_stack_0000001c[iVar14 + 2] = fVar1;
      iVar14 = iVar14 + 1;
    } while (iVar14 < local_b8);
    iVar15 = local_94;
  }
  uVar6 = in_stack_0000001c[2];
  for (puVar12 = in_stack_0000001c;
      (int)puVar12 <
      (int)(((int)(in_stack_0000001c + 2) - (int)in_stack_0000001c & 0xfffffff8U) +
           (int)in_stack_0000001c); puVar12 = puVar12 + 2) {
    *puVar12 = uVar6;
    puVar12[1] = uVar6;
  }
  for (; (int)puVar12 < (int)(in_stack_0000001c + 2); puVar12 = puVar12 + 1) {
    *puVar12 = uVar6;
  }
  iVar14 = local_b8 + -1;
  fVar1 = _DAT_5f760880;
  do {
    fVar1 = fVar1 + (float)in_stack_0000001c[iVar14];
    iVar14 = iVar14 + 1;
  } while (iVar14 < local_b8 + 2);
  fVar1 = fVar1 * _DAT_5f760884;
  if (iVar14 < iVar15) {
    iVar13 = (iVar15 - iVar14 & 0xfffffffeU) + iVar14;
    for (; iVar14 < iVar13; iVar14 = iVar14 + 2) {
      in_stack_0000001c[iVar14] = fVar1;
      in_stack_0000001c[iVar14 + 1] = fVar1;
    }
    for (; iVar14 < iVar15; iVar14 = iVar14 + 1) {
      in_stack_0000001c[iVar14] = fVar1;
    }
  }
  iVar15 = 0;
  if (0 < in_stack_00000010) {
    do {
      fVar1 = *(float *)(local_8c + 4 + iVar15 * 8);
      fVar2 = *(float *)(local_8c + iVar15 * 8);
      fVar7 = fVar2 * fVar2 + fVar1 * fVar1;
      fVar1 = *(float *)(local_8c + 4 + iVar15 * 8);
      fVar2 = *(float *)(local_8c + iVar15 * 8);
      fVar3 = param_1[iVar15 * 2];
      fVar4 = *(float *)(local_88 + 4 + iVar15 * 8);
      fVar5 = *(float *)(local_88 + iVar15 * 8);
      fVar9 = fVar3 * fVar3 + param_1[iVar15 * 2 + 1] * param_1[iVar15 * 2 + 1];
      fVar10 = fVar5 * fVar5 + fVar4 * fVar4;
      if (((fVar7 < _DAT_5f7607a8) || (fVar10 < _DAT_5f7607a8)) || (fVar9 < _DAT_5f7607a8)) {
        in_stack_0000001c[iVar15] = (float)local_b4;
      }
      else {
        fVar8 = (_DAT_5f76088c / fVar7) *
                (*(float *)(local_88 + iVar15 * 8) * fVar2 +
                *(float *)(local_88 + 4 + iVar15 * 8) * fVar1);
        fVar7 = SQRT(fVar7 / fVar10);
        fVar1 = (_DAT_5f76089c * fVar7 - _DAT_5f7608a0) * (fVar1 * fVar8 - fVar4);
        fVar5 = (fVar7 * _DAT_5f760894 - _DAT_5f760898) * (fVar2 * fVar8 - fVar5);
        fVar2 = fVar5 * fVar5 + fVar1 * fVar1;
        fVar4 = SQRT(fVar9 * fVar2);
        fVar1 = SQRT(((fVar3 - fVar5) * (fVar3 - fVar5) +
                     (param_1[iVar15 * 2 + 1] - fVar1) * (param_1[iVar15 * 2 + 1] - fVar1)) /
                     (fVar4 + fVar4 + fVar9 + fVar2));
        if (iVar15 < in_stack_00000014) {
          fVar2 = (float)in_stack_0000001c[iVar15];
          if (fVar1 < fVar2) {
            fVar2 = fVar1;
          }
          in_stack_0000001c[iVar15] = fVar2;
        }
        else {
          in_stack_0000001c[iVar15] = fVar1;
        }
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < in_stack_00000010);
  }
  return;
}


