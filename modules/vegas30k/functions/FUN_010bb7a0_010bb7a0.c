/* Module: vegas30k.dll
   Function: FUN_010bb7a0
   Address: 010bb7a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010bb7a0(undefined8 *param_1,double *param_2,uint param_3,float param_4)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  float10 fVar10;
  float10 extraout_ST0;
  undefined8 uVar11;
  uint local_c;
  undefined8 *local_8;
  
  uVar3 = param_3;
  fVar10 = (float10)param_4 * (float10)_DAT_011db288;
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
    puVar8 = param_1;
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
        *(short *)puVar8 = (short)iVar4;
        local_c = local_c - 1;
        puVar8 = (undefined8 *)((int)puVar8 + 2);
        fVar10 = extraout_ST0;
      } while (local_c != 0);
    }
    local_8 = (undefined8 *)((int)param_1 + uVar5 * 2);
    param_2 = param_2 + uVar5;
    uVar3 = param_3;
    if (param_3 != 0) {
      dVar1 = (double)fVar10;
      dVar2 = (double)fVar10;
      uVar5 = param_3 & 3;
      puVar8 = local_8;
      for (param_3 = param_3 >> 2; param_3 != 0; param_3 = param_3 - 1) {
        uVar9 = packssdw(CONCAT44((int)(param_2[1] * dVar2),(int)(*param_2 * dVar1)),
                         CONCAT44((int)(param_2[3] * dVar2),(int)(param_2[2] * dVar1)));
        uVar11 = packssdw(CONCAT44((int)(param_2[5] * dVar2),(int)(param_2[4] * dVar1)),
                          CONCAT44((int)(param_2[7] * dVar2),(int)(param_2[6] * dVar1)));
        *puVar8 = uVar9;
        puVar8[1] = uVar11;
        puVar8 = puVar8 + 2;
        param_2 = param_2 + 8;
      }
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        uVar9 = CONCAT44((int)(param_2[1] * dVar2),(int)(*param_2 * dVar1));
        uVar9 = packssdw(uVar9,uVar9);
        *(int *)puVar8 = (int)uVar9;
        puVar8 = (undefined8 *)((int)puVar8 + 4);
        param_2 = param_2 + 2;
      }
    }
  }
  else {
    uVar3 = (int)param_3 / 2;
    param_4 = (float)((int)param_3 % 2);
    if (uVar3 != 0) {
      dVar1 = (double)fVar10;
      dVar2 = (double)fVar10;
      uVar6 = uVar3 & 3;
      for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        uVar9 = packssdw(CONCAT44((int)(param_2[1] * dVar2),(int)(*param_2 * dVar1)),
                         CONCAT44((int)(param_2[3] * dVar2),(int)(param_2[2] * dVar1)));
        uVar11 = packssdw(CONCAT44((int)(param_2[5] * dVar2),(int)(param_2[4] * dVar1)),
                          CONCAT44((int)(param_2[7] * dVar2),(int)(param_2[6] * dVar1)));
        *param_1 = uVar9;
        param_1[1] = uVar11;
        param_1 = param_1 + 2;
        param_2 = param_2 + 8;
      }
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        uVar9 = CONCAT44((int)(param_2[1] * dVar2),(int)(*param_2 * dVar1));
        uVar9 = packssdw(uVar9,uVar9);
        *(int *)param_1 = (int)uVar9;
        param_1 = (undefined8 *)((int)param_1 + 4);
        param_2 = param_2 + 2;
      }
    }
  }
  puVar7 = (undefined4 *)((int)local_8 + uVar3 * 4);
  if (0 < (int)param_4) {
    do {
      iVar4 = ftol();
      if (iVar4 < -0x8000) {
        iVar4 = -0x8000;
      }
      else if (0x7fff < iVar4) {
        iVar4 = 0x7fff;
      }
      *(short *)puVar7 = (short)iVar4;
      puVar7 = (undefined4 *)((int)puVar7 + 2);
      param_4 = (float)((int)param_4 + -1);
    } while (param_4 != 0.0);
  }
  return;
}


