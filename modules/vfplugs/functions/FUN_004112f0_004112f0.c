/* Module: vfplugs.dll
   Function: FUN_004112f0
   Address: 004112f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004112f0(int param_1)

{
  HWND pHVar1;
  LRESULT LVar2;
  int iVar3;
  
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x4be);
  if (pHVar1 != (HWND)0x0) {
    LVar2 = SendMessageA(pHVar1,0x130b,0,0);
    iVar3 = 0x514;
    do {
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),iVar3);
      if (pHVar1 != (HWND)0x0) {
        ShowWindow(pHVar1,(-(uint)(LVar2 != 0) & 0xfffffffb) + 5);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x520);
    iVar3 = 0x578;
    do {
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),iVar3);
      if (pHVar1 != (HWND)0x0) {
        ShowWindow(pHVar1,(-(uint)(LVar2 != 1) & 0xfffffffb) + 5);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x57a);
    iVar3 = 0x5dc;
    do {
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),iVar3);
      if (pHVar1 != (HWND)0x0) {
        ShowWindow(pHVar1,(LVar2 != 2) - 1 & 5);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x5e7);
    iVar3 = 0x640;
    do {
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),iVar3);
      if (pHVar1 != (HWND)0x0) {
        ShowWindow(pHVar1,(LVar2 != 3) - 1 & 5);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x648);
  }
  return;
}


