/* Module: vidcap30.exe
   Function: FUN_004532d0
   Address: 004532d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004532d0(HWND param_1,int param_2)

{
  undefined4 uVar1;
  HWND hWnd;
  int iVar2;
  int iVar3;
  int iVar4;
  
  hWnd = GetDlgItem(param_1,0x443);
  uVar1 = *(undefined4 *)(param_2 + 0x28);
  iVar2 = FUN_0042e510(uVar1);
  SendMessageA(hWnd,0x141,0x80,0);
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = FUN_00443740(uVar1,iVar4);
      if (iVar3 != 0) {
        SendMessageA(hWnd,0x143,0,*(LPARAM *)(iVar3 + 0xc));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  SetWindowTextA(hWnd,(LPCSTR)(param_2 + 0x60));
  return;
}


