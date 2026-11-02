/* Module: vegas30.exe
   Function: FUN_005c7d10
   Address: 005c7d10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005c7d10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_005c7af0(param_2,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  if ((((*(int *)(param_2 + 0x10) == *(int *)(param_1 + 0x68)) &&
       (*(int *)(param_2 + 0x18) == *(int *)(param_1 + 0x70))) &&
      (*(int *)(param_2 + 0x14) == *(int *)(param_1 + 0x6c))) &&
     (*(int *)(param_2 + 0x1c) == *(int *)(param_1 + 0x74))) {
    return 1;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    FUN_005b83b0(*(undefined4 *)(iVar1 + 8),1);
  }
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x14);
  iVar2 = *(int *)(param_1 + 0x3c) + 1;
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x1c);
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  *(int *)(param_1 + 0x3c) = iVar2;
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 0x200000;
    *(uint *)**(undefined4 **)(iVar1 + 8) = *(uint *)**(undefined4 **)(iVar1 + 8) | 0x2000;
    FUN_005b84d0(*(undefined4 *)(iVar1 + 8),1);
    *(uint *)**(undefined4 **)(iVar1 + 8) = *(uint *)**(undefined4 **)(iVar1 + 8) | 0x100;
    *(uint *)**(undefined4 **)(iVar1 + 8) = *(uint *)**(undefined4 **)(iVar1 + 8) | 0x100000;
  }
  return 0;
}


