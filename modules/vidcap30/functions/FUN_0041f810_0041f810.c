/* Module: vidcap30.exe
   Function: FUN_0041f810
   Address: 0041f810
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041f810(HWND param_1)

{
  LRESULT LVar1;
  LRESULT LVar2;
  WPARAM wParam;
  undefined1 *lParam;
  undefined1 local_50 [12];
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_28 [12];
  undefined4 local_1c;
  undefined4 local_18;
  
  LVar1 = SendMessageA(param_1,0x1004,0,0);
  wParam = 0;
  if (0 < LVar1) {
    do {
      LVar2 = SendMessageA(param_1,0x102c,wParam,1);
      if (LVar2 == 0) {
        lParam = local_28;
        local_18 = 0xf;
        local_1c = 2;
      }
      else {
        lParam = local_50;
        local_40 = 0xf;
        local_44 = 3;
      }
      SendMessageA(param_1,0x102b,wParam,(LPARAM)lParam);
      wParam = wParam + 1;
    } while ((int)wParam < LVar1);
  }
  return;
}


