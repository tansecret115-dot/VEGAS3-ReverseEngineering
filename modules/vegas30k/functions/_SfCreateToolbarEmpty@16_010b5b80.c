/* Module: vegas30k.dll
   Function: _SfCreateToolbarEmpty@16
   Address: 010b5b80
   Source: Ghidra pseudocode (Stage 10 batch) */


HWND _SfCreateToolbarEmpty_16(undefined4 param_1,HWND param_2,DWORD param_3,HMENU param_4)

{
  HINSTANCE hInstance;
  HWND hWnd;
  LPVOID lpParam;
  
                    /* 0xb5b80  800  _SfCreateToolbarEmpty@16 */
  lpParam = (LPVOID)0x0;
  hInstance = (HINSTANCE)_SfLang_InstFromLang_4(param_1);
  hWnd = CreateWindowExA(0,"ToolbarWindow32",(LPCSTR)0x0,param_3,0,0,0,0,param_2,param_4,hInstance,
                         lpParam);
  if (hWnd != (HWND)0x0) {
    SendMessageA(hWnd,0x41e,0x14,0);
  }
  return hWnd;
}


