/* Module: vidcap30.exe
   Function: FUN_004349c0
   Address: 004349c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004349c0(void)

{
  return *(uint *)(*(int *)(DAT_005ba4c0 + 0x6c) + 0x1ac0) >> 1 & 1;
}


