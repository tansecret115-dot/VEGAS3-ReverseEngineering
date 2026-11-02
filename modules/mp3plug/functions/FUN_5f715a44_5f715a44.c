/* Module: mp3plug.dll
   Function: FUN_5f715a44
   Address: 5f715a44
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5f715a44(int param_1)

{
  return (((*(int *)(param_1 + 0x4c) / *(int *)(&DAT_5f764e50 + *(int *)(param_1 + 0x10) * 4)) *
          *(int *)(&DAT_5f764e2c + *(int *)(param_1 + 0x10) * 4 + *(int *)(param_1 + 0x40) * 0xc)) /
          *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x20)) *
         *(int *)(&DAT_5f764e50 + *(int *)(param_1 + 0x10) * 4);
}


