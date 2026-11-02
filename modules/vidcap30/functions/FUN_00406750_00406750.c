/* Module: vidcap30.exe
   Function: FUN_00406750
   Address: 00406750
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00406750(undefined4 *param_1)

{
  HWND hWnd;
  tagRECT local_10;
  
  if (param_1 != (undefined4 *)0x0) {
    UpdateWindow((HWND)*param_1);
    GetClientRect((HWND)*param_1,&local_10);
    local_10.bottom = param_1[0x1a];
    FUN_00405be0(DAT_005ba504,0);
    SendMessageA((HWND)*param_1,0xb,0,0);
    FUN_00406610(param_1);
    hWnd = CreateWindowExA(0x20,"SfKrn_Plexiglas_Class","",0x40000000,local_10.left,local_10.top,
                           local_10.right - local_10.left,local_10.bottom - local_10.top,
                           (HWND)*param_1,(HMENU)0x0,DAT_005ba298,(LPVOID)0x0);
    param_1[0x24] = hWnd;
    ShowWindow(hWnd,8);
    BringWindowToTop((HWND)param_1[0x24]);
    SetFocus((HWND)param_1[0x24]);
    SendMessageA((HWND)*param_1,0xb,1,0);
  }
  return;
}


