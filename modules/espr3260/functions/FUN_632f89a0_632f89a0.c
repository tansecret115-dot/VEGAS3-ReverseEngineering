/* Module: espr3260.dll
   Function: FUN_632f89a0
   Address: 632f89a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_632f89a0(float *param_1,int param_2,float *param_3,float *param_4,int param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  
  if (param_2 == 0x10) {
    if (0 < param_5) {
      do {
        fVar6 = param_3[-7] * param_1[7] +
                param_3[-5] * param_1[5] +
                param_3[-2] * param_1[2] +
                param_3[-6] * param_1[6] +
                param_3[-3] * param_1[3] +
                param_3[-1] * param_1[1] +
                param_3[-9] * param_1[9] + param_3[-8] * param_1[8] + param_3[-4] * param_1[4] +
                *param_3;
        *param_4 = fVar6;
        pfVar7 = param_3 + -0xd;
        pfVar8 = param_3 + -0xe;
        pfVar1 = param_3 + -0xf;
        pfVar2 = param_3 + -0xb;
        pfVar3 = param_3 + -10;
        pfVar4 = param_3 + -0x10;
        pfVar5 = param_3 + -0xc;
        param_3 = param_3 + 1;
        param_5 = param_5 + -1;
        *param_4 = *pfVar5 * param_1[0xc] +
                   *pfVar4 * param_1[0x10] +
                   *pfVar3 * param_1[10] +
                   *pfVar2 * param_1[0xb] +
                   *pfVar1 * param_1[0xf] + *pfVar7 * param_1[0xd] + *pfVar8 * param_1[0xe] + fVar6;
        param_4 = param_4 + 1;
      } while (param_5 != 0);
      return;
    }
  }
  else if (0 < param_5) {
    do {
      fVar6 = *param_3;
      iVar9 = param_2;
      pfVar7 = param_3;
      pfVar8 = param_1;
      if (0 < param_2) {
        do {
          iVar9 = iVar9 + -1;
          fVar6 = pfVar8[1] * pfVar7[-1] + fVar6;
          pfVar7 = pfVar7 + -1;
          pfVar8 = pfVar8 + 1;
        } while (iVar9 != 0);
      }
      *param_4 = fVar6;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}


