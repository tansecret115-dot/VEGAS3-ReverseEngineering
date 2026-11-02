/* Module: encn3260.dll
   Function: FUN_664a4f20
   Address: 664a4f20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_664a4f20(undefined4 *param_1)

{
  HMODULE pHVar1;
  HWND pHVar2;
  LPVOID pvVar3;
  
  FUN_664a4df0((int)param_1);
  pvVar3 = (LPVOID)0x0;
  pHVar1 = GetModuleHandleA((LPCSTR)0x0);
  pHVar2 = CreateWindowExA(0,PTR_s_RMAFullScreenWindowClass_664e31ec,
                           PTR_s_RMAFullScreenWindow_664e31f0,0x80000000,0,0,0,0,(HWND)0x0,
                           (HMENU)0x0,pHVar1,pvVar3);
  param_1[3] = pHVar2;
  SetWindowLongA(pHVar2,-0x15,(LONG)param_1);
  pHVar2 = (HWND)0x0;
  if (*(undefined4 **)(param_1[4] + 0x2c) != (undefined4 *)0x0) {
    pHVar2 = (HWND)**(undefined4 **)(param_1[4] + 0x2c);
  }
  pvVar3 = (LPVOID)0x0;
  pHVar1 = GetModuleHandleA((LPCSTR)0x0);
  pHVar2 = CreateWindowExA(0,PTR_s_RMAFullScreenWindowClass_664e31ec,
                           PTR_s_RMAFullScreenWindow_664e31f0,0x80000000,0,0,100,100,pHVar2,
                           (HMENU)0x0,pHVar1,pvVar3);
  *param_1 = pHVar2;
  if (pHVar2 == (HWND)0x0) {
    return 0x80004005;
  }
  SetWindowLongA(pHVar2,-0x15,(LONG)param_1);
  return 0;
}


