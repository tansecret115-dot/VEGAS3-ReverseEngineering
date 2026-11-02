/* Module: mp3plug.dll
   Function: FUN_5f6e944c
   Address: 5f6e944c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5f6e944c(int param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int in_EAX;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int in_stack_00000010;
  int in_stack_00000014;
  float local_110 [44];
  float local_60;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_38;
  
  local_50 = param_2;
  fVar10 = _DAT_5f75d7c8 + _DAT_5f75d7c0;
  iVar13 = *(int *)(param_2 + 0x10);
  local_60 = fVar10;
  if (in_EAX == 0) {
    return;
  }
  iVar12 = 0;
  if (0 < in_EAX) {
    do {
      iVar11 = param_1 - *(int *)(in_stack_00000010 + iVar12 * 4);
      if (iVar11 < 0) {
        local_38 = iVar13;
        fVar3 = *(float *)(&DAT_5f7411c0 + (iVar11 * -3 & 0xfU) * 4) *
                *(float *)(&DAT_5f741120 + (iVar11 * -3 >> 4) * 4);
      }
      else {
        local_38 = iVar13;
        fVar3 = *(float *)(&DAT_5f7410e0 + (iVar11 * 3 & 0xfU) * 4) *
                *(float *)(&DAT_5f741040 + (iVar11 * 3 >> 4) * 4);
      }
      local_110[iVar12] = fVar3;
      iVar12 = iVar12 + 1;
    } while (iVar12 < in_EAX);
  }
  local_110[in_EAX] = 0.0;
  local_48 = 0;
  local_44 = 0;
  local_38 = iVar13;
  if (0 < in_EAX) {
    do {
      iVar13 = local_44 + 1;
      iVar12 = iVar13;
      if (iVar13 < in_EAX) {
        local_4c = *(int *)(in_stack_00000010 + local_44 * 4);
        do {
          iVar12 = iVar13;
          if (((local_4c != *(int *)(in_stack_00000010 + iVar13 * 4)) ||
              (iVar12 = iVar13 + 1, in_EAX <= iVar12)) ||
             (local_4c != *(int *)(in_stack_00000010 + iVar12 * 4))) break;
          iVar13 = iVar13 + 2;
          iVar12 = iVar13;
        } while (iVar13 < in_EAX);
      }
      fVar3 = local_110[local_44];
      fVar4 = local_110[iVar12];
      uVar5 = *(uint *)(local_50 + iVar12 * 0x20);
      iVar13 = local_48;
      if (local_48 + 8 <= (int)uVar5) {
        while( true ) {
          pfVar1 = (float *)(local_38 + local_48 * 4);
          fVar6 = *pfVar1;
          fVar7 = pfVar1[1];
          pfVar2 = (float *)(local_38 + 0x10 + local_48 * 4);
          fVar8 = pfVar2[2];
          fVar9 = pfVar2[3];
          uVar14 = CONCAT44((int)(pfVar2[1] * fVar3 + fVar10),(int)(*pfVar2 * fVar3 + fVar10));
          *(ulonglong *)(in_stack_00000014 + 8 + local_48 * 4) =
               CONCAT44((int)(pfVar1[3] * fVar3 + fVar10),(int)(pfVar1[2] * fVar3 + fVar10));
          uVar15 = CONCAT44((int)(fVar9 * fVar3 + fVar10),(int)(fVar8 * fVar3 + fVar10));
          *(ulonglong *)(in_stack_00000014 + local_48 * 4) =
               CONCAT44((int)(fVar7 * fVar3 + fVar10),(int)(fVar6 * fVar3 + fVar10));
          iVar13 = local_48 + 8;
          if ((int)uVar5 < local_48 + 0x10) break;
          *(undefined8 *)(in_stack_00000014 + -8 + iVar13 * 4) = uVar15;
          *(undefined8 *)(in_stack_00000014 + -0x10 + iVar13 * 4) = uVar14;
          local_48 = iVar13;
        }
        *(undefined8 *)(in_stack_00000014 + -8 + iVar13 * 4) = uVar15;
        *(undefined8 *)(in_stack_00000014 + -0x10 + iVar13 * 4) = uVar14;
      }
      local_4c = iVar13 + 4;
      local_48 = iVar13;
      if (local_4c <= (int)uVar5) {
        pfVar1 = (float *)(local_38 + iVar13 * 4);
        fVar6 = pfVar1[2];
        fVar7 = pfVar1[3];
        *(ulonglong *)(in_stack_00000014 + iVar13 * 4) =
             CONCAT44((int)(pfVar1[1] * fVar3 + fVar10),(int)(*pfVar1 * fVar3 + fVar10));
        *(ulonglong *)(in_stack_00000014 + 8 + iVar13 * 4) =
             CONCAT44((int)(fVar7 * fVar3 + fVar10),(int)(fVar6 * fVar3 + fVar10));
        local_48 = local_4c;
      }
      if ((uVar5 & 3) != 0) {
        pfVar1 = (float *)(local_38 + local_48 * 4);
        fVar6 = pfVar1[2];
        fVar7 = pfVar1[3];
        *(ulonglong *)(in_stack_00000014 + local_48 * 4) =
             CONCAT44((int)(fVar3 * pfVar1[1] + fVar10),(int)(fVar3 * *pfVar1 + fVar10));
        *(ulonglong *)(in_stack_00000014 + 8 + local_48 * 4) =
             CONCAT44((int)(fVar4 * fVar7 + fVar10),(int)(fVar4 * fVar6 + fVar10));
        local_48 = local_48 + 4;
      }
      local_44 = iVar12;
    } while (iVar12 < in_EAX);
  }
  return;
}


