/* Module: mpegin.dll
   Function: FUN_10007e90
   Address: 10007e90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10007e90(int param_1,byte *param_2)

{
  FUN_1000e1da(&DAT_1001c278,param_2,(undefined4 *)&stack0x0000000c);
  if ((param_1 != 0) && (*(code **)(param_1 + 0x12e3c) != (code *)0x0)) {
    (**(code **)(param_1 + 0x12e3c))(&DAT_1001c278);
  }
  return;
}


