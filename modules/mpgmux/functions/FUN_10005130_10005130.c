/* Module: mpgmux.dll
   Function: FUN_10005130
   Address: 10005130
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10005130(int param_1,byte *param_2)

{
  undefined1 local_100 [256];
  
  FUN_1000d313(local_100,param_2,(undefined4 *)&stack0x0000000c);
  if (*(code **)(param_1 + 0x261c) != (code *)0x0) {
    (**(code **)(param_1 + 0x261c))(local_100);
  }
  return;
}


