/* Module: sftrkfx1.dll
   Function: FUN_5cbf6f90
   Address: 5cbf6f90
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_5cbf6f90(int *param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*param_1 == 0) {
    return in_EAX & 0xffff0000;
  }
  uVar1 = FUN_5cbff570(*param_1);
  return CONCAT22((short)(uVar1 >> 0x10),(short)param_1[499]) & uVar1;
}


