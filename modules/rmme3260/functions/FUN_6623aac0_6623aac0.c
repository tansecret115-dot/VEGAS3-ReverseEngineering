/* Module: rmme3260.dll
   Function: FUN_6623aac0
   Address: 6623aac0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6623aac0(undefined4 *param_1)

{
  HMODULE pHVar1;
  HWND pHVar2;
  LPVOID pvVar3;
  
  FUN_6623a990((int)param_1);
  pvVar3 = (LPVOID)0x0;
  pHVar1 = GetModuleHandleA((LPCSTR)0x0);
  pHVar2 = CreateWindowExA(0,PTR_s_RMAFullScreenWindowClass_6626fcc8,
                           PTR_s_RMAFullScreenWindow_6626fccc,0x80000000,0,0,0,0,(HWND)0x0,
                           (HMENU)0x0,pHVar1,pvVar3);
  param_1[3] = pHVar2;
  SetWindowLongA(pHVar2,-0x15,(LONG)param_1);
  pHVar2 = (HWND)0x0;
  if (*(undefined4 **)(param_1[4] + 0x2c) != (undefined4 *)0x0) {
    pHVar2 = (HWND)**(undefined4 **)(param_1[4] + 0x2c);
  }
  pvVar3 = (LPVOID)0x0;
  pHVar1 = GetModuleHandleA((LPCSTR)0x0);
  pHVar2 = CreateWindowExA(0,PTR_s_RMAFullScreenWindowClass_6626fcc8,
                           PTR_s_RMAFullScreenWindow_6626fccc,0x80000000,0,0,100,100,pHVar2,
                           (HMENU)0x0,pHVar1,pvVar3);
  *param_1 = pHVar2;
  if (pHVar2 == (HWND)0x0) {
    return 0x80004005;
  }
  SetWindowLongA(pHVar2,-0x15,(LONG)param_1);
  return 0;
}


