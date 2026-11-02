/* Module: 14_43260.dll
   Function: FUN_10006040
   Address: 10006040
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_10006040(void *this,float *param_1,float *param_2,int param_3)

{
  size_t _Count;
  float *pfVar1;
  float *pfVar2;
  uint *puVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  void *_Memory;
  void *_Memory_00;
  int iVar10;
  float *pfVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  float *pfVar15;
  uint *puVar16;
  uint uVar17;
  float local_1c;
  float local_18;
  uint local_c;
  
  _Count = param_3 + 1;
  _Memory = calloc(_Count,4);
  _Memory_00 = calloc(_Count * _Count,4);
  iVar10 = *(int *)((int)this + 0x996);
  pfVar9 = (float *)((int)_Memory + 4);
  pfVar1 = param_2;
  local_1c = _DAT_10010cc8;
  fVar8 = _DAT_10010cc8;
  while (pfVar1 < param_2 + param_3 * iVar10) {
    iVar5 = *(int *)((int)this + 0x996);
    for (pfVar11 = param_1; pfVar11 < param_1 + iVar5; pfVar11 = pfVar11 + 1) {
      *pfVar9 = *pfVar11 * *pfVar1 + *pfVar9;
      fVar8 = *pfVar1 * *pfVar1 + fVar8;
      pfVar1 = pfVar1 + 1;
    }
    local_1c = local_1c - *pfVar9;
    *pfVar9 = *pfVar9 + *pfVar9;
    pfVar9 = pfVar9 + 1;
  }
  pfVar1 = (float *)(param_3 + 1);
  iVar10 = 1;
  param_1 = pfVar1;
  if (1 < param_3) {
    do {
      iVar5 = iVar10 + 1;
      if (iVar5 <= param_3) {
        iVar14 = iVar5;
        do {
          iVar13 = *(int *)((int)this + 0x996);
          pfVar11 = param_2 + (iVar10 + -1) * iVar13;
          pfVar15 = pfVar11 + iVar13;
          fVar7 = _DAT_10010cc8;
          if (pfVar11 < pfVar15) {
            iVar13 = (iVar14 + -1) * iVar13 * 4 - (int)pfVar11;
            do {
              pfVar2 = (float *)((int)pfVar11 + (int)param_2 + iVar13);
              fVar4 = *pfVar11;
              pfVar11 = pfVar11 + 1;
              fVar7 = *pfVar2 * fVar4 + fVar7;
            } while (pfVar11 < pfVar15);
          }
          fVar8 = fVar8 - fVar7 * _DAT_10010cd0;
          iVar13 = iVar14 + (int)param_1;
          iVar14 = iVar14 + 1;
          *(float *)((int)_Memory_00 + iVar13 * 4) = fVar7 * _DAT_10010cd4;
        } while (iVar14 <= param_3);
      }
      iVar10 = iVar5;
      param_1 = (float *)((int)param_1 + param_3 + 1);
    } while (iVar5 < param_3);
  }
  puVar16 = *(uint **)((int)this + 0xa9e);
  iVar10 = 1 << ((byte)param_3 & 0x1f);
  local_18 = local_1c * local_1c;
  param_1 = (float *)0x0;
  puVar3 = puVar16 + iVar10 + -2;
  fVar4 = fVar8;
  fVar7 = local_1c;
  for (; puVar16 < puVar3; puVar16 = puVar16 + 2) {
    pfVar11 = (float *)*puVar16;
    uVar6 = puVar16[1];
    uVar12 = 1 << ((byte)uVar6 & 0x1f);
    iVar14 = uVar6 + 1;
    uVar17 = (uint)((uVar12 & (uint)pfVar11) != 0);
    iVar5 = -uVar17;
    if (uVar17 == 0) {
      fVar7 = fVar7 - pfVar9[iVar14 - (int)pfVar1];
    }
    else {
      fVar7 = pfVar9[iVar14 - (int)pfVar1] + fVar7;
    }
    uVar17 = 1;
    if (1 < iVar14) {
      pfVar15 = (float *)((int)_Memory_00 + (param_3 + 1 + iVar14) * 4);
      local_c = uVar6;
      do {
        if (-(uint)((uVar17 & (uint)pfVar11) != 0) == iVar5) {
          fVar4 = fVar4 + *pfVar15;
        }
        else {
          fVar4 = fVar4 - *pfVar15;
        }
        pfVar15 = pfVar15 + (int)pfVar1;
        uVar17 = uVar17 << 1;
        local_c = local_c - 1;
      } while (local_c != 0);
    }
    uVar12 = uVar12 * 2;
    for (iVar13 = uVar6 + 2; iVar13 <= param_3; iVar13 = iVar13 + 1) {
      if (-(uint)((uVar12 & (uint)pfVar11) != 0) == iVar5) {
        fVar4 = *(float *)((int)_Memory_00 + (iVar14 * (param_3 + 1) + iVar13) * 4) + fVar4;
      }
      else {
        fVar4 = fVar4 - *(float *)((int)_Memory_00 + (iVar14 * (param_3 + 1) + iVar13) * 4);
      }
      uVar12 = uVar12 << 1;
    }
    if (local_18 * fVar4 < fVar8 * fVar7 * fVar7) {
      local_18 = fVar7 * fVar7;
      param_1 = pfVar11;
      local_1c = fVar7;
      fVar8 = fVar4;
    }
  }
  if (local_1c < (float)_DAT_10010cd8) {
    param_1 = (float *)((uint)param_1 ^ iVar10 - 1U);
  }
  free(_Memory);
  free(_Memory_00);
  return (uint)param_1;
}


