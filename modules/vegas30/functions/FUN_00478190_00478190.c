/* Module: vegas30.exe
   Function: FUN_00478190
   Address: 00478190
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00478190(int param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  float10 fVar4;
  float10 fVar5;
  
  piVar2 = *(int **)(param_1 + 0x30);
  if (*piVar2 == 0) {
    return (float10)*(float *)(param_1 + 0x28);
  }
  uVar1 = *piVar2 - 1;
  if (uVar1 <= param_2) {
    return (float10)*(float *)(piVar2[1] * (-(uint)(uVar1 != 0) & uVar1) + 8 + piVar2[2]);
  }
  puVar3 = (uint *)(piVar2[1] * param_2 + piVar2[2]);
  switch(*(undefined4 *)(piVar2[1] * param_2 + 0xc + piVar2[2])) {
  case 2:
    uVar1 = puVar3[4];
    fVar5 = (float10)CONCAT44((puVar3[5] - puVar3[1]) - (uint)(uVar1 < *puVar3),uVar1 - *puVar3);
    fVar5 = fVar5 * fVar5;
    if (fVar5 < (float10)_DAT_006106d0) {
      fVar5 = (float10)_DAT_006106d0;
    }
    fVar4 = (float10)CONCAT44((puVar3[5] - param_4) - (uint)(uVar1 < param_3),uVar1 - param_3);
    fVar5 = (float10)(float)puVar3[6] -
            fVar4 * fVar4 * (((float10)(float)puVar3[6] - (float10)(float)puVar3[2]) / fVar5);
    break;
  case 4:
    uVar1 = *puVar3;
    fVar5 = (float10)CONCAT44((puVar3[5] - puVar3[1]) - (uint)(puVar3[4] < uVar1),puVar3[4] - uVar1)
    ;
    if (fVar5 != (float10)_DAT_00610fd8) {
      fVar5 = (float10)CONCAT44((param_4 - puVar3[1]) - (uint)(param_3 < uVar1),param_3 - uVar1) /
              fVar5;
      fVar5 = ((float10)(float)puVar3[6] - (float10)(float)puVar3[2]) *
              fVar5 * fVar5 * ((float10)_DAT_00610f30 - (fVar5 + fVar5)) + (float10)(float)puVar3[2]
      ;
      break;
    }
LAB_004782e0:
    fVar5 = (float10)(float)puVar3[2];
    break;
  case 0xfffffffc:
    uVar1 = *puVar3;
    fVar5 = (float10)CONCAT44((puVar3[5] - puVar3[1]) - (uint)(puVar3[4] < uVar1),puVar3[4] - uVar1)
    ;
    if (fVar5 != (float10)_DAT_00610fd8) {
      fVar5 = (float10)CONCAT44((param_4 - puVar3[1]) - (uint)(param_3 < uVar1),param_3 - uVar1) /
              fVar5;
      fVar4 = fVar5 * fVar5;
      fVar5 = (((fVar4 * fVar5 + fVar4 * fVar5) - fVar4 * (float10)_DAT_00610f30) + fVar5) *
              (float10)_DAT_00610f30 +
              ((float10)(float)puVar3[6] - (float10)(float)puVar3[2]) *
              ((float10)_DAT_00610f30 - (fVar5 + fVar5)) * fVar4 + (float10)(float)puVar3[2];
      break;
    }
    goto LAB_004782e0;
  default:
    uVar1 = *puVar3;
    fVar5 = (float10)CONCAT44((puVar3[5] - puVar3[1]) - (uint)(puVar3[4] < uVar1),puVar3[4] - uVar1)
    ;
    if (fVar5 < (float10)_DAT_006106d0) {
      fVar5 = (float10)_DAT_006106d0;
    }
    fVar5 = (float10)CONCAT44((param_4 - puVar3[1]) - (uint)(param_3 < uVar1),param_3 - uVar1) *
            (((float10)(float)puVar3[6] - (float10)(float)puVar3[2]) / fVar5) +
            (float10)(float)puVar3[2];
    break;
  case 0xfffffffe:
    uVar1 = *puVar3;
    fVar5 = (float10)CONCAT44((puVar3[5] - puVar3[1]) - (uint)(puVar3[4] < uVar1),puVar3[4] - uVar1)
    ;
    fVar5 = fVar5 * fVar5;
    if (fVar5 < (float10)_DAT_006106d0) {
      fVar5 = (float10)_DAT_006106d0;
    }
    fVar4 = (float10)CONCAT44((param_4 - puVar3[1]) - (uint)(param_3 < uVar1),param_3 - uVar1);
    fVar5 = (float10)(float)puVar3[2] +
            fVar4 * fVar4 * (((float10)(float)puVar3[6] - (float10)(float)puVar3[2]) / fVar5);
  }
  if (fVar5 < (float10)*(float *)(param_1 + 0x20)) {
    return (float10)*(float *)(param_1 + 0x20);
  }
  if ((float10)*(float *)(param_1 + 0x24) < fVar5) {
    fVar5 = (float10)*(float *)(param_1 + 0x24);
  }
  return fVar5;
}


