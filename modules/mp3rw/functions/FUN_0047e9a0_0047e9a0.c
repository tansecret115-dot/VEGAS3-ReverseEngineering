/* Module: mp3rw.dll
   Function: FUN_0047e9a0
   Address: 0047e9a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047e9a0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1b1);
  if (*(int *)(iVar1 + 0x10) != 0) {
    if (*(char *)(param_1 + 0x80) != '\0') {
      uVar2 = FUN_0047f030(param_1);
      if ((char)uVar2 != '\0') {
        *(undefined1 **)(iVar1 + 0xc) = &LAB_0047f160;
        *(undefined4 *)(param_1 + 0xba) = 0;
        return;
      }
    }
    *(undefined1 **)(iVar1 + 0xc) = &LAB_0047ee80;
  }
  *(undefined4 *)(param_1 + 0xba) = 0;
  return;
}


