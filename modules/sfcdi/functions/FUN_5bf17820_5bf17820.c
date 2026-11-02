/* Module: sfcdi.dll
   Function: FUN_5bf17820
   Address: 5bf17820
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf17820(int *param_1)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_20;
  tagMSG local_1c;
  
  local_20 = 0;
  do {
    while (BVar1 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1), BVar1 != 0) {
      if (local_1c.message == 0x12) {
        PostQuitMessage(local_1c.wParam);
        return local_20;
      }
      TranslateMessage(&local_1c);
      DispatchMessageA(&local_1c);
    }
    iVar2 = (**(code **)(*param_1 + 0x28))(param_1,&local_20);
  } while (iVar2 != 0);
  return local_20;
}


