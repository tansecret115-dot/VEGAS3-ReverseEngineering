/* Module: vidcap30.exe
   Function: FUN_0042c770
   Address: 0042c770
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042c770(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 8) {
    iVar1 = FUN_00428e50(param_1,0,0);
    if (-1 < iVar1) {
      FUN_00428e50(param_1,1,1);
    }
  }
  return;
}


