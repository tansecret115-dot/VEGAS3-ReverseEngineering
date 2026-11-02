/* Module: vegas30.exe
   Function: FUN_0040c6d0
   Address: 0040c6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040c6d0(int *param_1)

{
  int iVar1;
  MSG *pMVar2;
  MSG local_1c;
  
  if (*(int *)(DAT_0064762c + 0xd8) != 0) {
    iVar1 = FUN_0040c050(*(int *)(DAT_0064762c + 0xd8));
    if (iVar1 != 0) {
      local_1c.hwnd = *(HWND *)(iVar1 + 8);
      if (local_1c.hwnd != (HWND)*param_1) {
        pMVar2 = &local_1c;
        for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
          pMVar2->hwnd = (HWND)*param_1;
          param_1 = param_1 + 1;
          pMVar2 = (MSG *)&pMVar2->message;
        }
        local_1c.message = 0x111;
        local_1c.lParam = 0;
        local_1c.wParam = 2;
        DispatchMessageA(&local_1c);
      }
    }
  }
  return;
}


