/* Module: vegas30.exe
   Function: FUN_004298c0
   Address: 004298c0
   Source: Ghidra pseudocode (Stage 10 batch) */


WPARAM FUN_004298c0(HWND param_1,int param_2)

{
  int iVar1;
  int iVar2;
  LRESULT LVar3;
  LRESULT LVar4;
  WPARAM wParam;
  int iVar5;
  int local_4;
  
  iVar5 = 0;
  if (DAT_0064b57c == (int *)0x0) {
    local_4 = 0;
  }
  else {
    local_4 = *DAT_0064b57c;
  }
  if (0 < local_4) {
    do {
      iVar2 = *(int *)(DAT_0064b57c[2] + iVar5 * 4);
      iVar1 = lstrcmpA((LPCSTR)(iVar2 + 0xc),(LPCSTR)(param_2 + 0x3120));
      if (((iVar1 == 0) &&
          (iVar1 = lstrcmpA((LPCSTR)(iVar2 + 0xac),(LPCSTR)(param_2 + 0x3170)), iVar1 == 0)) &&
         (iVar2 = lstrcmpA((LPCSTR)(iVar2 + 0xfc),(LPCSTR)(param_2 + 0x31c0)), iVar2 == 0)) {
        LVar3 = SendMessageA(param_1,0x146,0,0);
        wParam = 0;
        if (LVar3 < 1) {
          return 0;
        }
        do {
          LVar4 = SendMessageA(param_1,0x150,wParam,0);
          if (iVar5 == LVar4) {
            return wParam;
          }
          wParam = wParam + 1;
        } while ((int)wParam < LVar3);
        return 0;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_4);
  }
  return 0;
}


