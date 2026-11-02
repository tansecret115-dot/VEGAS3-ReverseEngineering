/* Module: rv103260.dll
   Function: FUN_636a5c30
   Address: 636a5c30
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_636a5c30(uint param_1)

{
  return (((param_1 & 0xff) * 0x100 + (param_1 >> 8 & 0xff)) * 0x100 + (param_1 >> 0x10 & 0xff)) *
         0x100 + (param_1 >> 0x18);
}


