/* Module: aviplug.dll
   Function: FUN_5f9429d0
   Address: 5f9429d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f9429d0(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = param_2;
  iVar3 = FUN_5f941c30((int)param_2,&param_2);
  if (-1 < iVar3) {
    param_2[2] = 6;
    param_2[4] = *(undefined4 *)(param_1 + 4);
    param_2[5] = param_1;
    param_2[6] = *(undefined4 *)(param_1 + 0x20);
    param_2[7] = *(undefined4 *)(param_1 + 0x24);
    param_2[8] = 1;
    InterlockedIncrement((LONG *)(param_1 + 0x50));
    InterlockedIncrement((LONG *)(param_1 + 0xf0));
    FUN_5f98fe00(puVar2 + 8,param_2);
    uVar1 = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x20) = uVar1 + 1;
    *(uint *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + (uint)(0xfffffffe < uVar1);
    return iVar3;
  }
  return iVar3;
}


