/* Module: rmto3260.dll
   Function: FUN_662fb700
   Address: 662fb700
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_662fb700(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = 4;
  piVar1 = operator_new(4);
  if (piVar1 == (int *)0x0) {
    *param_1 = 0;
    return (int *)0x0;
  }
  iVar2 = FUN_662f2c20(0x2e7261fd);
  *piVar1 = iVar2;
  return piVar1;
}


