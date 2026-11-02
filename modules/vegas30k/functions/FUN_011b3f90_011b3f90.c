/* Module: vegas30k.dll
   Function: FUN_011b3f90
   Address: 011b3f90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_011b3f90(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_011b51f0(0);
  *(int *)(param_1 + 0x9cc) = iVar1;
  return (-(uint)(iVar1 != 0) & 0x7ff8fff2) + 0x8007000e;
}


