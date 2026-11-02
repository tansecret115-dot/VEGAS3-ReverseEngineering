/* Module: sftrkfx1.dll
   Function: FUN_5cbeac80
   Address: 5cbeac80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cbeac80(undefined8 *param_1,double *param_2,uint param_3,float param_4)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  double *pdVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  float10 fVar11;
  float10 extraout_ST0;
  undefined8 uVar12;
  uint local_c;
  undefined8 *local_8;
  
  uVar3 = param_3;
  fVar11 = (float10)param_4 * (float10)_DAT_5cc04268;
  local_8 = param_1;
  if (((uint)param_2 & 7) == 0) {
    uVar5 = (uint)(((uint)param_2 & 0xf) != 0);
    if ((int)uVar5 < (int)param_3) {
      uVar3 = (int)(param_3 - uVar5) / 2;
      param_4 = (float)((param_3 + uVar3 * -2) - uVar5);
      param_3 = uVar3;
    }
    else {
      param_4 = 0.0;
      param_3 = 0;
      uVar5 = uVar3;
    }
    puVar9 = param_1;
    local_c = uVar5;
    if (0 < (int)uVar5) {
      do {
        iVar4 = ftol();
        if (iVar4 < -0x8000) {
          iVar4 = -0x8000;
        }
        else if (0x7fff < iVar4) {
          iVar4 = 0x7fff;
        }
        *(short *)puVar9 = (short)iVar4;
        local_c = local_c - 1;
        puVar9 = (undefined8 *)((int)puVar9 + 2);
        fVar11 = extraout_ST0;
      } while (local_c != 0);
    }
    local_8 = (undefined8 *)((int)param_1 + uVar5 * 2);
    pdVar7 = param_2 + uVar5;
    uVar3 = param_3;
    if (param_3 != 0) {
      dVar1 = (double)fVar11;
      dVar2 = (double)fVar11;
      uVar6 = param_3 & 3;
      puVar9 = local_8;
      for (uVar5 = param_3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        uVar10 = packssdw(CONCAT44((int)(pdVar7[1] * dVar2),(int)(*pdVar7 * dVar1)),
                          CONCAT44((int)(pdVar7[3] * dVar2),(int)(pdVar7[2] * dVar1)));
        uVar12 = packssdw(CONCAT44((int)(pdVar7[5] * dVar2),(int)(pdVar7[4] * dVar1)),
                          CONCAT44((int)(pdVar7[7] * dVar2),(int)(pdVar7[6] * dVar1)));
        *puVar9 = uVar10;
        puVar9[1] = uVar12;
        puVar9 = puVar9 + 2;
        pdVar7 = pdVar7 + 8;
      }
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        uVar10 = CONCAT44((int)(pdVar7[1] * dVar2),(int)(*pdVar7 * dVar1));
        uVar10 = packssdw(uVar10,uVar10);
        *(int *)puVar9 = (int)uVar10;
        puVar9 = (undefined8 *)((int)puVar9 + 4);
        pdVar7 = pdVar7 + 2;
      }
    }
  }
  else {
    uVar3 = (int)param_3 / 2;
    param_4 = (float)((int)param_3 % 2);
    if (uVar3 != 0) {
      dVar1 = (double)fVar11;
      dVar2 = (double)fVar11;
      uVar6 = uVar3 & 3;
      for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        uVar10 = packssdw(CONCAT44((int)(param_2[1] * dVar2),(int)(*param_2 * dVar1)),
                          CONCAT44((int)(param_2[3] * dVar2),(int)(param_2[2] * dVar1)));
        uVar12 = packssdw(CONCAT44((int)(param_2[5] * dVar2),(int)(param_2[4] * dVar1)),
                          CONCAT44((int)(param_2[7] * dVar2),(int)(param_2[6] * dVar1)));
        *param_1 = uVar10;
        param_1[1] = uVar12;
        param_1 = param_1 + 2;
        param_2 = param_2 + 8;
      }
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        uVar10 = CONCAT44((int)(param_2[1] * dVar2),(int)(*param_2 * dVar1));
        uVar10 = packssdw(uVar10,uVar10);
        *(int *)param_1 = (int)uVar10;
        param_1 = (undefined8 *)((int)param_1 + 4);
        param_2 = param_2 + 2;
      }
    }
  }
  puVar8 = (undefined4 *)((int)local_8 + uVar3 * 4);
  if (0 < (int)param_4) {
    do {
      iVar4 = ftol();
      if (iVar4 < -0x8000) {
        iVar4 = -0x8000;
      }
      else if (0x7fff < iVar4) {
        iVar4 = 0x7fff;
      }
      *(short *)puVar8 = (short)iVar4;
      puVar8 = (undefined4 *)((int)puVar8 + 2);
      param_4 = (float)((int)param_4 + -1);
    } while (param_4 != 0.0);
  }
  return;
}


