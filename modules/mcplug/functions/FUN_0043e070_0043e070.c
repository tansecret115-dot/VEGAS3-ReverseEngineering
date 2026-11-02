/* Module: mcplug.dll
   Function: FUN_0043e070
   Address: 0043e070
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043e070(ulonglong *param_1,double *param_2,uint param_3,float param_4)

{
  double dVar1;
  double dVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  double *pdVar8;
  int iVar9;
  ulonglong *puVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  float10 fVar13;
  float10 extraout_ST0;
  ulonglong uVar14;
  undefined8 uVar15;
  int local_10;
  ulonglong *local_8;
  
  uVar6 = param_3;
  fVar13 = (float10)param_4 * (float10)_DAT_0047f8b8;
  local_8 = param_1;
  if (((uint)param_2 & 7) == 0) {
    uVar5 = (uint)(((uint)param_2 & 0xf) != 0);
    if ((int)uVar5 < (int)param_3) {
      uVar6 = (int)(param_3 - uVar5) / 2;
      local_10 = (param_3 + uVar6 * -2) - uVar5;
      param_3 = uVar6;
    }
    else {
      local_10 = 0;
      param_3 = 0;
      uVar5 = uVar6;
    }
    iVar9 = 0;
    if (0 < (int)uVar5) {
      do {
        iVar4 = ftol();
        if (iVar4 < -0x80) {
          bVar3 = 0;
        }
        else if (iVar4 < 0x80) {
          bVar3 = (byte)iVar4 ^ 0x80;
        }
        else {
          bVar3 = 0xff;
        }
        iVar4 = iVar9 + 1;
        *(byte *)(iVar9 + (int)param_1) = bVar3;
        iVar9 = iVar4;
        fVar13 = extraout_ST0;
      } while (iVar4 < (int)uVar5);
    }
    pdVar8 = param_2 + uVar5;
    local_8 = (ulonglong *)(uVar5 + (int)param_1);
    uVar6 = param_3;
    if (param_3 != 0) {
      dVar1 = (double)fVar13;
      dVar2 = (double)fVar13;
      uVar7 = param_3 & 3;
      puVar10 = local_8;
      for (uVar5 = param_3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        uVar11 = packssdw(CONCAT44((int)(pdVar8[1] * dVar2),(int)(*pdVar8 * dVar1)),
                          CONCAT44((int)(pdVar8[3] * dVar2),(int)(pdVar8[2] * dVar1)));
        uVar15 = packssdw(CONCAT44((int)(pdVar8[5] * dVar2),(int)(pdVar8[4] * dVar1)),
                          CONCAT44((int)(pdVar8[7] * dVar2),(int)(pdVar8[6] * dVar1)));
        uVar12 = packsswb(uVar11,uVar15);
        uVar11 = psllw(0xffffffffffffffff,7);
        uVar14 = packsswb(uVar11,uVar11);
        *puVar10 = uVar12 ^ uVar14;
        puVar10 = puVar10 + 1;
        pdVar8 = pdVar8 + 8;
      }
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        uVar11 = CONCAT44((int)(pdVar8[1] * dVar2),(int)(*pdVar8 * dVar1));
        uVar11 = packssdw(uVar11,uVar11);
        uVar11 = packsswb(uVar11,uVar11);
        uVar15 = psllw(0xffffffffffffffff,7);
        uVar15 = packsswb(uVar15,uVar15);
        *(ushort *)puVar10 = (ushort)uVar11 ^ (ushort)uVar15;
        puVar10 = (ulonglong *)((int)puVar10 + 2);
        pdVar8 = pdVar8 + 2;
      }
    }
  }
  else {
    uVar6 = (int)param_3 / 2;
    local_10 = (int)param_3 % 2;
    if (uVar6 != 0) {
      dVar1 = (double)fVar13;
      dVar2 = (double)fVar13;
      uVar7 = uVar6 & 3;
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        uVar11 = packssdw(CONCAT44((int)(param_2[1] * dVar2),(int)(*param_2 * dVar1)),
                          CONCAT44((int)(param_2[3] * dVar2),(int)(param_2[2] * dVar1)));
        uVar15 = packssdw(CONCAT44((int)(param_2[5] * dVar2),(int)(param_2[4] * dVar1)),
                          CONCAT44((int)(param_2[7] * dVar2),(int)(param_2[6] * dVar1)));
        uVar12 = packsswb(uVar11,uVar15);
        uVar11 = psllw(0xffffffffffffffff,7);
        uVar14 = packsswb(uVar11,uVar11);
        *param_1 = uVar12 ^ uVar14;
        param_1 = param_1 + 1;
        param_2 = param_2 + 8;
      }
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        uVar11 = CONCAT44((int)(param_2[1] * dVar2),(int)(*param_2 * dVar1));
        uVar11 = packssdw(uVar11,uVar11);
        uVar11 = packsswb(uVar11,uVar11);
        uVar15 = psllw(0xffffffffffffffff,7);
        uVar15 = packsswb(uVar15,uVar15);
        *(ushort *)param_1 = (ushort)uVar11 ^ (ushort)uVar15;
        param_1 = (ulonglong *)((int)param_1 + 2);
        param_2 = param_2 + 2;
      }
    }
  }
  iVar9 = 0;
  if (0 < local_10) {
    do {
      iVar4 = ftol();
      if (iVar4 < -0x80) {
        bVar3 = 0;
      }
      else if (iVar4 < 0x80) {
        bVar3 = (byte)iVar4 ^ 0x80;
      }
      else {
        bVar3 = 0xff;
      }
      *(byte *)((int)local_8 + iVar9 + uVar6 * 2) = bVar3;
      iVar9 = iVar9 + 1;
    } while (iVar9 < local_10);
  }
  return;
}


