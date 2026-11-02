/* Module: mp3plug.dll
   Function: FUN_5f712134
   Address: 5f712134
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f712134(int param_1)

{
  *(undefined1 *)(param_1 + 0xca3c) = 0;
  (**(code **)(*(int *)(param_1 + 0x38) + 4))();
  FUN_5f7156e0((void *)(param_1 + 0xcc),'\x01');
  return;
}


