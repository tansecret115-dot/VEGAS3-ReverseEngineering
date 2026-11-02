/* Module: rmto3260.dll
   Function: FUN_662f2c20
   Address: 662f2c20
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_662f2c20(uint param_1)

{
  return (((param_1 & 0xff) * 0x100 + (param_1 >> 8 & 0xff)) * 0x100 + (param_1 >> 0x10 & 0xff)) *
         0x100 + (param_1 >> 0x18);
}


