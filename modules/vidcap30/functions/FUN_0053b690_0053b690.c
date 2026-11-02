/* Module: vidcap30.exe
   Function: FUN_0053b690
   Address: 0053b690
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053b690(float *param_1,int param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  double *pdVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  int local_24;
  int local_18;
  
  if (0 < param_3) {
    local_18 = param_3;
    do {
      if (0 < param_4) {
        iVar7 = 0;
        piVar4 = (int *)(param_5 + 200);
        local_24 = param_4;
        pfVar6 = param_1;
        do {
          fVar1 = *(float *)((param_2 - (int)param_1) + (int)pfVar6);
          iVar5 = *piVar4;
          fVar8 = (float10)fVar1 * (float10)*(double *)(piVar4 + 2);
          fVar9 = (float10)_DAT_00589f10;
          if (0 < iVar5) {
            pdVar2 = (double *)(piVar4 + -0x12);
            do {
              iVar5 = iVar5 + -1;
              fVar8 = (float10)pdVar2[-0x10] * (float10)*pdVar2 + fVar8;
              fVar9 = (float10)pdVar2[-8] * (float10)*pdVar2 + fVar9;
              pdVar2 = pdVar2 + 1;
            } while (iVar5 != 0);
          }
          *pfVar6 = (float)((float10)fVar1 * (float10)*(double *)(piVar4 + 4) +
                            fVar8 * (float10)*(double *)(piVar4 + -2) + fVar9);
          if ((fVar8 < (float10)_DAT_0059dd28) && ((float10)_DAT_0059dd20 < fVar8)) {
            fVar8 = (float10)_DAT_00589f10;
          }
          iVar5 = *piVar4 + -1;
          if (0 < iVar5) {
            puVar3 = (undefined4 *)(param_5 + 0x80 + (iVar7 + iVar5) * 8);
            do {
              *puVar3 = puVar3[-2];
              puVar3[1] = puVar3[-1];
              puVar3 = puVar3 + -2;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          *(double *)(piVar4 + -0x12) = (double)fVar8;
          pfVar6 = pfVar6 + 1;
          iVar7 = iVar7 + 0x1c;
          piVar4 = piVar4 + 0x38;
          local_24 = local_24 + -1;
        } while (local_24 != 0);
      }
      param_2 = param_2 + param_4 * 4;
      param_1 = param_1 + param_4;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  return;
}


