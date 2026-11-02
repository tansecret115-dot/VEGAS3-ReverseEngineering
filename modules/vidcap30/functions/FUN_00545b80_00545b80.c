/* Module: vidcap30.exe
   Function: FUN_00545b80
   Address: 00545b80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00545b80(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  FUN_00541310(param_4,param_2,param_3,local_104,3);
  return;
}


