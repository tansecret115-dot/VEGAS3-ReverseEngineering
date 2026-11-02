/* Module: rmme3260.dll
   Function: FUN_66242450
   Address: 66242450
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66242450(undefined4 *param_1)

{
  HWND hWnd;
  undefined4 *puVar1;
  HWND pHVar2;
  HMODULE hInstance;
  LPVOID lpParam;
  
  FUN_662423b0();
  puVar1 = (undefined4 *)(**(code **)(*(int *)(param_1[3] + 8) + 0x1c))((int *)(param_1[3] + 8));
  pHVar2 = (HWND)*puVar1;
  do {
    hWnd = pHVar2;
    if (hWnd == (HWND)0x0) break;
    pHVar2 = GetParent(hWnd);
  } while (pHVar2 != (HWND)0x0);
  GetParent((HWND)*puVar1);
  lpParam = (LPVOID)0x0;
  hInstance = GetModuleHandleA((LPCSTR)0x0);
  pHVar2 = CreateWindowExA(0,PTR_s_RMAFullScreenWindowClass_6626fe8c,
                           PTR_s_RMAFullScreenWindow_6626fe90,0x80000000,0,0,100,100,hWnd,(HMENU)0x0
                           ,hInstance,lpParam);
  *param_1 = pHVar2;
  if (pHVar2 != (HWND)0x0) {
    SetWindowLongA(pHVar2,-0x15,(LONG)param_1);
    return 0;
  }
  return 0x80004005;
}


