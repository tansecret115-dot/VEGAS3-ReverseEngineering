/* Module: vidcap30.exe
   Function: FUN_00454b30
   Address: 00454b30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00454b30(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_8;
  int local_4;
  
  local_8 = (int)(short)param_4;
  local_4 = (int)(short)((uint)param_4 >> 0x10);
  if (param_2 < 0x202) {
    if (param_2 == 0x201) {
      uVar1 = FUN_00454bc0(param_1,local_8,local_4);
      return uVar1;
    }
    if (param_2 != 0x1f) {
      if (param_2 != 0x200) {
        return 0;
      }
      FUN_00454dd0(param_1,&local_8);
      return 0;
    }
  }
  else if ((param_2 != 0x215) && (param_2 != 0x2a3)) {
    return 0;
  }
  FUN_00454dd0(param_1,0);
  return 0;
}


