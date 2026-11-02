/* Module: atrc3260.dll
   Function: FUN_68001ec0
   Address: 68001ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_68001ec0(int param_1)

{
  if (*(code **)(param_1 + 0x52) != (code *)0x0) {
    (**(code **)(param_1 + 0x52))(*(undefined4 *)(param_1 + 0x32));
  }
  return;
}


