/* Module: rmbe3260.dll
   Function: FUN_66034780
   Address: 66034780
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_66034780(int param_1)

{
  return *(int *)(param_1 + 0x32) + (uint)*(byte *)(param_1 + 0x2d) + 0x2e +
         (uint)*(byte *)(param_1 + 0x28);
}


