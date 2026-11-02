/* Module: rmto3260.dll
   Function: FUN_662deee0
   Address: 662deee0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662deee0(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x46) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x46))(1);
    *(undefined4 *)(param_1 + 0x46) = 0;
  }
  FUN_662deba0(param_1);
  return;
}


