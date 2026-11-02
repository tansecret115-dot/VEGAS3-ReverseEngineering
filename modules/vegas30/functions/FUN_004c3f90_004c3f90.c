/* Module: vegas30.exe
   Function: FUN_004c3f90
   Address: 004c3f90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c3f90(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint local_c;
  uint local_8;
  
  uVar2 = *(undefined4 *)(param_1 + 0xbc8);
  puVar5 = (uint *)FUN_005b87b0(uVar2);
  if (puVar5 == (uint *)0x0) {
    local_c = 0;
  }
  else {
    local_c = *puVar5;
  }
  local_8 = 0;
  if (local_c != 0) {
    do {
      iVar3 = *(int *)(puVar5[2] + local_8 * 4);
      if (*(int *)(iVar3 + 4) == 2) {
        FUN_005b83b0(uVar2,1);
        iVar1 = iVar3 + 0x638;
        iVar6 = FUN_0047c7d0(iVar1,param_2 + 2);
        uVar4 = param_2;
        if (iVar6 != 0) {
          FUN_004eaad0(uVar2,iVar3,0x1e,0);
          FUN_0047c810(iVar1,param_2 + 2);
        }
        for (; uVar4 < param_3; uVar4 = uVar4 + 1) {
          iVar6 = FUN_0047c7d0(iVar1,uVar4 + 3);
          if (iVar6 != 0) {
            FUN_004eaad0(uVar2,iVar3,0x1e,0);
            *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + -1;
          }
        }
        FUN_005b84d0(uVar2,1);
      }
      local_8 = local_8 + 1;
    } while (local_8 < local_c);
  }
  return;
}


