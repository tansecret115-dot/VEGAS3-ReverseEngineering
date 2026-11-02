/* Module: vegas30.exe
   Function: FUN_00476330
   Address: 00476330
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00476330(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x218) + 0x2c);
  iVar2 = ftol();
  return (iVar1 - iVar2) + -2;
}


