/* Module: mpgmux.dll
   Function: FUN_10005180
   Address: 10005180
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10005180(int param_1,undefined4 param_2,byte *param_3)

{
  undefined1 local_100 [256];
  
  FUN_1000d313(local_100,param_3,(undefined4 *)&stack0x00000010);
  if ((*(code **)(param_1 + 0x2614) != (code *)0x0) && (*(char *)(param_1 + 0x6c) == '\0')) {
    (**(code **)(param_1 + 0x2614))(param_2,local_100);
  }
  return;
}


