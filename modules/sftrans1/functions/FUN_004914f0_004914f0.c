/* Module: sftrans1.dll
   Function: FUN_004914f0
   Address: 004914f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004914f0(HWND param_1,LPARAM *param_2)

{
  LPARAM *pLVar1;
  int iVar2;
  WPARAM wParam;
  
  if (param_1 != (HWND)0x0) {
    wParam = 0;
    iVar2 = lstrcmpA((LPCSTR)*param_2,"");
    while (iVar2 != 0) {
      SendMessageA(param_1,0x143,wParam,*param_2);
      pLVar1 = param_2 + 1;
      param_2 = param_2 + 1;
      wParam = wParam + 1;
      iVar2 = lstrcmpA((LPCSTR)*pLVar1,"");
    }
  }
  return;
}


