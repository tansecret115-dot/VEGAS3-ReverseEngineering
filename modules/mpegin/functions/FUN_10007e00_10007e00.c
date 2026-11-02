/* Module: mpegin.dll
   Function: FUN_10007e00
   Address: 10007e00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10007e00(int param_1,byte *param_2)

{
  int local_108;
  undefined1 local_104 [260];
  
  local_108 = 0;
  FUN_1000e1da(local_104,param_2,(undefined4 *)&stack0x0000000c);
  if (param_1 != 0) {
    if (*(code **)(param_1 + 4) == (code *)0x0) {
      if (*(code **)(param_1 + 0x12e44) != (code *)0x0) {
        (**(code **)(param_1 + 0x12e44))(local_104);
      }
    }
    else {
      (**(code **)(param_1 + 4))(local_104,&local_108);
      if (local_108 != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x10c) = 1;
        return;
      }
    }
  }
  return;
}


