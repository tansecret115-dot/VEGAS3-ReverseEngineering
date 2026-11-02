/* Module: vegas30k.dll
   Function: FUN_011537b0
   Address: 011537b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011537b0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  code *pcVar1;
  undefined1 local_104 [260];
  
  pcVar1 = *(code **)(*(int *)(param_4 + 0x1c4) + param_3 * 0x30);
  if (pcVar1 == (code *)0x0) {
    local_104[0] = 0;
  }
  else {
    (*pcVar1)(param_4 + 0x1c8,param_2,param_1,local_104,0x104);
  }
  FUN_0114ef40(param_4,param_2,param_3,local_104,3);
  return;
}


