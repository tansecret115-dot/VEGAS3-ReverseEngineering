/* Module: vegas30.exe
   Function: FUN_00569a70
   Address: 00569a70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00569a70(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00569a40();
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) & 0xfffff7ff;
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x800;
  return;
}


