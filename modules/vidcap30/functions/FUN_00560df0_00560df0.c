/* Module: vidcap30.exe
   Function: FUN_00560df0
   Address: 00560df0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00560df0(int param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(param_1 + 0x1b1);
  if (*(int *)(iVar1 + 0x10) != 0) {
    if (*(char *)(param_1 + 0x80) != '\0') {
      cVar2 = FUN_00561480(param_1);
      if (cVar2 != '\0') {
        *(undefined1 **)(iVar1 + 0xc) = &LAB_005615b0;
        *(undefined4 *)(param_1 + 0xba) = 0;
        return;
      }
    }
    *(undefined1 **)(iVar1 + 0xc) = &LAB_005612d0;
  }
  *(undefined4 *)(param_1 + 0xba) = 0;
  return;
}


