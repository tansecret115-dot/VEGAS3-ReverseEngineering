/* Module: rmbe3260.dll
   Function: FUN_66008b00
   Address: 66008b00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_66008b00(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_34 [3];
  int local_28;
  uint local_24;
  float local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_24 = 0;
  if (*(int *)(param_1 + 0x110) != 0) {
    uVar3 = 0;
    do {
      iVar1 = *(int *)(**(int **)(param_1 + 0x108) + uVar3 * 4);
      if (iVar1 != 0) {
        iVar2 = *(int *)(iVar1 + 0x2c);
        local_8 = 0;
        local_14 = 0;
        local_c = 0;
        local_18 = 0;
        local_1c = 0;
        local_20 = 0.0;
        if (iVar2 != 0) {
          local_8 = *(int *)(iVar2 + 8);
          local_18 = *(int *)(iVar2 + 0x30);
        }
        iVar2 = *(int *)(iVar1 + 0x30);
        if (iVar2 != 0) {
          local_14 = *(int *)(iVar2 + 8);
          local_c = *(int *)(iVar2 + 0x2c);
          local_1c = *(int *)(iVar2 + 0x34);
        }
        local_28 = *(int *)(iVar1 + 8);
        if (0 < local_28) {
          local_20 = (float)local_1c * ((float)local_14 / (float)local_28) +
                     (float)local_18 * ((float)local_8 / (float)local_28);
        }
        local_10 = local_8;
        FUN_6605b650(local_34);
        if (*(int *)(param_1 + 0x198) != 0) {
          (**(code **)(**(int **)(*(int *)(param_1 + 0x10c) + *(int *)(param_1 + 0x114) * uVar3 * 4)
                      + 0x11c))(*(undefined4 *)(iVar1 + 0x34));
        }
        local_28 = local_c + local_8;
        FUN_6605bfd0(local_34,s___1f_Kbps_6606c31c);
        (**(code **)(**(int **)(*(int *)(param_1 + 0x10c) + 4 +
                               uVar3 * *(int *)(param_1 + 0x114) * 4) + 0x11c))(local_34[0]);
        if (local_8 < 1) {
          FUN_6605b970(local_34,PTR_s___6606c30c);
        }
        else {
          FUN_6605bfd0(local_34,s___1f_Kbps_6606c31c);
        }
        (**(code **)(**(int **)(*(int *)(param_1 + 0x10c) + 0xc +
                               uVar3 * *(int *)(param_1 + 0x114) * 4) + 0x11c))(local_34[0]);
        FUN_6605bfd0(local_34,s___1f_Kbps_6606c31c);
        (**(code **)(**(int **)(*(int *)(param_1 + 0x10c) + 8 +
                               uVar3 * *(int *)(param_1 + 0x114) * 4) + 0x11c))(local_34[0]);
        if (*(int *)(iVar1 + 0x30) == 0) {
          FUN_6605b970(local_34,PTR_s___6606c30c);
        }
        else {
          FUN_6605bfd0(local_34,s___1f_fps_6606c3a8);
        }
        (**(code **)(**(int **)(*(int *)(param_1 + 0x10c) + 0x10 +
                               uVar3 * *(int *)(param_1 + 0x114) * 4) + 0x11c))(local_34[0]);
        FUN_6605bfd0(local_34,s___1f_sec_6606c39c);
        (**(code **)(**(int **)(*(int *)(param_1 + 0x10c) + 0x14 +
                               uVar3 * *(int *)(param_1 + 0x114) * 4) + 0x11c))(local_34[0]);
        FUN_6605b770(local_34);
      }
      local_24 = local_24 + 1;
      uVar3 = local_24 & 0xffff;
    } while (uVar3 < *(uint *)(param_1 + 0x110));
  }
  return;
}


