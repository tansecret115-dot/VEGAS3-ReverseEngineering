/* Module: vegas30k.dll
   Function: FUN_010ba530
   Address: 010ba530
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010ba530(ulonglong *param_1,double *param_2,uint param_3,float param_4)

{
  double dVar1;
  double dVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong *puVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  float10 fVar12;
  float10 extraout_ST0;
  ulonglong uVar13;
  undefined8 uVar14;
  int local_10;
  ulonglong *local_8;
  
  uVar6 = param_3;
  fVar12 = (float10)param_4 * (float10)_DAT_011db280;
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
    iVar8 = 0;
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
        iVar4 = iVar8 + 1;
        *(byte *)(iVar8 + (int)param_1) = bVar3;
        iVar8 = iVar4;
        fVar12 = extraout_ST0;
      } while (iVar4 < (int)uVar5);
    }
    param_2 = param_2 + uVar5;
    local_8 = (ulonglong *)(uVar5 + (int)param_1);
    uVar6 = param_3;
    if (param_3 != 0) {
      dVar1 = (double)fVar12;
      dVar2 = (double)fVar12;
      uVar5 = param_3 & 3;
      puVar9 = local_8;
      for (param_3 = param_3 >> 2; param_3 != 0; param_3 = param_3 - 1) {
        uVar10 = packssdw(CONCAT44((int)(param_2[1] * dVar2),(int)(*param_2 * dVar1)),
                          CONCAT44((int)(param_2[3] * dVar2),(int)(param_2[2] * dVar1)));
        uVar14 = packssdw(CONCAT44((int)(param_2[5] * dVar2),(int)(param_2[4] * dVar1)),
                          CONCAT44((int)(param_2[7] * dVar2),(int)(param_2[6] * dVar1)));
        uVar11 = packsswb(uVar10,uVar14);
        uVar10 = psllw(0xffffffffffffffff,7);
        uVar13 = packsswb(uVar10,uVar10);
        *puVar9 = uVar11 ^ uVar13;
        puVar9 = puVar9 + 1;
        param_2 = param_2 + 8;
      }
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        uVar10 = CONCAT44((int)(param_2[1] * dVar2),(int)(*param_2 * dVar1));
        uVar10 = packssdw(uVar10,uVar10);
        uVar10 = packsswb(uVar10,uVar10);
        uVar14 = psllw(0xffffffffffffffff,7);
        uVar14 = packsswb(uVar14,uVar14);
        *(ushort *)puVar9 = (ushort)uVar10 ^ (ushort)uVar14;
        puVar9 = (ulonglong *)((int)puVar9 + 2);
        param_2 = param_2 + 2;
      }
    }
  }
  else {
    uVar6 = (int)param_3 / 2;
    local_10 = (int)param_3 % 2;
    if (uVar6 != 0) {
      dVar1 = (double)fVar12;
      dVar2 = (double)fVar12;
      uVar7 = uVar6 & 3;
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        uVar10 = packssdw(CONCAT44((int)(param_2[1] * dVar2),(int)(*param_2 * dVar1)),
                          CONCAT44((int)(param_2[3] * dVar2),(int)(param_2[2] * dVar1)));
        uVar14 = packssdw(CONCAT44((int)(param_2[5] * dVar2),(int)(param_2[4] * dVar1)),
                          CONCAT44((int)(param_2[7] * dVar2),(int)(param_2[6] * dVar1)));
        uVar11 = packsswb(uVar10,uVar14);
        uVar10 = psllw(0xffffffffffffffff,7);
        uVar13 = packsswb(uVar10,uVar10);
        *param_1 = uVar11 ^ uVar13;
        param_1 = param_1 + 1;
        param_2 = param_2 + 8;
      }
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        uVar10 = CONCAT44((int)(param_2[1] * dVar2),(int)(*param_2 * dVar1));
        uVar10 = packssdw(uVar10,uVar10);
        uVar10 = packsswb(uVar10,uVar10);
        uVar14 = psllw(0xffffffffffffffff,7);
        uVar14 = packsswb(uVar14,uVar14);
        *(ushort *)param_1 = (ushort)uVar10 ^ (ushort)uVar14;
        param_1 = (ulonglong *)((int)param_1 + 2);
        param_2 = param_2 + 2;
      }
    }
  }
  iVar8 = 0;
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
      *(byte *)((int)local_8 + iVar8 + uVar6 * 2) = bVar3;
      iVar8 = iVar8 + 1;
    } while (iVar8 < local_10);
  }
  return;
}


