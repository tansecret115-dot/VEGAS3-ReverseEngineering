/* Module: sdpp3260.dll
   Function: FUN_10007940
   Address: 10007940
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_10007940(int *param_1)

{
  char local_58 [80];
  int local_8;
  
  local_8 = param_1[1];
  if (local_8 < 1) {
    sprintf(local_58,&DAT_100095d0);
  }
  else {
    sprintf(local_58,&DAT_10009730,(double)*param_1 + (double)local_8 * _DAT_10008bc0);
  }
  FUN_10006900(param_1 + 2,local_58);
  return param_1[2];
}


