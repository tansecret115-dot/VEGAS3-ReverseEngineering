/* Module: vidcap30.exe
   Function: FUN_0040d730
   Address: 0040d730
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040d730(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  WPARAM wParam;
  int iVar4;
  CHAR local_104 [260];
  
  iVar2 = FUN_0040d6b0(param_1,param_2);
  if ((-1 < iVar2) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x8c) + 8),
     iVar2 = *(int *)(*(int *)(param_1 + 0x8c) + 4) * iVar2, iVar4 = iVar2 + iVar1,
     *(int *)(iVar2 + 0x44 + iVar1) != 0)) {
    wParam = 0;
    if (0 < *(int *)(iVar4 + 0x30)) {
      piVar3 = *(int **)(*(int *)(iVar4 + 0x2c) + 8);
      while (iVar2 = *piVar3, *(int *)(iVar2 + 0x14) != param_2) {
        wParam = wParam + 1;
        piVar3 = piVar3 + 1;
        if (*(int *)(iVar4 + 0x30) <= (int)wParam) {
          return;
        }
      }
      if (*(int *)(iVar4 + 0x28) != iVar2) {
        *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) | 0x20;
        SetWindowPos(*(HWND *)(iVar2 + 8),(HWND)0x0,0,0,0,0,0x43);
        *(uint *)(*(int *)(iVar4 + 0x28) + 0x10) =
             *(uint *)(*(int *)(iVar4 + 0x28) + 0x10) & 0xffffffdf;
        ShowWindow(*(HWND *)(*(int *)(iVar4 + 0x28) + 8),0);
        *(int *)(iVar4 + 0x28) = iVar2;
        SendMessageA(*(HWND *)(iVar4 + 0x44),0x602,wParam,0);
        FUN_00409c50(DAT_005ba4c0,*(undefined4 *)(iVar2 + 0x14));
        SetFocus(*(HWND *)(iVar2 + 8));
      }
      GetWindowTextA(*(HWND *)(iVar2 + 8),local_104,0x104);
      SendMessageA(*(HWND *)(iVar4 + 0x44),0x604,wParam,(LPARAM)local_104);
    }
  }
  return;
}


