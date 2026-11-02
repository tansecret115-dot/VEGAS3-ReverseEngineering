/* Module: erv33260.dll
   Function: FUN_6707bae0
   Address: 6707bae0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6707bae0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[3];
  while (iVar1 != 0) {
    FUN_6707b790((void *)*param_1,**(int **)(param_1[1] + 4),(byte)param_1[4]);
    iVar1 = *(int *)(param_1[1] + 4);
    param_1[1] = iVar1;
    FUN_67072140(*(void **)(iVar1 + 8));
    iVar1 = param_1[3] + -1;
    param_1[3] = iVar1;
  }
  return;
}


