/* Module: rv203260.dll
   Function: FUN_638af590
   Address: 638af590
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_638af590(uint param_1)

{
  return (((param_1 & 0xff) * 0x100 + (param_1 >> 8 & 0xff)) * 0x100 + (param_1 >> 0x10 & 0xff)) *
         0x100 + (param_1 >> 0x18);
}


