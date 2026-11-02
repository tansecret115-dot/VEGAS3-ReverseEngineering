/* Module: rmto3260.dll
   Function: FUN_662febe0
   Address: 662febe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662febe0(int param_1)

{
  if (*(int *)(param_1 + 0x214) != 0) {
    if (*(code **)(param_1 + 0x25b) != (code *)0x0) {
      (**(code **)(param_1 + 0x25b))(*(undefined4 *)(param_1 + 0x227));
    }
    *(undefined4 *)(param_1 + 0x214) = 0;
    if (*(int *)(param_1 + 0x210) == 0) {
      FUN_662fea60(param_1);
    }
  }
  return;
}


