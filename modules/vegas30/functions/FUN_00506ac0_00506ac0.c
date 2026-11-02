/* Module: vegas30.exe
   Function: FUN_00506ac0
   Address: 00506ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00506ac0(undefined4 *param_1,undefined4 param_2)

{
  HWND hWnd;
  uint uVar1;
  uint wParam;
  undefined1 *puVar2;
  LRESULT local_fa4;
  undefined1 local_fa0 [4000];
  
  if (param_1[2] != 0) {
    _SfList_DeleteList_16(param_2,0,0xffffffff,0);
    hWnd = GetDlgItem((HWND)*param_1,0x435);
    if ((*(byte *)(param_1 + 1) & 1) != 0) {
      local_fa4 = SendMessageA(hWnd,0x188,0,0);
      _SfList_InsertList_16(param_2,0xffffffff,&local_fa4,1);
      return;
    }
    uVar1 = SendMessageA(hWnd,400,0,0);
    wParam = uVar1;
    if (999 < uVar1) {
      wParam = 1000;
    }
    SendMessageA(hWnd,0x191,wParam,(LPARAM)local_fa0);
    if (uVar1 != 0) {
      puVar2 = local_fa0;
      do {
        _SfList_InsertList_16(param_2,0xffffffff,puVar2,1);
        puVar2 = puVar2 + 4;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  return;
}


