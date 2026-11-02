/* Module: sfcd.cdd
   Function: FUN_00413390
   Address: 00413390
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00413390(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041f490(param_1,0);
  return *(int *)(iVar1 + 0x14) != 0x96;
}


