/* Module: vegas30.exe
   Function: FUN_004aec00
   Address: 004aec00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004aec00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  if (param_5 != (undefined4 *)0x0) {
    local_4 = *param_5;
  }
  param_5 = (undefined4 *)0x0;
  if (param_6 != (undefined4 *)0x0) {
    param_5 = (undefined4 *)*param_6;
  }
  FUN_004ae1e0(param_1,param_2,param_3,&local_4,&param_5);
  return;
}


