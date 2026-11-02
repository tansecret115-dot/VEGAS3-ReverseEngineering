/* Module: 28_83260.dll
   Function: FUN_100060e0
   Address: 100060e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100060e0(void *this,float *param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  
  *(float *)((int)this + 0xacc) = *param_1;
  pfVar5 = (float *)((int)this + 0xad0);
  iVar7 = 1;
  pfVar8 = (float *)&DAT_1000cacc;
  do {
    param_1 = param_1 + 1;
    fVar2 = *param_1;
    pfVar10 = pfVar5;
    pfVar6 = pfVar8;
    iVar9 = iVar7;
    fVar4 = _DAT_10007110;
    if (0x1000cacb < (int)pfVar8) {
      do {
        *pfVar10 = pfVar10[-1];
        fVar3 = pfVar6[-1];
        iVar9 = iVar9 + -1;
        *pfVar6 = fVar3;
        fVar2 = fVar2 - pfVar10[0x1e] * *pfVar10;
        fVar4 = (pfVar10[0x7e] * *pfVar10 - pfVar10[0x94] * fVar3) + fVar4;
        pfVar10 = pfVar10 + -1;
        pfVar6 = pfVar6 + -1;
      } while (iVar9 != 0);
    }
    *(float *)((int)this + 0xacc) = fVar2;
    pfVar8 = pfVar8 + 1;
    iVar7 = iVar7 + 1;
    DAT_1000cac8 = fVar4 + fVar2;
    pfVar5 = pfVar5 + 1;
  } while ((int)pfVar8 < 0x1000cadc);
  pfVar10 = &DAT_1000cac8;
  pfVar5 = (float *)(param_2 + 0x10);
  pfVar8 = (float *)((int)this + 0xa28);
  do {
    fVar2 = pfVar8[0x29] + *pfVar8;
    fVar4 = _DAT_10007114;
    if ((fVar2 <= _DAT_10007114) && (fVar4 = fVar2, fVar2 < _DAT_10007118)) {
      fVar4 = _DAT_10007118;
    }
    *pfVar8 = fVar4;
    *pfVar5 = fVar4;
    pfVar6 = pfVar8 + 0x33;
    fVar2 = *pfVar10;
    pfVar1 = pfVar8 + 0x33;
    pfVar10 = pfVar10 + 1;
    pfVar8 = pfVar8 + 1;
    pfVar5 = pfVar5 + -1;
    *pfVar1 = *pfVar6 + fVar2;
  } while ((int)pfVar10 < 0x1000cadc);
  pfVar5 = (float *)((int)this + 0xa28);
  pfVar8 = (float *)((int)this + 0xacc);
  for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar8 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar8 = pfVar8 + 1;
  }
  return;
}


