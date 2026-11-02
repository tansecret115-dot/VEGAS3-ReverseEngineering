/* Module: encn3260.dll
   Function: FUN_664d5c90
   Address: 664d5c90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_664d5c90(int *param_1)

{
  char local_58 [80];
  int local_8;
  
  local_8 = param_1[1];
  if (local_8 < 1) {
    sprintf(local_58,&DAT_664e2f44);
  }
  else {
    sprintf(local_58,&DAT_664f04f0,(double)*param_1 + (double)local_8 * _DAT_664dffb8);
  }
  FUN_664bb5e0(param_1 + 2,local_58);
  return param_1[2];
}


