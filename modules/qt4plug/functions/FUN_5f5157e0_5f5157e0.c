/* Module: qt4plug.dll
   Function: FUN_5f5157e0
   Address: 5f5157e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f5157e0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iStack00000004;
  
  iStack00000004 = FUN_5f576210();
  if (1 < iStack00000004) {
    iVar2 = 0x7fffffff;
    iVar3 = 1;
    if (0 < iStack00000004) {
      do {
        FUN_5f5773f0();
        iVar1 = FUN_5f576330();
        if (iVar1 < iVar2) {
          iVar2 = iVar1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 <= iStack00000004);
    }
    iVar3 = 1;
    if (0 < iStack00000004) {
      do {
        FUN_5f5773f0();
        iVar1 = FUN_5f576330();
        if (iVar2 < iVar1) {
          FUN_5f5768d0();
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 <= iStack00000004);
    }
  }
  return;
}


