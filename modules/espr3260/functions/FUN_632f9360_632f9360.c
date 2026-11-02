/* Module: espr3260.dll
   Function: FUN_632f9360
   Address: 632f9360
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_632f9360(void *this,int param_1,int param_2,float *param_3,float *param_4,int param_5,
            float *param_6,int param_7)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  
  iVar3 = param_5 + param_2;
  pfVar8 = (float *)(*(int *)this + iVar3 * -4);
  *(float **)this = pfVar8;
  if (param_2 == 0x10) {
    pfVar5 = pfVar8 + 0x10;
    pfVar9 = param_6 + 0x10;
    *pfVar8 = *param_6;
    pfVar8[1] = param_6[1];
    pfVar8[2] = param_6[2];
    pfVar8[3] = param_6[3];
    pfVar8[4] = param_6[4];
    pfVar8[5] = param_6[5];
    pfVar8[6] = param_6[6];
    pfVar8[7] = param_6[7];
    pfVar8[8] = param_6[8];
    pfVar8[9] = param_6[9];
    pfVar8[10] = param_6[10];
    pfVar8[0xb] = param_6[0xb];
    pfVar8[0xc] = param_6[0xc];
    pfVar8[0xd] = param_6[0xd];
    pfVar8[0xe] = param_6[0xe];
    pfVar8[0xf] = param_6[0xf];
    if (0 < param_5) {
      do {
        fVar4 = *param_3;
        param_3 = param_3 + 1;
        fVar4 = ((((((((((fVar4 - pfVar5[-1] * *(float *)(param_1 + 4)) -
                        pfVar5[-2] * *(float *)(param_1 + 8)) -
                       pfVar5[-3] * *(float *)(param_1 + 0xc)) -
                      pfVar5[-4] * *(float *)(param_1 + 0x10)) -
                     pfVar5[-5] * *(float *)(param_1 + 0x14)) -
                    pfVar5[-6] * *(float *)(param_1 + 0x18)) -
                   pfVar5[-7] * *(float *)(param_1 + 0x1c)) -
                  pfVar5[-8] * *(float *)(param_1 + 0x20)) - pfVar5[-9] * *(float *)(param_1 + 0x24)
                 ) - pfVar5[-10] * *(float *)(param_1 + 0x28)) -
                (pfVar5[-0xf] * *(float *)(param_1 + 0x3c) +
                pfVar5[-0xe] * *(float *)(param_1 + 0x38) +
                pfVar5[-0xd] * *(float *)(param_1 + 0x34) +
                pfVar5[-0x10] * *(float *)(param_1 + 0x40) +
                pfVar5[-0xc] * *(float *)(param_1 + 0x30) +
                pfVar5[-0xb] * *(float *)(param_1 + 0x2c));
        *pfVar5 = fVar4;
        *param_4 = fVar4;
        pfVar5 = pfVar5 + 1;
        param_4 = param_4 + 1;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
  }
  else {
    iVar6 = param_2;
    pfVar9 = param_6;
    if (0 < param_2) {
      do {
        fVar4 = *param_6;
        param_6 = param_6 + 1;
        *pfVar8 = fVar4;
        pfVar8 = pfVar8 + 1;
        iVar6 = iVar6 + -1;
        pfVar9 = param_6;
      } while (iVar6 != 0);
    }
    pfVar5 = pfVar8;
    if (0 < param_5) {
      param_6 = (float *)param_5;
      do {
        fVar4 = *param_3;
        param_3 = param_3 + 1;
        iVar6 = param_1;
        iVar7 = param_2;
        pfVar5 = pfVar8;
        if (0 < param_2) {
          do {
            pfVar1 = (float *)(iVar6 + 4);
            pfVar2 = pfVar5 + -1;
            iVar6 = iVar6 + 4;
            pfVar5 = pfVar5 + -1;
            iVar7 = iVar7 + -1;
            fVar4 = fVar4 - *pfVar1 * *pfVar2;
          } while (iVar7 != 0);
        }
        *pfVar8 = fVar4;
        *param_4 = fVar4;
        param_4 = param_4 + 1;
        pfVar8 = pfVar8 + 1;
        param_6 = (float *)((int)param_6 + -1);
        pfVar5 = pfVar8;
      } while (param_6 != (float *)0x0);
    }
  }
  if ((param_7 != 0) && (0 < param_2)) {
    do {
      pfVar8 = pfVar5 + -1;
      pfVar5 = pfVar5 + -1;
      pfVar9 = pfVar9 + -1;
      param_2 = param_2 + -1;
      *pfVar9 = *pfVar8;
    } while (param_2 != 0);
  }
  *(int *)this = *(int *)this + iVar3 * 4;
  return;
}


