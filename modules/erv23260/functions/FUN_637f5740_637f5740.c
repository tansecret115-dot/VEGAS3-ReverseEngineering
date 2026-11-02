/* Module: erv23260.dll
   Function: FUN_637f5740
   Address: 637f5740
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_637f5740(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int local_8;
  
  iVar6 = 0;
  uVar1 = *(uint *)(param_1 + 0x9c);
  local_8 = 0;
  if ((uVar1 & 4) == 0) {
    do {
      uVar2 = (uint)*(byte *)(iVar6 + *(int *)(param_1 + 0xa4));
      uVar3 = (uint)*(byte *)(iVar6 + (*(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0x1c)));
      iVar4 = uVar2 - uVar3;
      if (iVar4 < 0) {
        iVar4 = uVar3 - uVar2;
      }
      local_8 = local_8 + iVar4;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x10);
  }
  if ((uVar1 & 8) == 0) {
    iVar4 = *(int *)(param_1 + 0xa4) + *(int *)(param_1 + 0x1c) * 0x10;
    iVar6 = 0x10;
    pbVar7 = (byte *)(iVar4 - *(int *)(param_1 + 0x1c));
    iVar4 = iVar4 - (int)pbVar7;
    do {
      iVar5 = (uint)*pbVar7 - (uint)pbVar7[iVar4];
      if (iVar5 < 0) {
        iVar5 = (uint)pbVar7[iVar4] - (uint)*pbVar7;
      }
      local_8 = local_8 + iVar5;
      pbVar7 = pbVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if ((uVar1 & 1) == 0) {
    pbVar7 = *(byte **)(param_1 + 0xa4);
    iVar6 = 0x10;
    do {
      iVar4 = (uint)*pbVar7 - (uint)pbVar7[-1];
      if (iVar4 < 0) {
        iVar4 = (uint)pbVar7[-1] - (uint)*pbVar7;
      }
      pbVar7 = pbVar7 + *(int *)(param_1 + 0x1c);
      local_8 = local_8 + iVar4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if ((uVar1 & 2) == 0) {
    pbVar7 = (byte *)(*(int *)(param_1 + 0xa4) + 0x10);
    iVar6 = 0x10;
    do {
      iVar4 = (uint)pbVar7[-1] - (uint)*pbVar7;
      if (iVar4 < 0) {
        iVar4 = (uint)*pbVar7 - (uint)pbVar7[-1];
      }
      pbVar7 = pbVar7 + *(int *)(param_1 + 0x1c);
      local_8 = local_8 + iVar4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return local_8;
}


