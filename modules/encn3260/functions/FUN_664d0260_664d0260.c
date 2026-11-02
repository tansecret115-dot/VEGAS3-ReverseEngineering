/* Module: encn3260.dll
   Function: FUN_664d0260
   Address: 664d0260
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_664d0260(uint param_1)

{
  return (((param_1 & 0xff) * 0x100 + (param_1 >> 8 & 0xff)) * 0x100 + (param_1 >> 0x10 & 0xff)) *
         0x100 + (param_1 >> 0x18);
}


