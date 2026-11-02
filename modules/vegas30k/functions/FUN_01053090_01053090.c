/* Module: vegas30k.dll
   Function: FUN_01053090
   Address: 01053090
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01053090(int param_1)

{
  int iVar1;
  HWND pHVar2;
  LRESULT LVar3;
  
  pHVar2 = GetFocus();
  if (pHVar2 != *(HWND *)(param_1 + 0x1c)) {
    if (pHVar2 == *(HWND *)(param_1 + 0x18)) {
      iVar1 = *(int *)(param_1 + 0x6fc);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x6fc) = 0;
        FUN_0112fa40(param_1,iVar1);
        return;
      }
      LVar3 = SendMessageA(*(HWND *)(param_1 + 0x18),0x110a,9,0);
      if (LVar3 == 0) {
        return;
      }
      FUN_0112fa40(param_1,LVar3);
      return;
    }
    LVar3 = SendMessageA(*(HWND *)(param_1 + 0x1c),0x100c,0xffffffff,2);
    if (LVar3 == -1) {
      return;
    }
  }
  FUN_01132020(param_1);
  return;
}


