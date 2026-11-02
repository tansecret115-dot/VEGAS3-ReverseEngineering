/* Module: rmbe3260.dll
   Function: FUN_66048fa0
   Address: 66048fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_66048fa0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = 4;
  piVar1 = operator_new(4);
  if (piVar1 == (int *)0x0) {
    *param_1 = 0;
    return (int *)0x0;
  }
  iVar2 = FUN_66055be0(0x2e7261fd);
  *piVar1 = iVar2;
  return piVar1;
}


