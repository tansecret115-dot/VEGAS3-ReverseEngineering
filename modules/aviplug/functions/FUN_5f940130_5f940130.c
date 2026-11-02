/* Module: aviplug.dll
   Function: FUN_5f940130
   Address: 5f940130
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f940130(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x70) == 0) {
    iVar2 = *(int *)(param_1 + 0x34);
    iVar3 = *(int *)(iVar2 + 4);
    *(undefined4 *)(iVar3 + 0xc + iVar2) = 0;
    puVar1 = (undefined4 *)(iVar3 + 8 + iVar2);
    *puVar1 = param_2;
    puVar1[3] = param_3;
    if (param_5 == 0) {
      if (param_4 != 0) {
        puVar1[1] = 0x10;
      }
    }
    else {
      puVar1[1] = 1;
    }
    iVar2 = *(int *)(param_1 + 0x78);
    puVar1[2] = iVar2;
    puVar1[2] = (iVar2 - *(int *)(param_1 + 0x14)) + 4;
    *(int *)(*(int *)(param_1 + 0x34) + 4) = *(int *)(*(int *)(param_1 + 0x34) + 4) + 0x10;
    *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) | 2;
  }
  return;
}


