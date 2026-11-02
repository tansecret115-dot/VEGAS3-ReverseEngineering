/* Module: vegas30k.dll
   Function: FUN_0118e130
   Address: 0118e130
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0118e130(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(byte *)(param_1 + 0xc) & 2) != 0) {
    (**(code **)(**(int **)(param_1 + 0x18) + 0x3c))(*(int **)(param_1 + 0x18));
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffff7;
    uVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x34))(*(int **)(param_1 + 0x18));
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffd;
  }
  return uVar1;
}


