/* Module: sdpp3260.dll
   Function: FUN_10002800
   Address: 10002800
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_10002800(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  *param_1 = *piVar1;
  return (int)(piVar1 + 2);
}


