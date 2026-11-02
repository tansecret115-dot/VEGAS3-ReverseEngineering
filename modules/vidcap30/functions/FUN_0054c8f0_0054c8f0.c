/* Module: vidcap30.exe
   Function: FUN_0054c8f0
   Address: 0054c8f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0054c8f0(int param_1)

{
  FUN_0054c3e0(param_1,&DAT_005b89bc,0,0);
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x10;
  return;
}


