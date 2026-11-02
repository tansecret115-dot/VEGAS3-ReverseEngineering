/* Module: vegas30k.dll
   Function: FUN_01169af0
   Address: 01169af0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01169af0(int param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(param_1 + 0x1b1);
  if (*(int *)(iVar1 + 0x10) != 0) {
    if (*(char *)(param_1 + 0x80) != '\0') {
      cVar2 = FUN_0116a180(param_1);
      if (cVar2 != '\0') {
        *(undefined1 **)(iVar1 + 0xc) = &LAB_0116a2b0;
        *(undefined4 *)(param_1 + 0xba) = 0;
        return;
      }
    }
    *(undefined1 **)(iVar1 + 0xc) = &LAB_01169fd0;
  }
  *(undefined4 *)(param_1 + 0xba) = 0;
  return;
}


