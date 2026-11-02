/* Module: g2plug.dll
   Function: SfRealG2_GetDlgTemplate
   Address: 5f810270
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfRealG2_GetDlgTemplate(struct HWND__ *,struct _GUID *) */

long SfRealG2_GetDlgTemplate(HWND__ *param_1,_GUID *param_2)

{
  ulong uVar1;
  HWND hWnd;
  WPARAM wParam;
  ulong *puVar2;
  
                    /* 0x10270  36  ?SfRealG2_GetDlgTemplate@@YGJPAUHWND__@@PAU_GUID@@@Z */
  hWnd = GetDlgItem(param_1,0xc9);
  wParam = SendMessageA(hWnd,0x147,0,0);
  if (wParam != 0xffffffff) {
    puVar2 = (ulong *)SendMessageA(hWnd,0x150,wParam,0);
    param_2->Data1 = *puVar2;
    uVar1 = puVar2[1];
    param_2->Data2 = (short)uVar1;
    param_2->Data3 = (short)(uVar1 >> 0x10);
    *(ulong *)param_2->Data4 = puVar2[2];
    *(ulong *)(param_2->Data4 + 4) = puVar2[3];
    return 0;
  }
  return -0x7ff8ffa9;
}


