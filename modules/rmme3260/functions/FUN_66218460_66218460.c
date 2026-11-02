/* Module: rmme3260.dll
   Function: FUN_66218460
   Address: 66218460
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66218460(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x46) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x46))(1);
    *(undefined4 *)(param_1 + 0x46) = 0;
  }
  FUN_66217e20(param_1);
  return;
}


