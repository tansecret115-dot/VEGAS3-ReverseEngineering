/* Module: oggplug.dll
   Function: FUN_00428c80
   Address: 00428c80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00428c80(undefined2 *param_1,uint param_2,int param_3,float param_4)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float *pfVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int local_c;
  uint local_8;
  
  uVar2 = param_2 >> 2 & 3;
  if (uVar2 == 0) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = (float)(4 - uVar2);
  }
  if ((int)fVar5 < param_3) {
    local_8 = (int)((param_3 - (int)fVar5) + (param_3 - (int)fVar5 >> 0x1f & 3U)) >> 2;
    local_c = (param_3 + local_8 * -4) - (int)fVar5;
  }
  else {
    local_c = 0;
    local_8 = 0;
    fVar5 = (float)param_3;
  }
  fVar1 = param_4 * _DAT_0044d4b4;
  puVar8 = param_1;
  param_4 = fVar5;
  if (0 < (int)fVar5) {
    do {
      iVar3 = ftol();
      if (iVar3 < -0x8000) {
        iVar3 = -0x8000;
      }
      else if (0x7fff < iVar3) {
        iVar3 = 0x7fff;
      }
      *puVar8 = (short)iVar3;
      param_4 = (float)((int)param_4 + -1);
      puVar8 = puVar8 + 1;
    } while (param_4 != 0.0);
  }
  pfVar6 = (float *)(param_2 + (int)fVar5 * 4);
  if (local_8 != 0) {
    uVar4 = local_8 & 3;
    puVar7 = (undefined8 *)(param_1 + (int)fVar5);
    for (uVar2 = local_8 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      uVar9 = packssdw(CONCAT44((int)(pfVar6[1] * fVar1),(int)(*pfVar6 * fVar1)),
                       CONCAT44((int)(pfVar6[3] * fVar1),(int)(pfVar6[2] * fVar1)));
      uVar10 = packssdw(CONCAT44((int)(pfVar6[5] * fVar1),(int)(pfVar6[4] * fVar1)),
                        CONCAT44((int)(pfVar6[7] * fVar1),(int)(pfVar6[6] * fVar1)));
      uVar11 = packssdw(CONCAT44((int)(pfVar6[9] * fVar1),(int)(pfVar6[8] * fVar1)),
                        CONCAT44((int)(pfVar6[0xb] * fVar1),(int)(pfVar6[10] * fVar1)));
      uVar12 = packssdw(CONCAT44((int)(pfVar6[0xd] * fVar1),(int)(pfVar6[0xc] * fVar1)),
                        CONCAT44((int)(pfVar6[0xf] * fVar1),(int)(pfVar6[0xe] * fVar1)));
      *puVar7 = uVar9;
      puVar7[1] = uVar10;
      puVar7[2] = uVar11;
      puVar7[3] = uVar12;
      puVar7 = puVar7 + 4;
      pfVar6 = pfVar6 + 0x10;
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      uVar9 = packssdw(CONCAT44((int)(pfVar6[1] * fVar1),(int)(*pfVar6 * fVar1)),
                       CONCAT44((int)(pfVar6[3] * fVar1),(int)(pfVar6[2] * fVar1)));
      *puVar7 = uVar9;
      puVar7 = puVar7 + 1;
      pfVar6 = pfVar6 + 4;
    }
  }
  puVar7 = (undefined8 *)((int)(param_1 + (int)fVar5) + local_8 * 8);
  if (0 < local_c) {
    do {
      iVar3 = ftol();
      if (iVar3 < -0x8000) {
        iVar3 = -0x8000;
      }
      else if (0x7fff < iVar3) {
        iVar3 = 0x7fff;
      }
      *(short *)puVar7 = (short)iVar3;
      puVar7 = (undefined8 *)((int)puVar7 + 2);
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}


