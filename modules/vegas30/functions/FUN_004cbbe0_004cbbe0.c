/* Module: vegas30.exe
   Function: FUN_004cbbe0
   Address: 004cbbe0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004cbbe0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  HMENU hmenu;
  int iVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint *puVar8;
  undefined4 local_1c;
  int *local_18;
  int local_14;
  int local_c;
  
  local_1c = 0x80070057;
  iVar2 = *(int *)(param_1 + 0xce4);
  iVar5 = *(int *)(*(int *)(*(int *)(iVar2 + 0x69c) + 0x54) + 0x248);
  if ((iVar5 < 0x200) || (0x2ff < iVar5)) {
    if ((iVar5 < 0x100) || (0x1ff < iVar5)) {
      if (iVar5 != 2) {
        return 0x80070057;
      }
      uVar6 = FUN_004cb9c0(param_1,param_2,param_3);
      return uVar6;
    }
    iVar5 = iVar5 * 8;
    local_14 = iVar5 + -0x800;
    puVar7 = (uint *)(iVar5 + -0x6a4 + iVar2);
    *puVar7 = *(uint *)(iVar5 + -0x6a4 + iVar2) | 1;
  }
  else {
    local_14 = iVar5 * 8 + -0x1000;
    puVar7 = (uint *)(iVar5 * 8 + -0xfa4 + iVar2);
    *puVar7 = *puVar7 | 2;
  }
  if (puVar7 != (uint *)0x0) {
    hmenu = (HMENU)FUN_004047d0(0x333,0);
    CheckMenuRadioItem(hmenu,0xa7b6,0xa7b7,(*puVar7 & 4 | 0x29ed8) >> 2,0);
    iVar5 = FUN_00404830(*(undefined4 *)(param_1 + 4),hmenu,&param_2,2);
    local_1c = 1;
    if (iVar5 != 0) {
      if ((*(byte *)(iVar2 + 0x10) & 0x10) == 0) {
        if ((*puVar7 >> 2 & 1) != (uint)(iVar5 == 0xa7b7)) {
          FUN_004e9f70(*(undefined4 *)(param_1 + 0xbc8),((*puVar7 & 1) != 0) + 'O',0);
          FUN_004ea250(*(undefined4 *)(param_1 + 0xbc8),iVar2,0xe,0);
          *puVar7 = (uint)(iVar5 == 0xa7b7) << 2 | *puVar7 & 0xfffffffb;
          FUN_004eb2b0(*(undefined4 *)(param_1 + 0xbc8));
          FUN_004ea040(*(undefined4 *)(param_1 + 0xbc8),0);
          return 0;
        }
      }
      else {
        if (*(int *)(param_1 + 0xbc8) == 0) {
          local_18 = (int *)0x0;
        }
        else {
          local_18 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
        }
        bVar4 = false;
        local_c = 0;
        iVar2 = *local_18;
        if (0 < iVar2) {
          do {
            iVar3 = *(int *)(local_18[2] + local_c * 4);
            if ((*(byte *)(iVar3 + 0x10) & 0x10) != 0) {
              iVar1 = local_14 + 0x15c;
              if ((*puVar7 & 1) == 0) {
                iVar1 = local_14 + 0x5c;
              }
              puVar8 = (uint *)(iVar1 + iVar3);
              if ((*puVar8 >> 2 & 1) != (uint)(iVar5 == 0xa7b7)) {
                if (!bVar4) {
                  FUN_004e9f70(*(undefined4 *)(param_1 + 0xbc8),((*puVar7 & 1) != 0) + 'O',0);
                  bVar4 = true;
                  local_1c = 0;
                }
                FUN_004ea250(*(undefined4 *)(param_1 + 0xbc8),iVar3,0xe,0);
                *puVar8 = (uint)(iVar5 == 0xa7b7) << 2 | *puVar8 & 0xfffffffb;
              }
            }
            local_c = local_c + 1;
          } while (local_c < iVar2);
          if (bVar4) {
            FUN_004eb2b0(*(undefined4 *)(param_1 + 0xbc8));
            FUN_004ea040(*(undefined4 *)(param_1 + 0xbc8),0);
          }
        }
      }
    }
  }
  return local_1c;
}


