/* Module: mp3plug.dll
   Function: FUN_5f7141a0
   Address: 5f7141a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5f7141a0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10);
  return (int)(iVar1 + ((uint)(iVar1 >> 2) >> 0x1d)) >> 3;
}


