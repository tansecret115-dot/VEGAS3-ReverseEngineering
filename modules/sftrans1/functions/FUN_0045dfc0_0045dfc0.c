/* Module: sftrans1.dll
   Function: FUN_0045dfc0
   Address: 0045dfc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0045dfc0(int param_1,int param_2)

{
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - *(int *)(param_2 + 8);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - *(int *)(param_2 + 8);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - *(int *)(param_2 + 0xc);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - *(int *)(param_2 + 0xc);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - *(int *)(param_2 + 0x10);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) - *(int *)(param_2 + 0x10);
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - *(int *)(param_2 + 0x14);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - *(int *)(param_2 + 0x14);
  return;
}


