/* Module: vegas30.exe
   Function: FUN_005c03a0
   Address: 005c03a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005c03a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_108 [4];
  undefined1 local_104 [260];
  
  if (*(int *)(param_1 + 4) == 3) {
    FUN_005bea00(param_2,param_3,local_104,0x104,local_108);
    FUN_004e9f70(*(undefined4 *)(param_1 + 8),param_4,local_104);
  }
  return;
}


