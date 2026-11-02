/* Module: vidcap30.exe
   Function: FUN_0050d410
   Address: 0050d410
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0050d410(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int local_8;
  int local_4;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    FUN_0050a8d0(param_1,param_2,&local_8);
    *(int *)(param_1 + 0x40) = local_8;
    *(int *)(param_1 + 0x44) = local_4;
    iVar2 = FUN_0050aa00(param_1,param_2);
    uVar3 = *(uint *)(param_1 + 0xa8);
    iVar1 = *(int *)(param_1 + 0x2c);
    if ((int)((uVar3 - 1) * iVar2 + uVar3 * local_4) < iVar1) {
      uVar4 = (iVar1 - (uVar3 - 1) * iVar2) / uVar3;
      *(uint *)(param_1 + 0x34) = uVar4;
      uVar4 = (iVar1 - (uVar4 + iVar2) * (uVar3 - 1)) - uVar4;
    }
    else {
      uVar3 = uVar3 - 1;
      uVar4 = ((iVar1 - uVar3 * iVar2) - local_4) / uVar3;
      *(uint *)(param_1 + 0x34) = uVar4;
      uVar4 = (iVar1 - (uVar4 + iVar2) * uVar3) - local_4;
    }
    *(uint *)(param_1 + 0xc4) = uVar4 >> 1;
    uVar3 = *(uint *)(param_1 + 0x34);
    local_8 = local_4;
  }
  else {
    FUN_0050a8d0(param_1,param_2,&local_8);
    *(int *)(param_1 + 0x40) = local_8;
    *(int *)(param_1 + 0x44) = local_4;
    iVar2 = FUN_0050aa00(param_1,param_2);
    iVar1 = *(int *)(param_1 + 0x28);
    uVar4 = *(uint *)(param_1 + 0xa8);
    *(int *)(param_1 + 0x30) = iVar1;
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x2c);
    if ((int)((uVar4 - 1) * iVar2 + uVar4 * local_8) < iVar1) {
      uVar3 = (iVar1 - (uVar4 - 1) * iVar2) / uVar4;
      *(uint *)(param_1 + 0x30) = uVar3;
      *(uint *)(param_1 + 0xc4) = (iVar1 - (uVar3 + iVar2) * (uVar4 - 1)) - uVar3 >> 1;
    }
    else {
      uVar4 = uVar4 - 1;
      uVar3 = ((iVar1 - uVar4 * iVar2) - local_8) / uVar4;
      *(uint *)(param_1 + 0x30) = uVar3;
      *(uint *)(param_1 + 0xc4) = (iVar1 - (uVar3 + iVar2) * uVar4) - local_8 >> 1;
      uVar3 = *(uint *)(param_1 + 0x30);
    }
  }
  *(int *)(param_1 + 0xc0) = (int)(local_8 - uVar3) / 2;
  *(uint *)(param_1 + 200) = uVar3 + iVar2;
  return;
}


