/* Module: vegas30k.dll
   Function: FUN_011c1160
   Address: 011c1160
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011c1160(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffb | 2;
  SetEvent(*(HANDLE *)(param_1 + 0x138));
  if (*(int **)(param_1 + 0x140) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x140) + 0x1c))(param_2,param_3);
    uVar1 = (**(code **)(**(int **)(param_1 + 0x140) + 0x10))();
    return uVar1;
  }
  return 0;
}


