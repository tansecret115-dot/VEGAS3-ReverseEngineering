/* Module: wmfplug2.dll
   Function: FUN_0044cea0
   Address: 0044cea0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044cea0(int param_1,uint param_2,uint param_3,float param_4)

{
  float fVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  ulonglong *puVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  int local_8;
  
  uVar5 = param_3;
  uVar3 = param_2 >> 2 & 3;
  if (uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 4 - uVar3;
  }
  if ((int)uVar3 < (int)param_3) {
    uVar5 = (int)((param_3 - uVar3) + ((int)(param_3 - uVar3) >> 0x1f & 3U)) >> 2;
    local_8 = (param_3 + uVar5 * -4) - uVar3;
    param_3 = uVar5;
  }
  else {
    local_8 = 0;
    param_3 = 0;
    uVar3 = uVar5;
  }
  iVar8 = 0;
  if (0 < (int)uVar3) {
    do {
      iVar4 = ftol();
      if (iVar4 < -0x80) {
        bVar2 = 0;
      }
      else if (iVar4 < 0x80) {
        bVar2 = (byte)iVar4 ^ 0x80;
      }
      else {
        bVar2 = 0xff;
      }
      iVar4 = iVar8 + 1;
      *(byte *)(iVar8 + param_1) = bVar2;
      iVar8 = iVar4;
    } while (iVar4 < (int)uVar3);
  }
  fVar1 = param_4 * _DAT_00483a30;
  pfVar7 = (float *)(param_2 + uVar3 * 4);
  if (param_3 != 0) {
    uVar6 = param_3 & 3;
    puVar9 = (ulonglong *)(uVar3 + param_1);
    for (uVar5 = param_3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      uVar10 = packssdw(CONCAT44((int)(pfVar7[1] * fVar1),(int)(*pfVar7 * fVar1)),
                        CONCAT44((int)(pfVar7[3] * fVar1),(int)(pfVar7[2] * fVar1)));
      uVar12 = packssdw(CONCAT44((int)(pfVar7[5] * fVar1),(int)(pfVar7[4] * fVar1)),
                        CONCAT44((int)(pfVar7[7] * fVar1),(int)(pfVar7[6] * fVar1)));
      uVar14 = packssdw(CONCAT44((int)(pfVar7[9] * fVar1),(int)(pfVar7[8] * fVar1)),
                        CONCAT44((int)(pfVar7[0xb] * fVar1),(int)(pfVar7[10] * fVar1)));
      uVar16 = packssdw(CONCAT44((int)(pfVar7[0xd] * fVar1),(int)(pfVar7[0xc] * fVar1)),
                        CONCAT44((int)(pfVar7[0xf] * fVar1),(int)(pfVar7[0xe] * fVar1)));
      uVar11 = packsswb(uVar10,uVar12);
      uVar15 = packsswb(uVar14,uVar16);
      uVar10 = psllw(0xffffffffffffffff,7);
      uVar13 = packsswb(uVar10,uVar10);
      *puVar9 = uVar11 ^ uVar13;
      puVar9[1] = uVar15 ^ uVar13;
      puVar9 = puVar9 + 2;
      pfVar7 = pfVar7 + 0x10;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      uVar10 = packssdw(CONCAT44((int)(pfVar7[1] * fVar1),(int)(*pfVar7 * fVar1)),
                        CONCAT44((int)(pfVar7[3] * fVar1),(int)(pfVar7[2] * fVar1)));
      uVar10 = packsswb(uVar10,uVar10);
      uVar12 = psllw(0xffffffffffffffff,7);
      uVar12 = packsswb(uVar12,uVar12);
      *(uint *)puVar9 = (uint)uVar10 ^ (uint)uVar12;
      puVar9 = (ulonglong *)((int)puVar9 + 4);
      pfVar7 = pfVar7 + 4;
    }
  }
  iVar8 = 0;
  if (0 < local_8) {
    do {
      iVar4 = ftol();
      if (iVar4 < -0x80) {
        bVar2 = 0;
      }
      else if (iVar4 < 0x80) {
        bVar2 = (byte)iVar4 ^ 0x80;
      }
      else {
        bVar2 = 0xff;
      }
      *(byte *)((int)(uVar3 + param_1) + iVar8 + param_3 * 4) = bVar2;
      iVar8 = iVar8 + 1;
    } while (iVar8 < local_8);
  }
  return;
}


