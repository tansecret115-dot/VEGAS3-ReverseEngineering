/* Module: rmbe3260.dll
   Function: FUN_6604b100
   Address: 6604b100
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6604b100(int param_1)

{
  if (*(int *)(param_1 + 0x214) != 0) {
    if (*(code **)(param_1 + 0x25b) != (code *)0x0) {
      (**(code **)(param_1 + 0x25b))(*(undefined4 *)(param_1 + 0x227));
    }
    *(undefined4 *)(param_1 + 0x214) = 0;
    if (*(int *)(param_1 + 0x210) == 0) {
      FUN_6604af80(param_1);
    }
  }
  return;
}


