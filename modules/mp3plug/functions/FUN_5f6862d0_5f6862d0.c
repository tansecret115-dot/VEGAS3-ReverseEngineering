/* Module: mp3plug.dll
   Function: FUN_5f6862d0
   Address: 5f6862d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6862d0(HWND param_1)

{
  void *_Memory;
  LRESULT LVar1;
  int iVar2;
  WPARAM wParam;
  undefined4 *puVar3;
  undefined4 local_1c [6];
  void *local_4;
  
  LVar1 = SendMessageA(param_1,0x1304,0,0);
  wParam = 0;
  if (0 < LVar1) {
    do {
      puVar3 = local_1c;
      for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      local_1c[0] = 8;
      SendMessageA(param_1,0x1305,wParam,(LPARAM)local_1c);
      _Memory = local_4;
      if (local_4 != (void *)0x0) {
        if (*(HWND *)((int)local_4 + 4) != (HWND)0x0) {
          DestroyWindow(*(HWND *)((int)local_4 + 4));
        }
        free(_Memory);
      }
      wParam = wParam + 1;
    } while ((int)wParam < LVar1);
  }
  SendMessageA(param_1,0x1309,0,0);
  return;
}


