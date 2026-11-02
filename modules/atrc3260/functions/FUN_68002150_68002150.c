/* Module: atrc3260.dll
   Function: FUN_68002150
   Address: 68002150
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_68002150(int param_1)

{
  if (*(code **)(param_1 + 0x5e) != (code *)0x0) {
    (**(code **)(param_1 + 0x5e))(*(undefined4 *)(param_1 + 0x36));
  }
  return;
}


