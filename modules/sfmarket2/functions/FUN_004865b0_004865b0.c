/* Module: sfmarket2.dll
   Function: FUN_004865b0
   Address: 004865b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004865b0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1b1);
  if (*(int *)(iVar1 + 0x10) != 0) {
    if (*(char *)(param_1 + 0x80) != '\0') {
      uVar2 = FUN_00486c40(param_1);
      if ((char)uVar2 != '\0') {
        *(undefined1 **)(iVar1 + 0xc) = &LAB_00486d70;
        *(undefined4 *)(param_1 + 0xba) = 0;
        return;
      }
    }
    *(undefined1 **)(iVar1 + 0xc) = &LAB_00486a90;
  }
  *(undefined4 *)(param_1 + 0xba) = 0;
  return;
}


