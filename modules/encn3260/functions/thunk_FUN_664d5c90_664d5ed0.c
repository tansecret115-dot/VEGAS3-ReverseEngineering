/* Module: encn3260.dll
   Function: thunk_FUN_664d5c90
   Address: 664d5ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall thunk_FUN_664d5c90(int *param_1)

{
  char acStack_58 [80];
  int iStack_8;
  
  iStack_8 = param_1[1];
  if (iStack_8 < 1) {
    sprintf(acStack_58,&DAT_664e2f44);
  }
  else {
    sprintf(acStack_58,&DAT_664f04f0,(double)*param_1 + (double)iStack_8 * _DAT_664dffb8);
  }
  FUN_664bb5e0(param_1 + 2,acStack_58);
  return param_1[2];
}


