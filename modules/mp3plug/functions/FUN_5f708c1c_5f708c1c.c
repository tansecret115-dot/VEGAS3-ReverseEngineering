/* Module: mp3plug.dll
   Function: FUN_5f708c1c
   Address: 5f708c1c
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f708c1c(int param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int in_EAX;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int *in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  float local_60;
  float local_5c;
  int local_48;
  
  local_48 = 0;
  if (0 < param_1) {
    do {
      fVar16 = 0.0;
      fVar17 = 0.0;
      fVar18 = 0.0;
      fVar19 = 0.0;
      fVar12 = 0.0;
      fVar13 = 0.0;
      fVar14 = 0.0;
      fVar15 = 0.0;
      iVar10 = 0;
      iVar7 = *in_stack_00000010;
      iVar8 = in_stack_00000010[1];
      iVar9 = in_stack_00000010[2];
      iVar11 = iVar10;
      if (7 < iVar7) {
        do {
          pfVar1 = (float *)(iVar9 + iVar10 * 4);
          pfVar5 = (float *)(iVar9 + 0x10 + iVar10 * 4);
          iVar11 = iVar10 + 8;
          iVar2 = iVar10 * 4 + iVar8 * 4;
          pfVar3 = (float *)(in_EAX + iVar2);
          pfVar6 = (float *)(in_EAX + 0x10 + iVar2);
          pfVar4 = (float *)(param_2 + iVar2);
          fVar16 = fVar16 + *pfVar3 * *pfVar1 + *pfVar6 * *pfVar5;
          fVar17 = fVar17 + pfVar3[1] * pfVar1[1] + pfVar6[1] * pfVar5[1];
          fVar18 = fVar18 + pfVar3[2] * pfVar1[2] + pfVar6[2] * pfVar5[2];
          fVar19 = fVar19 + pfVar3[3] * pfVar1[3] + pfVar6[3] * pfVar5[3];
          pfVar3 = (float *)(param_2 + 0x10 + iVar2);
          iVar2 = iVar10 + 0x10;
          fVar12 = fVar12 + *pfVar4 * *pfVar1 + *pfVar3 * *pfVar5;
          fVar13 = fVar13 + pfVar4[1] * pfVar1[1] + pfVar3[1] * pfVar5[1];
          fVar14 = fVar14 + pfVar4[2] * pfVar1[2] + pfVar3[2] * pfVar5[2];
          fVar15 = fVar15 + pfVar4[3] * pfVar1[3] + pfVar3[3] * pfVar5[3];
          iVar10 = iVar11;
        } while (iVar2 <= iVar7);
      }
      if (iVar11 + 4 <= iVar7) {
        pfVar1 = (float *)(iVar9 + iVar11 * 4);
        iVar10 = iVar11 * 4 + iVar8 * 4;
        pfVar3 = (float *)(in_EAX + iVar10);
        fVar16 = fVar16 + *pfVar3 * *pfVar1;
        fVar17 = fVar17 + pfVar3[1] * pfVar1[1];
        fVar18 = fVar18 + pfVar3[2] * pfVar1[2];
        fVar19 = fVar19 + pfVar3[3] * pfVar1[3];
        pfVar3 = (float *)(param_2 + iVar10);
        fVar12 = fVar12 + *pfVar3 * *pfVar1;
        fVar13 = fVar13 + pfVar3[1] * pfVar1[1];
        fVar14 = fVar14 + pfVar3[2] * pfVar1[2];
        fVar15 = fVar15 + pfVar3[3] * pfVar1[3];
        iVar11 = iVar11 + 4;
      }
      local_5c = 0.0;
      local_60 = DAT_5f760950;
      if (iVar11 < iVar7) {
        iVar10 = iVar11 << 2;
        do {
          iVar2 = iVar10 + iVar8 * 4;
          iVar10 = iVar10 + 4;
          local_60 = *(float *)(iVar9 + iVar11 * 4) * *(float *)(in_EAX + iVar2) + local_60;
          local_5c = *(float *)(param_2 + iVar2) * *(float *)(iVar9 + iVar11 * 4) + local_5c;
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar7);
      }
      iVar7 = local_48 + 1;
      *(float *)(in_stack_00000014 + local_48 * 4) = local_60 + fVar19 + fVar17 + fVar18 + fVar16;
      in_stack_00000010 = in_stack_00000010 + 3;
      *(float *)(in_stack_00000018 + local_48 * 4) = local_5c + fVar15 + fVar13 + fVar14 + fVar12;
      local_48 = iVar7;
    } while (iVar7 < param_1);
  }
  return;
}


