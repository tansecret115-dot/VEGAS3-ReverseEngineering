/* Module: tokr3260.dll
   Function: FUN_68057340
   Address: 68057340
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_68057340(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if (0 < param_2) {
    do {
      iVar1 = iVar1 * param_1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return iVar1;
}


