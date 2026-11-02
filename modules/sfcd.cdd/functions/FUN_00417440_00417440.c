/* Module: sfcd.cdd
   Function: FUN_00417440
   Address: 00417440
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00417440(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041f490(param_1,0);
  return 0xe1 < *(uint *)(iVar1 + 0x14);
}


