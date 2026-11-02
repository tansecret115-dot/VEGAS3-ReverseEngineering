/* Module: encn3260.dll
   Function: FUN_664d60a0
   Address: 664d60a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_664d60a0(undefined4 *param_1)

{
  char local_10 [8];
  char local_8 [4];
  
  sprintf(local_10,s__02d__02d__02d_664f04fc,*param_1,param_1[1],param_1[2]);
  if (0 < (int)param_1[3]) {
    sprintf(local_8,s___02d_664f04f4,param_1[3]);
  }
  FUN_664bb5e0(param_1 + 6,local_10);
  return param_1[6];
}


