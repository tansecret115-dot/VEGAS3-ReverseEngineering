/* Module: vidcap30.exe
   Function: FUN_0054d750
   Address: 0054d750
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0054d750(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4;
  
  if (1 < param_4) {
    FUN_00549570(param_1,"Unrecognized unit type for pHYs chunk");
  }
  FUN_0054c360(local_c,param_2);
  FUN_0054c360(local_8,param_3);
  local_4 = (undefined1)param_4;
  FUN_0054c3e0(param_1,&DAT_005b89fc,local_c,9);
  return;
}


