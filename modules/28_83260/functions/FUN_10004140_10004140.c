/* Module: 28_83260.dll
   Function: FUN_10004140
   Address: 10004140
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_10004140(void *this,float *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  int local_10;
  int local_c;
  float local_8;
  
  iVar9 = 0;
  local_8 = 1e+31;
  local_10 = 0;
  local_c = 0;
  pfVar11 = (float *)((int)this + 0xd74);
  if (0 < DAT_1000c924) {
    pfVar8 = (float *)&DAT_10008090;
    do {
      pfVar1 = pfVar8 + 1;
      pfVar2 = pfVar8 + -2;
      pfVar3 = pfVar8 + -1;
      pfVar4 = pfVar8 + 2;
      fVar5 = *pfVar8;
      fVar6 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      pfVar8 = pfVar8 + 5;
      iVar10 = 0;
      fVar5 = fVar5 * param_1[2] +
              *pfVar4 * param_1[4] +
              *pfVar3 * param_1[1] + *pfVar1 * param_1[3] + *pfVar2 * *param_1;
      fVar7 = fVar5;
      if (fVar5 < (float)_DAT_100070d8) {
        fVar7 = -fVar5;
        iVar10 = 4;
      }
      if (fVar6 * _DAT_100070cc < fVar7) {
        iVar10 = iVar10 + 1;
      }
      if (fVar6 * _DAT_100070d0 < fVar7) {
        iVar10 = iVar10 + 1;
      }
      if (fVar6 * _DAT_100070d4 < fVar7) {
        iVar10 = iVar10 + 1;
      }
      fVar5 = *(float *)(iVar10 * 4 + 0x10008ae8) * fVar6 -
              *(float *)(iVar10 * 4 + 0x10008aa8) * fVar5;
      if (fVar5 < local_8) {
        local_10 = iVar9;
        local_c = iVar10;
        local_8 = fVar5;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < DAT_1000c924);
  }
  return local_c + local_10 * 8;
}


