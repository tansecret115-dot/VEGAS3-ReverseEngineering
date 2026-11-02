/* Module: mp3plug.dll
   Function: FUN_5f715a20
   Address: 5f715a20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f715a20(int param_1)

{
  return *(undefined4 *)
          (&DAT_5f764e2c + *(int *)(param_1 + 0x10) * 4 + *(int *)(param_1 + 0x40) * 0xc);
}


