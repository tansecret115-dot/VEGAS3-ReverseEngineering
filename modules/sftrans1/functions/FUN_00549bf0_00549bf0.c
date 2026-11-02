/* Module: sftrans1.dll
   Function: FUN_00549bf0
   Address: 00549bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00549bf0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  double *pdVar9;
  float10 fVar10;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  undefined4 uVar11;
  undefined4 uVar12;
  int *local_b4;
  double local_a0;
  double local_90;
  uint local_50;
  double local_48 [4];
  double local_28;
  double local_20;
  double local_18;
  undefined8 local_10;
  
  if (*(int *)(param_1 + 0x1cc) == 0) {
    if ((*(char *)(param_4 + 0x61) != '\0') || (*(char *)(param_5 + 0x39) != '\0')) {
      uVar4 = ftol();
      uVar5 = ftol();
      uVar11 = ftol();
      uVar12 = 1;
      uVar2 = uVar11;
      uVar3 = uVar4;
      uVar6 = ftol(uVar11,uVar4,1);
      FUN_0054a9e0(param_2,param_3,uVar11,uVar6,uVar2,uVar3,uVar12);
      uVar11 = ftol();
      uVar12 = 1;
      uVar2 = uVar11;
      uVar3 = uVar5;
      uVar6 = ftol(uVar4,uVar11,uVar5,1);
      FUN_0054a9e0(param_2,param_3,uVar6,uVar4,uVar2,uVar3,uVar12);
      uVar3 = 1;
      uVar2 = ftol(1);
      FUN_0054a9e0(param_2,param_3,uVar11,uVar5,uVar11,uVar2,uVar3);
      return;
    }
    local_28 = *(double *)(param_4 + 8);
    local_20 = *(double *)(param_4 + 8) + *(double *)(param_4 + 0x58);
    local_18 = *(double *)(param_5 + 8) + *(double *)(param_5 + 0x30);
    local_10 = *(undefined8 *)(param_5 + 8);
    ftol();
    ftol();
    ftol();
    ftol();
    local_50 = ftol();
    local_50 = local_50 >> 1;
    if (local_50 < 3) {
      local_50 = 3;
    }
    uVar7 = 0;
    do {
      do {
        if (local_50 <= uVar7) {
          return;
        }
        uVar7 = uVar7 + 1;
        uVar8 = 3;
        local_90 = 0.0;
        local_a0 = 0.0;
        local_b4 = &DAT_00577204;
        pdVar9 = &local_28;
        do {
          iVar1 = *local_b4;
          _CIpow();
          fVar10 = (float10)_CIpow();
          local_90 = (double)(fVar10 * extraout_ST1 * (float10)iVar1 * (float10)pdVar9[-4] +
                             (float10)local_90);
          _CIpow();
          fVar10 = (float10)_CIpow();
          uVar8 = uVar8 - 1;
          local_b4 = local_b4 + 1;
          local_a0 = (double)(fVar10 * extraout_ST1_00 * (float10)iVar1 * (float10)pdVar9[-4] +
                             (float10)local_a0);
          pdVar9 = pdVar9 + 1;
        } while (uVar8 < 0x80000000);
      } while (local_a0 < *(double *)(param_1 + 0xa8));
      uVar11 = 1;
      uVar2 = ftol(1);
      uVar3 = ftol(uVar2);
      uVar4 = ftol(uVar3);
      uVar5 = ftol(uVar4);
      FUN_0054a9e0(param_2,param_3,uVar5,uVar4,uVar3,uVar2,uVar11);
    } while (local_90 <= *(double *)(param_1 + 0xb0) + *(double *)(param_1 + 0xa8));
  }
  else {
    uVar11 = 1;
    uVar2 = ftol(1);
    uVar3 = ftol(uVar2);
    uVar4 = ftol(uVar3);
    uVar5 = ftol(uVar4);
    FUN_0054a9e0(param_2,param_3,uVar5,uVar4,uVar3,uVar2,uVar11);
  }
  return;
}


