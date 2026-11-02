/* Module: vidcap30.exe
   Function: FUN_004465a0
   Address: 004465a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004465a0(int param_1,HWND param_2)

{
  BOOL BVar1;
  LPCSTR pCVar2;
  
  if (*(int *)(param_1 + 8) == 0) {
    *(HWND *)(param_1 + 8) = param_2;
    pCVar2 = (LPCSTR)_SfGetString_8(DAT_005ba2a0,0xc4fd);
    SetWindowTextA(param_2,pCVar2);
  }
  else if (param_2 != (HWND)0x0) {
    BVar1 = IsWindow(*(HWND *)(param_1 + 0x88));
    if (BVar1 != 0) {
      SetParent(*(HWND *)(param_1 + 0x88),param_2);
      SetParent(*(HWND *)(param_1 + 0x194),param_2);
      SendMessageA(*(HWND *)(param_1 + 0x194),0x425,(WPARAM)param_2,0);
      SendMessageA(*(HWND *)(param_1 + 0x88),0x601,0,(LPARAM)param_2);
    }
    pCVar2 = (LPCSTR)_SfGetString_8(DAT_005ba2a0,0xc4fd);
    SetWindowTextA(param_2,pCVar2);
    return 0;
  }
  return 0;
}


