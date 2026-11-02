/* Module: vegas30.exe
   Function: FUN_004c4080
   Address: 004c4080
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c4080(int param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  bool bVar6;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  uVar2 = *(undefined4 *)(param_1 + 0xbc8);
  puVar4 = (uint *)FUN_005b87b0(uVar2);
  if (puVar4 == (uint *)0x0) {
    local_10 = 0;
  }
  else {
    local_10 = *puVar4;
  }
  local_8 = 0;
  if (local_10 != 0) {
    do {
      iVar3 = *(int *)(puVar4[2] + local_8 * 4);
      if (*(int *)(iVar3 + 4) == 2) {
        FUN_005b83b0(uVar2,1);
        iVar1 = iVar3 + 0x638;
        iVar5 = FUN_0047c7d0(iVar1,param_2 + 0x40);
        bVar6 = iVar5 != 0;
        if (bVar6) {
          FUN_004eaed0(uVar2,iVar3,0,0x1e);
          FUN_0047c810(iVar1,param_2 + 0x40);
        }
        if (param_2 + 1U < param_3) {
          local_14 = param_2 + 0x41;
          local_c = param_3 - (param_2 + 1U);
          do {
            iVar5 = FUN_0047c7d0(iVar1,local_14);
            if (iVar5 != 0) {
              if (!bVar6) {
                FUN_004eaed0(uVar2,iVar3,0,0x1e);
                bVar6 = true;
              }
              *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + -1;
            }
            local_14 = local_14 + 1;
            local_c = local_c + -1;
          } while (local_c != 0);
        }
        FUN_005b84d0(uVar2,1);
      }
      local_8 = local_8 + 1;
    } while (local_8 < local_10);
  }
  return;
}


