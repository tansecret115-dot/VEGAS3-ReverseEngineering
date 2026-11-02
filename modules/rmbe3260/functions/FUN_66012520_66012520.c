/* Module: rmbe3260.dll
   Function: FUN_66012520
   Address: 66012520
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66012520(int param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    *param_2 = 0;
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0xa8);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
  }
  *param_2 = iVar1;
  return 0;
}


