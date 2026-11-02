/* Module: encn3260.dll
   Function: FUN_664b0680
   Address: 664b0680
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664b0680(void *this,HWND param_1)

{
  HINSTANCE hInstance;
  HWND pHVar1;
  LPVOID lpParam;
  
  FUN_664b0280();
  lpParam = (LPVOID)0x0;
  hInstance = (HINSTANCE)FUN_664b0670();
  pHVar1 = CreateWindowExA(0,s_CPNSiteStatusText_664e3738,&DAT_664f05c4,0x46000000,0,0,0,0,param_1,
                           (HMENU)0x0,hInstance,lpParam);
  *(HWND *)this = pHVar1;
  *(HWND *)((int)this + 4) = param_1;
  if (pHVar1 == (HWND)0x0) {
    return 0x80004005;
  }
  FUN_664c3e40(&DAT_664f0880,(uint)pHVar1,(int)this);
  if (*(int *)(*(int *)((int)this + 0x48) + -8) != 0) {
    FUN_664b0760(this);
    InvalidateRect(*(HWND *)this,(RECT *)0x0,1);
    UpdateWindow(*(HWND *)this);
  }
  FUN_664b07b0(this);
  return 0;
}


