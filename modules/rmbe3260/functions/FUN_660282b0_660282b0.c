/* Module: rmbe3260.dll
   Function: FUN_660282b0
   Address: 660282b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_660282b0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_14 = 0;
  local_24 = 0;
  if (0 < *(int *)(param_1 + 0x58)) {
    do {
      local_10 = *(undefined4 **)(*(int *)(param_1 + 0x54) + local_24 * 4);
      if ((local_10[0xf] != 0) &&
         (FUN_6603bfa0((int *)*local_10,&local_28,&local_18,&local_8), local_28 != 0)) {
        piVar3 = (int *)FUN_66016be0();
        local_8 = (*(int *)(param_1 + 0xb4) * *(int *)(param_1 + 0xb8) * 3 & 0x3fffffffU) >> 1;
        piVar1 = piVar3 + 4;
        local_1c = piVar3;
        (**(code **)(piVar3[4] + 0xc))(piVar1,local_18,local_8,*(undefined4 *)(param_1 + 0x2c),0);
        (**(code **)(*piVar3 + 4))(piVar3);
        local_20 = 0;
        iVar4 = local_10[5];
        if (0 < *(int *)((iVar4 + 0xc) * 0x10 + param_1)) {
          do {
            puVar7 = *(undefined4 **)(*(int *)(iVar4 * 0x10 + 0xbc + param_1) + local_20 * 4);
            uVar2 = puVar7[4];
            local_c = puVar7;
            if (uVar2 == 0xffffff) {
LAB_6602839a:
              iVar4 = puVar7[1];
              if ((iVar4 == 0) || (iVar4 == 4)) {
                piVar6 = (int *)FUN_66016be0();
                if (puVar7[1] == 4) {
                  local_8 = (*(int *)(param_1 + 0xb4) * 0x20 + 0x1fU >> 3 & 0x1ffffffc) *
                            *(int *)(param_1 + 0xb8);
                }
                else {
                  local_8 = (*(int *)(param_1 + 0xb4) * 0x18 + 0x1fU >> 3 & 0x1ffffffc) *
                            *(int *)(param_1 + 0xb8);
                }
                (**(code **)(piVar6[4] + 0xc))
                          (piVar6 + 4,*(undefined4 *)(param_1 + 0x1f0),
                           *(undefined4 *)(param_1 + 500),*(undefined4 *)(param_1 + 0x2c),0);
                (**(code **)(*piVar6 + 4))(piVar6);
                (**(code **)(**(int **)(param_1 + 0x1e8) + 0x4c))
                          (*(int **)(param_1 + 0x1e8),local_18,*(undefined4 *)(param_1 + 0x1f0));
                local_14 = (**(code **)(*(int *)*local_c + 0xc))
                                     ((int *)*local_c,
                                      -(uint)(piVar6 != (int *)0x0) & (uint)(piVar6 + 4));
                puVar7 = local_c;
                piVar3 = local_1c;
                if (piVar6 != (int *)0x0) {
                  (**(code **)(*piVar6 + 8))(piVar6);
                  puVar7 = local_c;
                  piVar3 = local_1c;
                }
              }
              else if (iVar4 == 5) {
                local_14 = (**(code **)(*(int *)*puVar7 + 0xc))
                                     ((int *)*puVar7,-(uint)(piVar3 != (int *)0x0) & (uint)piVar1);
              }
              puVar7[4] = *(undefined4 *)(param_1 + 0x2c);
            }
            else {
              uVar5 = *(uint *)(param_1 + 0x2c);
              if (uVar5 < uVar2) {
                uVar5 = (uVar5 - uVar2) - 1;
              }
              else {
                uVar5 = uVar5 - uVar2;
              }
              if ((uVar2 == 0xffffff) || ((uint)puVar7[2] <= uVar5)) goto LAB_6602839a;
            }
            local_20 = local_20 + 1;
            iVar4 = local_10[5];
          } while (local_20 < *(int *)((iVar4 + 0xc) * 0x10 + param_1));
        }
        local_10[0xf] = 0;
        local_10[0x10] = 0;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
        }
      }
      local_24 = local_24 + 1;
    } while (local_24 < *(int *)(param_1 + 0x58));
  }
  return local_14;
}


