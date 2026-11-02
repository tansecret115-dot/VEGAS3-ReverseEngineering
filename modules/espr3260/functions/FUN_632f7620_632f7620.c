/* Module: espr3260.dll
   Function: FUN_632f7620
   Address: 632f7620
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_632f7620(void *this,float param_1,float *param_2,float *param_3,float *param_4,int param_5,
            float param_6,int param_7)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  float10 fVar10;
  float local_c;
  
  pfVar7 = (float *)(*(int *)this + param_7 * -4);
  *(float **)this = pfVar7;
  iVar5 = 0;
  pfVar9 = (float *)((int)param_1 + (int)param_4 * -4);
  pfVar6 = pfVar7;
  pfVar3 = pfVar9;
  do {
    fVar1 = *pfVar3;
    iVar8 = iVar5;
    pfVar4 = param_3;
    pfVar2 = pfVar3;
    if (0 < iVar5) {
      do {
        iVar8 = iVar8 + -1;
        fVar1 = pfVar2[-1] * pfVar4[1] + fVar1;
        pfVar4 = pfVar4 + 1;
        pfVar2 = pfVar2 + -1;
      } while (iVar8 != 0);
    }
    *pfVar6 = fVar1;
    iVar5 = iVar5 + 1;
    pfVar3 = pfVar3 + 1;
    pfVar6 = pfVar6 + 1;
  } while (iVar5 < 0x28);
  if (0x28 < param_7) {
    iVar5 = param_7 + -0x28;
    pfVar6 = pfVar7 + 0x28;
    pfVar3 = (float *)((int)param_1 + 0xa0 + (int)param_4 * -4);
    do {
      fVar1 = *pfVar3;
      iVar8 = 0x27;
      pfVar4 = param_3;
      pfVar2 = pfVar3;
      do {
        pfVar2 = pfVar2 + -1;
        pfVar4 = pfVar4 + 1;
        iVar8 = iVar8 + -1;
        fVar1 = *pfVar2 * *pfVar4 + fVar1;
      } while (iVar8 != 0);
      *pfVar6 = fVar1;
      pfVar3 = pfVar3 + 1;
      pfVar6 = pfVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  param_1 = _DAT_632fa510;
  if (0x28 < param_7) {
    iVar5 = param_7 + -0x28;
    pfVar6 = pfVar7 + 0x28;
    do {
      fVar1 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      iVar5 = iVar5 + -1;
      param_1 = fVar1 * fVar1 + param_1;
    } while (iVar5 != 0);
  }
  if ((int)param_4 <= param_5) {
    pfVar6 = param_4;
    param_4 = (float *)((int)param_6 + (int)param_4 * 4);
    do {
      local_c = _DAT_632fa514;
      if (0 < param_7) {
        pfVar3 = param_2;
        iVar5 = param_7;
        do {
          pfVar4 = (float *)(((int)pfVar7 - (int)param_2) + (int)pfVar3);
          fVar1 = *pfVar3;
          pfVar3 = pfVar3 + 1;
          iVar5 = iVar5 + -1;
          local_c = *pfVar4 * fVar1 + local_c;
        } while (iVar5 != 0);
      }
      iVar5 = 0x28;
      pfVar3 = pfVar7;
      param_6 = param_1;
      do {
        fVar1 = *pfVar3;
        pfVar3 = pfVar3 + 1;
        iVar5 = iVar5 + -1;
        param_6 = fVar1 * fVar1 + param_6;
      } while (iVar5 != 0);
      if (param_6 <= _DAT_632fa514) {
        param_6 = 0.01;
      }
      fVar10 = FUN_632f68d0(param_6);
      *param_4 = (float)(fVar10 * (float10)local_c);
      if (pfVar6 != (float *)param_5) {
        param_1 = (pfVar7[0x27] * pfVar7[0x27] - pfVar7[param_7 + -1] * pfVar7[param_7 + -1]) +
                  param_1;
        if (param_1 < _DAT_632fa514) {
          param_1 = _DAT_632fa514;
        }
        pfVar9 = pfVar9 + -1;
        if (0x27 < param_7 + -1) {
          pfVar3 = pfVar7 + param_7 + -1;
          iVar5 = param_7 + -0x28;
          do {
            *pfVar3 = pfVar3[-1];
            pfVar3 = pfVar3 + -1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        iVar5 = 0x27;
        pfVar3 = pfVar7 + 0x27;
        do {
          iVar5 = iVar5 + -1;
          *pfVar3 = *(float *)(((int)param_3 - (int)pfVar7) + (int)pfVar3) * *pfVar9 + pfVar3[-1];
          pfVar3 = pfVar3 + -1;
        } while (iVar5 != 0);
        *pfVar7 = *pfVar9;
      }
      pfVar6 = (float *)((int)pfVar6 + 1);
      param_4 = param_4 + 1;
    } while ((int)pfVar6 <= param_5);
  }
  *(int *)this = *(int *)this + param_7 * 4;
  return;
}


