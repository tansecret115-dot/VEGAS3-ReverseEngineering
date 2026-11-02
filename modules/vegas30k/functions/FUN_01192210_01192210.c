/* Module: vegas30k.dll
   Function: FUN_01192210
   Address: 01192210
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 __fastcall FUN_01192210(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint unaff_EBX;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  int iStack_14;
  uint local_10 [2];
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  if ((param_1[5] != 0) && (param_1[4] == 0)) {
    (**(code **)(**(int **)(param_1[3] + 0xc4) + 0xc))(*(int **)(param_1[3] + 0xc4),local_10);
    puVar3 = param_1 + 0x20a;
    iVar5 = 0x40;
    uVar6 = 0xffffffff;
    uVar7 = 0xffffffff;
    do {
      uVar4 = uVar6;
      uVar8 = local_10[0];
      if (puVar3[-4] != 0) {
        uVar2 = puVar3[-2] + *puVar3;
        uVar1 = puVar3[-1] + puVar3[1] + (uint)CARRY4(puVar3[-2],*puVar3);
        if ((((iStack_14 <= (int)uVar1) &&
             (((iStack_14 < (int)uVar1 || (unaff_EBX <= uVar2)) &&
              (uVar4 = uVar1, uVar8 = uVar2, (int)uVar6 <= (int)uVar1)))) &&
            ((((int)uVar6 < (int)uVar1 || (uVar7 <= uVar2)) &&
             (uVar4 = uVar6, uVar8 = local_10[0], (int)uVar6 < 1)))) &&
           (uVar4 = uVar1, uVar8 = uVar2, -1 < (int)uVar6)) {
          uVar4 = uVar6;
          uVar8 = local_10[0];
        }
      }
      local_10[0] = uVar8;
      puVar3 = puVar3 + 6;
      iVar5 = iVar5 + -1;
      uVar6 = uVar4;
      uVar7 = local_10[0];
    } while (iVar5 != 0);
    iVar5 = 0x40;
    do {
      uVar6 = uVar4;
      uVar7 = local_10[0];
      if (param_1[6] != 0) {
        uVar6 = param_1[9];
        uVar7 = param_1[8];
        if (((((int)uVar6 < iStack_14) || (((int)uVar6 <= iStack_14 && (uVar7 < unaff_EBX)))) ||
            ((int)uVar4 < (int)uVar6)) || (((int)uVar4 <= (int)uVar6 && (local_10[0] <= uVar7)))) {
          uVar8 = param_1[0xb];
          uVar1 = param_1[10];
          uVar9 = __allrem(unaff_EBX - uVar7,(iStack_14 - uVar6) - (uint)(unaff_EBX < uVar7),uVar1,
                           uVar8);
          uVar6 = uVar1 - (uint)uVar9;
          uVar2 = uVar6 + unaff_EBX;
          uVar8 = ((uVar8 - (int)((ulonglong)uVar9 >> 0x20)) - (uint)(uVar1 < (uint)uVar9)) +
                  iStack_14 + (uint)CARRY4(uVar6,unaff_EBX);
          uVar6 = uVar8;
          uVar7 = uVar2;
          if ((((int)uVar4 <= (int)uVar8) &&
              ((((int)uVar4 < (int)uVar8 || (local_10[0] <= uVar2)) &&
               (uVar6 = uVar4, uVar7 = local_10[0], (int)uVar4 < 1)))) &&
             (uVar6 = uVar8, uVar7 = uVar2, -1 < (int)uVar4)) {
            uVar6 = uVar4;
            uVar7 = local_10[0];
          }
        }
      }
      local_10[0] = uVar7;
      iVar5 = iVar5 + -1;
      uVar4 = uVar6;
      param_1 = param_1 + 8;
    } while (iVar5 != 0);
    return CONCAT44(uVar6,local_10[0]);
  }
  return 0xffffffffffffffff;
}


