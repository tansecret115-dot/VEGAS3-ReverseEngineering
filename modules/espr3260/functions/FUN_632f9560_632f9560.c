/* Module: espr3260.dll
   Function: FUN_632f9560
   Address: 632f9560
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_632f9560(void *this,int param_1,int param_2,float *param_3,float *param_4,int param_5,
            float *param_6,int param_7)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = param_5 + param_2;
  pfVar5 = (float *)(*(int *)((int)this + 4) + iVar2 * -4);
  *(float **)((int)this + 4) = pfVar5;
  iVar1 = param_2 + -1;
  pfVar4 = pfVar5;
  iVar6 = param_2;
  if (-1 < iVar1) {
    do {
      pfVar4 = pfVar5 + 1;
      fVar3 = *param_6;
      param_6 = param_6 + 1;
      *pfVar5 = fVar3;
      iVar6 = iVar6 + -1;
      pfVar5 = pfVar4;
    } while (iVar6 != 0);
  }
  pfVar5 = pfVar4;
  if (param_2 == 10) {
    if (0 < param_5) {
      do {
        fVar3 = *param_3;
        param_3 = param_3 + 1;
        pfVar5 = pfVar4 + 1;
        param_5 = param_5 + -1;
        *param_4 = ((((((((((fVar3 - _DAT_632fa634) - pfVar4[-1] * *(float *)(param_1 + 4)) -
                          pfVar4[-2] * *(float *)(param_1 + 8)) -
                         pfVar4[-3] * *(float *)(param_1 + 0xc)) -
                        pfVar4[-4] * *(float *)(param_1 + 0x10)) -
                       pfVar4[-5] * *(float *)(param_1 + 0x14)) -
                      pfVar4[-6] * *(float *)(param_1 + 0x18)) -
                     pfVar4[-7] * *(float *)(param_1 + 0x1c)) -
                    pfVar4[-8] * *(float *)(param_1 + 0x20)) -
                   pfVar4[-9] * *(float *)(param_1 + 0x24)) -
                   pfVar4[-10] * *(float *)(param_1 + 0x28);
        *pfVar4 = *param_4;
        pfVar4 = pfVar5;
        param_4 = param_4 + 1;
      } while (param_5 != 0);
    }
  }
  else if (0 < param_5) {
    do {
      fVar3 = *param_3;
      param_3 = param_3 + 1;
      iVar6 = param_1;
      pfVar5 = pfVar4;
      iVar7 = param_2;
      if (-1 < iVar1) {
        do {
          iVar7 = iVar7 + -1;
          fVar3 = fVar3 - pfVar5[-1] * *(float *)(iVar6 + 4);
          iVar6 = iVar6 + 4;
          pfVar5 = pfVar5 + -1;
        } while (iVar7 != 0);
      }
      *pfVar4 = fVar3;
      *param_4 = fVar3;
      param_4 = param_4 + 1;
      pfVar4 = pfVar4 + 1;
      param_5 = param_5 + -1;
      pfVar5 = pfVar4;
    } while (param_5 != 0);
  }
  if ((param_7 != 0) && (-1 < iVar1)) {
    do {
      pfVar4 = pfVar5 + -1;
      pfVar5 = pfVar5 + -1;
      param_6 = param_6 + -1;
      param_2 = param_2 + -1;
      *param_6 = *pfVar4;
    } while (param_2 != 0);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + iVar2 * 4;
  return;
}


