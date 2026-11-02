/* Module: mp3plug.dll
   Function: FUN_5f69a470
   Address: 5f69a470
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f69a470(byte *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = FUN_5f69a400(param_1);
  if (puVar1 != (undefined1 *)0x0) {
    return *(undefined4 *)(puVar1 + 0x10);
  }
  return 0;
}


