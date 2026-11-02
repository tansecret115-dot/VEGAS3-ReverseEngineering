/* Module: sdpp3260.dll
   Function: thunk_FUN_10007940
   Address: 10007b80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall thunk_FUN_10007940(int *param_1)

{
  char acStack_58 [80];
  int iStack_8;
  
  iStack_8 = param_1[1];
  if (iStack_8 < 1) {
    sprintf(acStack_58,&DAT_100095d0);
  }
  else {
    sprintf(acStack_58,&DAT_10009730,(double)*param_1 + (double)iStack_8 * _DAT_10008bc0);
  }
  FUN_10006900(param_1 + 2,acStack_58);
  return param_1[2];
}


