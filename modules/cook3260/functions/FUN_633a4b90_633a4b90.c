/* Module: cook3260.dll
   Function: FUN_633a4b90
   Address: 633a4b90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_633a4b90(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float *pfVar13;
  float *pfVar14;
  int iVar15;
  float *pfVar16;
  float *pfVar17;
  int iVar18;
  int local_3c;
  int local_34;
  int local_1c;
  
  iVar18 = *(int *)((int)this + 0x47ac);
  local_3c = 0;
  pfVar14 = param_1 + (iVar18 >> 1) + iVar18;
  pfVar13 = param_1 + iVar18;
  pfVar16 = param_1;
  pfVar17 = param_1 + (iVar18 >> 1);
  if (0 < (int)(*(uint *)((int)this + 0x47ac) & 0xfffffffc)) {
    do {
      fVar1 = *pfVar13;
      fVar5 = *pfVar16;
      fVar2 = pfVar13[1];
      fVar3 = pfVar14[1];
      fVar4 = *pfVar14;
      fVar6 = pfVar16[1];
      fVar7 = *pfVar17;
      fVar10 = fVar2 + fVar6;
      fVar8 = pfVar17[1];
      fVar12 = fVar4 + fVar7;
      fVar11 = fVar3 + fVar8;
      fVar9 = fVar1 + fVar5;
      *pfVar16 = fVar9 + fVar12;
      pfVar16[1] = fVar11 + fVar10;
      fVar6 = fVar6 - fVar2;
      fVar8 = fVar8 - fVar3;
      fVar7 = fVar7 - fVar4;
      fVar5 = fVar5 - fVar1;
      *pfVar17 = fVar9 - fVar12;
      pfVar17[1] = fVar10 - fVar11;
      *pfVar13 = fVar8 + fVar5;
      pfVar13[1] = fVar6 - fVar7;
      *pfVar14 = fVar5 - fVar8;
      pfVar14[1] = fVar7 + fVar6;
      pfVar14 = pfVar14 + 2;
      local_3c = local_3c + 1;
      pfVar13 = pfVar13 + 2;
      pfVar16 = pfVar16 + 2;
      pfVar17 = pfVar17 + 2;
    } while (local_3c < *(int *)((int)this + 0x47ac) >> 2);
  }
  local_1c = 4;
  iVar18 = *(int *)((int)this + 0x47ac) >> 3;
  local_34 = 0;
  if (*(int *)((int)this + 0x47b0) != 3 && -1 < *(int *)((int)this + 0x47b0) + -3) {
    do {
      if (0 < local_1c) {
        local_3c = local_1c;
        pfVar13 = param_1;
        pfVar16 = *(float **)((int)this + 0x47b4);
        pfVar14 = param_1;
        do {
          pfVar14 = pfVar14 + iVar18 * 2;
          fVar1 = *pfVar16;
          fVar2 = pfVar16[1];
          iVar15 = iVar18;
          if (0 < iVar18) {
            do {
              pfVar17 = pfVar14 + 1;
              fVar3 = *pfVar13;
              fVar6 = fVar2 * pfVar14[1] + fVar1 * *pfVar14;
              fVar4 = pfVar13[1];
              fVar5 = fVar2 * *pfVar14 - fVar1 * pfVar14[1];
              *pfVar13 = fVar6 + fVar3;
              *pfVar14 = fVar3 - fVar6;
              pfVar13[1] = fVar4 - fVar5;
              pfVar13 = pfVar13 + 2;
              pfVar14 = pfVar14 + 2;
              *pfVar17 = fVar5 + fVar4;
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
          }
          pfVar13 = pfVar13 + iVar18 * 2;
          local_3c = local_3c + -1;
          pfVar16 = pfVar16 + 2;
        } while (local_3c != 0);
      }
      iVar18 = iVar18 >> 1;
      local_1c = local_1c << 1;
      local_34 = local_34 + 1;
    } while (local_34 < *(int *)((int)this + 0x47b0) + -3);
  }
  pfVar14 = *(float **)((int)this + 0x47b4);
  iVar18 = 0;
  if (0 < (int)(*(uint *)((int)this + 0x47ac) & 0xfffffffe)) {
    pfVar13 = param_1 + 2;
    do {
      fVar1 = *pfVar14;
      pfVar16 = pfVar14 + 1;
      pfVar14 = pfVar14 + 2;
      fVar2 = pfVar13[-2];
      fVar3 = pfVar13[-1];
      fVar4 = *pfVar16 * pfVar13[1] + fVar1 * *pfVar13;
      iVar18 = iVar18 + 1;
      fVar1 = *pfVar16 * *pfVar13 - fVar1 * pfVar13[1];
      pfVar13[-2] = fVar4 + fVar2;
      pfVar13[-1] = fVar3 - fVar1;
      *pfVar13 = fVar2 - fVar4;
      pfVar13[1] = fVar1 + fVar3;
      pfVar13 = pfVar13 + 4;
    } while (iVar18 < *(int *)((int)this + 0x47ac) >> 1);
  }
  return;
}


