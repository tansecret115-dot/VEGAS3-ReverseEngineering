/* Module: stl2plg.dll
   Function: FUN_00459370
   Address: 00459370
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00459370(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1b1);
  if (*(int *)(iVar1 + 0x10) != 0) {
    if (*(char *)(param_1 + 0x80) != '\0') {
      uVar2 = FUN_00459a00(param_1);
      if ((char)uVar2 != '\0') {
        *(undefined1 **)(iVar1 + 0xc) = &LAB_00459b30;
        *(undefined4 *)(param_1 + 0xba) = 0;
        return;
      }
    }
    *(undefined1 **)(iVar1 + 0xc) = &LAB_00459850;
  }
  *(undefined4 *)(param_1 + 0xba) = 0;
  return;
}


