/* Module: mp3plug.dll
   Function: FUN_5f705910
   Address: 5f705910
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f705910(int param_1,uint param_2)

{
  if (*(uint *)(param_1 + 4) <= param_2) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0xc) + param_2 * 4);
}


