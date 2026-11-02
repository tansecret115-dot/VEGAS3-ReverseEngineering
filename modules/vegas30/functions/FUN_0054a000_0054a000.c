/* Module: vegas30.exe
   Function: FUN_0054a000
   Address: 0054a000
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0054a000(int param_1)

{
  int iVar1;
  LRESULT LVar2;
  int *lParam;
  int iVar3;
  WPARAM wParam;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar1 = param_1;
  wParam = 0;
  if (*(int *)(param_1 + 0x84) == 0) {
    LVar2 = SendMessageA(*(HWND *)(param_1 + 0x9c),0x1004,0,0);
    iVar3 = 0;
    param_1 = 0;
    if (0 < LVar2) {
      do {
        if (&stack0x00000000 == (undefined1 *)0x10) {
          lParam = (int *)0x0;
        }
        else {
          local_10 = 3;
          lParam = &local_10;
        }
        SendMessageA(*(HWND *)(iVar1 + 0x9c),0x100e,wParam,(LPARAM)lParam);
        if (iVar3 < local_8 - local_10) {
          iVar3 = local_8 - local_10;
        }
        if (param_1 < local_4 - local_c) {
          param_1 = local_4 - local_c;
        }
        wParam = wParam + 1;
      } while ((int)wParam < LVar2);
      if (0 < LVar2) {
        SendMessageA(*(HWND *)(iVar1 + 0x9c),0x1035,0,(param_1 + 2) * 0x10000 | iVar3 + 4U & 0xffff)
        ;
      }
    }
  }
  return;
}


