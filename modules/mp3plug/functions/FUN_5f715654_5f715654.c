/* Module: mp3plug.dll
   Function: FUN_5f715654
   Address: 5f715654
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f715654(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x8640);
  *(undefined4 *)(param_1 + 0x861c) = *(undefined4 *)(iVar1 + 0x70);
  *(undefined4 *)(param_1 + 0x8620) = *(undefined4 *)(iVar1 + 0x48);
  *(undefined4 *)(param_1 + 0x8624) = *(undefined4 *)(iVar1 + 0x7c);
  *(undefined4 *)(param_1 + 0x8628) = *(undefined4 *)(iVar1 + 0x54);
  *(undefined4 *)(param_1 + 0x862c) = *(undefined4 *)(iVar1 + 0x58);
  if (*(int *)(iVar1 + 0x40) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0x10;
  }
  *(int *)(param_1 + 0x8630) = iVar2 + 0x20;
  *(bool *)(param_1 + 0x863c) = *(int *)(iVar1 + 0x6c) == 0;
  *(undefined4 *)(param_1 + 0x8634) = *(undefined4 *)(&DAT_5f764e10 + *(int *)(iVar1 + 0x6c) * 4);
  *(undefined4 *)(param_1 + 0x8638) = *(undefined4 *)(iVar1 + 0x40);
  return;
}


