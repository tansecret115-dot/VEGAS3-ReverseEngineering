/* Module: rmbe3260.dll
   Function: FUN_66034b10
   Address: 66034b10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66034b10(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x46) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x46))(1);
    *(undefined4 *)(param_1 + 0x46) = 0;
  }
  FUN_66034710(param_1);
  return;
}


