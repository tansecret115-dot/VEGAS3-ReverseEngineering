/* Module: mp3plug.dll
   Function: FUN_5f6ff000
   Address: 5f6ff000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f6ff000(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
  }
  return uVar1;
}


