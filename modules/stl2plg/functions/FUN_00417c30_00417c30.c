/* Module: stl2plg.dll
   Function: FUN_00417c30
   Address: 00417c30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00417c30(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (((param_1 != (int *)0x0) && (*param_1 == 2)) && (param_1[2] == 1)) {
    iVar1 = param_1[1];
  }
  return iVar1;
}


