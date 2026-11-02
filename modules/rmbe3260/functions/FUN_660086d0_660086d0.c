/* Module: rmbe3260.dll
   Function: FUN_660086d0
   Address: 660086d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_660086d0(int param_1)

{
  int iVar1;
  uint uVar2;
  int local_14 [3];
  uint local_8;
  
  uVar2 = 0;
  local_8 = 0;
  if (*(int *)(param_1 + 0x110) != 0) {
    do {
      iVar1 = *(int *)(**(int **)(param_1 + 0x108) + uVar2 * 4);
      if (iVar1 != 0) {
        FUN_6605b650(local_14);
        if (*(int *)(param_1 + 0x198) != 0) {
          (**(code **)(**(int **)(*(int *)(param_1 + 0x10c) + *(int *)(param_1 + 0x114) * uVar2 * 4)
                      + 0x11c))(*(undefined4 *)(iVar1 + 0x20));
        }
        FUN_6605bfd0(local_14,s___1f_Kbps_6606c31c);
        (**(code **)(**(int **)(*(int *)(param_1 + 0x10c) + 4 +
                               uVar2 * *(int *)(param_1 + 0x114) * 4) + 0x11c))(local_14[0]);
        FUN_6605bfd0(local_14,s___1f_fps_6606c3a8);
        (**(code **)(**(int **)(*(int *)(param_1 + 0x10c) + 8 +
                               uVar2 * *(int *)(param_1 + 0x114) * 4) + 0x11c))(local_14[0]);
        FUN_6605bfd0(local_14,&DAT_6606c2f8);
        (**(code **)(**(int **)(*(int *)(param_1 + 0x10c) + 0xc +
                               uVar2 * *(int *)(param_1 + 0x114) * 4) + 0x11c))(local_14[0]);
        FUN_6605bfd0(local_14,&DAT_6606c334);
        (**(code **)(**(int **)(*(int *)(param_1 + 0x10c) + 0x10 +
                               uVar2 * *(int *)(param_1 + 0x114) * 4) + 0x11c))(local_14[0]);
        FUN_6605b770(local_14);
      }
      local_8 = local_8 + 1;
      uVar2 = local_8 & 0xffff;
    } while (uVar2 < *(uint *)(param_1 + 0x110));
  }
  return;
}


