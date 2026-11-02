/* Module: sfcd.cdd
   Function: FUN_00419420
   Address: 00419420
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00419420(int param_1,uint param_2)

{
  return (*(byte *)(param_1 + 0x16) & 0xf) == param_2;
}


