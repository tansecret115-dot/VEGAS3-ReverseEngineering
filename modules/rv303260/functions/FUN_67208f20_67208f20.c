/* Module: rv303260.dll
   Function: FUN_67208f20
   Address: 67208f20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_67208f20(int param_1)

{
  if (*(int *)(param_1 + 0xc6) == 0x59555632) {
    FUN_672088c0((void *)(param_1 + 0x32),&stack0x00000004);
    return;
  }
  FUN_672088a0((void *)(param_1 + 0x32),&stack0x00000004);
  return;
}


