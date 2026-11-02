/* Module: stl2plg.dll
   Function: FUN_0041e6e0
   Address: 0041e6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041e6e0(int param_1,byte *param_2)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 9) == '\x01') && (*(char *)(param_1 + 8) == '\0')) {
    for (iVar1 = *(int *)(param_1 + 4); iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = ~*param_2;
      param_2 = param_2 + 1;
    }
  }
  return;
}


