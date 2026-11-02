/* Module: mpgmux.dll
   Function: FUN_100050f0
   Address: 100050f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_100050f0(int param_1,byte *param_2)

{
  FUN_1000d313((undefined1 *)&DAT_1001ab78,param_2,(undefined4 *)&stack0x0000000c);
  if ((param_1 != 0) && (*(code **)(param_1 + 0x2610) != (code *)0x0)) {
    (**(code **)(param_1 + 0x2610))(&DAT_1001ab78);
  }
  return;
}


