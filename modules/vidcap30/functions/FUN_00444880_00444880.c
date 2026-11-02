/* Module: vidcap30.exe
   Function: FUN_00444880
   Address: 00444880
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00444880(undefined4 param_1,void *param_2)

{
  FUN_0042f4b0(param_1,1);
  FUN_004448e0(param_1,param_2);
  _SfList_Destroy_4(*(undefined4 *)((int)param_2 + 0x10));
  *(undefined4 *)((int)param_2 + 0x10) = 0;
  FUN_00443310(param_1,param_2,0);
  FUN_00443420(param_1,param_2,0);
  free(param_2);
  FUN_0042f5d0(param_1,1);
  return 0;
}


