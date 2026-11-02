/* Module: rmbe3260.dll
   Function: FUN_66037f00
   Address: 66037f00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_66037f00(int param_1)

{
  return (uint)*(byte *)(param_1 + 0x16) + (uint)*(byte *)(param_1 + 0x1b) +
         (uint)*(byte *)(param_1 + 0x20) + 0x20 + (uint)*(byte *)(param_1 + 0x25);
}


