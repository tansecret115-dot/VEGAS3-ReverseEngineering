/* Module: aviplug.dll
   Function: FUN_5f96bc10
   Address: 5f96bc10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f96bc10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iStack00000008;
  
  puVar4 = (undefined1 *)(param_1 + 2);
  iStack00000008 = 4;
  do {
    iVar1 = ftol();
    iVar2 = ftol();
    iVar3 = ftol();
    if (iVar1 < 0x100) {
      if (iVar1 < 0) {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = 0xff;
    }
    puVar4[-2] = (char)iVar1;
    if (iVar2 < 0x100) {
      if (iVar2 < 0) {
        iVar2 = 0;
      }
    }
    else {
      iVar2 = 0xff;
    }
    puVar4[-1] = (char)iVar2;
    if (iVar3 < 0x100) {
      if (iVar3 < 0) {
        iVar3 = 0;
      }
    }
    else {
      iVar3 = 0xff;
    }
    *puVar4 = (char)iVar3;
    puVar4 = puVar4 + 3;
    iStack00000008 = iStack00000008 + -1;
  } while (iStack00000008 != 0);
  return;
}


