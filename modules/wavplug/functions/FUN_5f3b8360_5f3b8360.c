/* Module: wavplug.dll
   Function: FUN_5f3b8360
   Address: 5f3b8360
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f3b8360(HWND param_1,int *param_2)

{
  HWND hWnd;
  LRESULT LVar1;
  LRESULT LVar2;
  int iVar3;
  int iVar4;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  WPARAM local_10;
  uint local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  hWnd = param_1;
  iVar4 = 0;
  iVar3 = 0;
  LVar1 = SendMessageA(param_1,0x418,0,0);
  param_1 = (HWND)0x0;
  if (0 < LVar1) {
    do {
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      local_8 = 0;
      local_4 = 0;
      LVar2 = SendMessageA(hWnd,0x417,(WPARAM)param_1,(LPARAM)&local_14);
      if ((LVar2 != 0) && ((local_c & 8) == 0)) {
        SendMessageA(hWnd,0x433,local_10,(LPARAM)&local_24);
        iVar3 = iVar3 + (local_1c - local_24);
        if (iVar4 <= local_18 - local_20) {
          iVar4 = local_18 - local_20;
        }
      }
      param_1 = (HWND)((int)&param_1->unused + 1);
    } while ((int)param_1 < LVar1);
  }
  param_2[1] = iVar4;
  *param_2 = iVar3;
  return;
}


