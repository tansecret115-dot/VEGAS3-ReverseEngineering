/* Module: vegas30.exe
   Function: FUN_0058fd70
   Address: 0058fd70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_0058fd70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined4 local_c;
  
  local_c = 0x3ff00000;
  if (*(int *)(*(int *)(param_1 + 4) + 0x6c) != 0) {
    local_c = 0xbff00000;
  }
  FUN_0058f8e0(param_2,param_3,param_4,param_5,param_6,param_7,0,local_c,0,0,0,0);
  return;
}


