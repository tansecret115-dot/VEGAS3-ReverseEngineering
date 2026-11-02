/* Module: oggplug.dll
   Function: FUN_00436b60
   Address: 00436b60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_00436b60(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  void *pvVar8;
  int *piVar9;
  float *pfVar10;
  int iVar11;
  uint *puVar12;
  float *pfVar13;
  int iVar14;
  float10 fVar15;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x1c);
  piVar2 = (int *)**(float **)(param_1 + 0x68);
  iVar3 = piVar1[0x389];
  if (piVar2[6] < *(int *)(param_1 + 0x10)) {
    piVar2[6] = *(int *)(param_1 + 0x10);
    iVar11 = 0;
    if (0 < *piVar2 << 2) {
      do {
        pvVar8 = realloc(*(void **)(piVar2[5] + iVar11 * 4),piVar2[6] << 2);
        *(void **)(piVar2[5] + iVar11 * 4) = pvVar8;
        iVar11 = iVar11 + 1;
      } while (iVar11 < *piVar2 * 4);
    }
  }
  local_34 = 0;
  if (0 < *piVar2) {
    local_2c = 0;
    local_30 = 0;
    do {
      iVar11 = *(int *)(*(int *)(param_1 + 8) + local_34 * 4);
      piVar9 = (int *)(local_30 + piVar2[5]);
      bVar7 = true;
      iVar14 = piVar9[2];
      iVar4 = *piVar9;
      puVar12 = (uint *)(local_2c + piVar2[4]);
      iVar5 = piVar9[1];
      iVar6 = piVar9[3];
      local_38 = piVar2[7];
      if (local_38 < *(int *)(param_1 + 0x14)) {
        pfVar13 = (float *)(iVar11 + local_38 * 4);
        do {
          pfVar10 = (float *)((iVar5 - iVar11) + (int)pfVar13);
          fVar15 = FUN_00436f60((int *)puVar12,*pfVar13);
          *(float *)((int)pfVar10 + (iVar4 - iVar5)) = (float)fVar15;
          fVar15 = FUN_00436ff0((int *)(puVar12 + 6),*pfVar13);
          *pfVar10 = (float)fVar15;
          fVar15 = FUN_00436ff0((int *)(puVar12 + 0xc),*pfVar13);
          *(float *)((int)pfVar10 + (iVar14 - iVar5)) = (float)fVar15;
          fVar15 = FUN_00436ff0((int *)(puVar12 + 0x12),*pfVar13);
          *(float *)((int)pfVar10 + (iVar6 - iVar5)) = (float)fVar15;
          if (*pfVar13 != _DAT_0044d6f0) {
            bVar7 = false;
          }
          local_38 = local_38 + 1;
          pfVar13 = pfVar13 + 1;
        } while (local_38 < *(int *)(param_1 + 0x14));
        if (bVar7) goto LAB_00436ce7;
      }
      else {
LAB_00436ce7:
        if (piVar2[7] + 0x40 < *(int *)(param_1 + 0x14)) {
          FUN_00436f40(puVar12);
          FUN_00436f40(puVar12 + 6);
          FUN_00436f40(puVar12 + 0xc);
          FUN_00436f40(puVar12 + 0x12);
        }
      }
      local_34 = local_34 + 1;
      local_30 = local_30 + 0x10;
      local_2c = local_2c + 0x60;
    } while (local_34 < *piVar2);
  }
  piVar2[7] = *(int *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x28) == 0) {
    local_38 = *(int *)(param_1 + 0x30);
  }
  else {
    local_38 = (((int)(piVar1[1] + (piVar1[1] >> 0x1f & 3U)) >> 2) -
               ((int)(*piVar1 + (*piVar1 >> 0x1f & 3U)) >> 2)) + *(int *)(param_1 + 0x30);
  }
  if (local_38 < piVar2[8]) {
    local_38 = piVar2[8];
  }
  if (piVar2[1] + local_38 <= *(int *)(param_1 + 0x14)) {
    do {
      if (param_2 <= local_38) {
        return 1;
      }
      piVar2[8] = local_38;
      local_34 = 0;
      if (0 < *piVar2) {
        do {
          iVar11 = 0;
          iVar14 = local_34 << 4;
          pfVar13 = (float *)(iVar3 + 0x1c);
          do {
            pfVar10 = (float *)(*(int *)(piVar2[5] + iVar14) + local_38 * 4);
            fVar15 = FUN_00436e90((float)piVar2,(int)(pfVar10 + -piVar2[1]),pfVar10);
            if (((float10)pfVar13[-4] < fVar15) || (fVar15 < (float10)*pfVar13)) {
              return 0;
            }
            iVar11 = iVar11 + 1;
            iVar14 = iVar14 + 4;
            pfVar13 = pfVar13 + 1;
          } while (iVar11 < 4);
          local_34 = local_34 + 1;
        } while (local_34 < *piVar2);
      }
      iVar11 = piVar2[1];
      iVar14 = *piVar1;
      if (iVar11 <= *piVar1) {
        iVar14 = iVar11;
      }
      local_38 = local_38 + iVar14 / 2;
    } while (iVar11 + local_38 <= *(int *)(param_1 + 0x14));
  }
  return ((local_38 < param_2) - 1 & 2) - 1;
}


