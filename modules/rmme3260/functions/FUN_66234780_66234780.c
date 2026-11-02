/* Module: rmme3260.dll
   Function: FUN_66234780
   Address: 66234780
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_66234780(int param_1)

{
  return (*(byte *)(param_1 + 0x34) & 0x10) >> 4;
}


