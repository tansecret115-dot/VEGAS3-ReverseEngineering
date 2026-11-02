/* Module: vegas30.exe
   Function: FUN_00435ea0
   Address: 00435ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00435ea0(undefined4 param_1,int *param_2)

{
  FUN_004582a0(DAT_00647630,param_1,param_2);
  if (*param_2 == 0 && param_2[1] == 0) {
    *param_2 = DAT_00647e58;
    param_2[1] = DAT_00647e5c;
  }
  return;
}


