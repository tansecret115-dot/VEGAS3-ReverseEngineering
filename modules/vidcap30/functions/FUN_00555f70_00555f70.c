/* Module: vidcap30.exe
   Function: FUN_00555f70
   Address: 00555f70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00555f70(int param_1,uint param_2,uint param_3,float param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  ulonglong *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  int local_8;
  
  iVar7 = param_3;
  uVar2 = param_2 >> 2 & 3;
  if (uVar2 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = 4 - uVar2;
  }
  if (iVar5 < (int)param_3) {
    uVar2 = (int)((param_3 - iVar5) + ((int)(param_3 - iVar5) >> 0x1f & 3U)) >> 2;
    local_8 = (param_3 + uVar2 * -4) - iVar5;
    param_3 = uVar2;
  }
  else {
    local_8 = 0;
    param_3 = 0;
    iVar5 = iVar7;
  }
  iVar7 = 0;
  if (0 < iVar5) {
    do {
      iVar3 = ftol();
      if (iVar3 < -0x80) {
        bVar1 = 0;
      }
      else if (iVar3 < 0x80) {
        bVar1 = (byte)iVar3 ^ 0x80;
      }
      else {
        bVar1 = 0xff;
      }
      iVar3 = iVar7 + 1;
      *(byte *)(iVar7 + param_1) = bVar1;
      iVar7 = iVar3;
    } while (iVar3 < iVar5);
  }
  param_4 = param_4 * _DAT_0059fdac;
  pfVar6 = (float *)(param_2 + iVar5 * 4);
  if (param_3 != 0) {
    uVar4 = param_3 & 3;
    puVar8 = (ulonglong *)(iVar5 + param_1);
    for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      uVar9 = packssdw(CONCAT44((int)(pfVar6[1] * param_4),(int)(*pfVar6 * param_4)),
                       CONCAT44((int)(pfVar6[3] * param_4),(int)(pfVar6[2] * param_4)));
      uVar11 = packssdw(CONCAT44((int)(pfVar6[5] * param_4),(int)(pfVar6[4] * param_4)),
                        CONCAT44((int)(pfVar6[7] * param_4),(int)(pfVar6[6] * param_4)));
      uVar13 = packssdw(CONCAT44((int)(pfVar6[9] * param_4),(int)(pfVar6[8] * param_4)),
                        CONCAT44((int)(pfVar6[0xb] * param_4),(int)(pfVar6[10] * param_4)));
      uVar15 = packssdw(CONCAT44((int)(pfVar6[0xd] * param_4),(int)(pfVar6[0xc] * param_4)),
                        CONCAT44((int)(pfVar6[0xf] * param_4),(int)(pfVar6[0xe] * param_4)));
      uVar10 = packsswb(uVar9,uVar11);
      uVar14 = packsswb(uVar13,uVar15);
      uVar9 = psllw(0xffffffffffffffff,7);
      uVar12 = packsswb(uVar9,uVar9);
      *puVar8 = uVar10 ^ uVar12;
      puVar8[1] = uVar14 ^ uVar12;
      puVar8 = puVar8 + 2;
      pfVar6 = pfVar6 + 0x10;
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      uVar9 = packssdw(CONCAT44((int)(pfVar6[1] * param_4),(int)(*pfVar6 * param_4)),
                       CONCAT44((int)(pfVar6[3] * param_4),(int)(pfVar6[2] * param_4)));
      uVar9 = packsswb(uVar9,uVar9);
      uVar11 = psllw(0xffffffffffffffff,7);
      uVar11 = packsswb(uVar11,uVar11);
      *(uint *)puVar8 = (uint)uVar9 ^ (uint)uVar11;
      puVar8 = (ulonglong *)((int)puVar8 + 4);
      pfVar6 = pfVar6 + 4;
    }
  }
  iVar7 = 0;
  if (0 < local_8) {
    do {
      iVar3 = ftol();
      if (iVar3 < -0x80) {
        bVar1 = 0;
      }
      else if (iVar3 < 0x80) {
        bVar1 = (byte)iVar3 ^ 0x80;
      }
      else {
        bVar1 = 0xff;
      }
      *(byte *)(iVar5 + param_1 + iVar7 + param_3 * 4) = bVar1;
      iVar7 = iVar7 + 1;
    } while (iVar7 < local_8);
  }
  return;
}


