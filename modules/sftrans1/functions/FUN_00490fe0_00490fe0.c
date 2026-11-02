/* Module: sftrans1.dll
   Function: FUN_00490fe0
   Address: 00490fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00490fe0(int param_1,undefined4 param_2,int param_3)

{
  SHORT SVar1;
  HWND pHVar2;
  HWND pHVar3;
  int iVar4;
  
  SVar1 = GetKeyState(0x10);
  if ((param_3 == 9) && (-1 < SVar1)) {
    pHVar2 = GetFocus();
    pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6ae);
    if ((*(int *)(param_1 + 0x340) != 0) && ((pHVar3 != (HWND)0x0 && (pHVar2 == pHVar3)))) {
      iVar4 = FUN_00485e60(*(undefined4 *)(*(int *)(param_1 + 0x340) + 0x2c));
      if (iVar4 != 0) {
        pHVar2 = GetNextDlgTabItem(*(HWND *)(iVar4 + 4),(HWND)0x0,0);
        if (pHVar2 != (HWND)0x0) {
          SetFocus(pHVar2);
          return 0;
        }
      }
    }
  }
  return 1;
}


