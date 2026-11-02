/* Module: rmbe3260.dll
   Function: FUN_66055be0
   Address: 66055be0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_66055be0(uint param_1)

{
  return (((param_1 & 0xff) * 0x100 + (param_1 >> 8 & 0xff)) * 0x100 + (param_1 >> 0x10 & 0xff)) *
         0x100 + (param_1 >> 0x18);
}


