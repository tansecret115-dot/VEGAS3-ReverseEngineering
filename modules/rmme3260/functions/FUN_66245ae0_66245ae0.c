/* Module: rmme3260.dll
   Function: FUN_66245ae0
   Address: 66245ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66245ae0(void *this,HWND param_1)

{
  HINSTANCE hInstance;
  HWND pHVar1;
  LPVOID lpParam;
  
  FUN_662456f0();
  lpParam = (LPVOID)0x0;
  hInstance = (HINSTANCE)FUN_662379e0();
  pHVar1 = CreateWindowExA(0,s_CPNSiteStatusText_66270224,&DAT_6627cf3c,0x46000000,0,0,0,0,param_1,
                           (HMENU)0x0,hInstance,lpParam);
  *(HWND *)this = pHVar1;
  *(HWND *)((int)this + 4) = param_1;
  if (pHVar1 == (HWND)0x0) {
    return 0x80004005;
  }
  FUN_66250fc0(&DAT_6627d088,(uint)pHVar1,(int)this);
  if (*(int *)(*(int *)((int)this + 0x48) + -8) != 0) {
    FUN_66245bc0(this);
    InvalidateRect(*(HWND *)this,(RECT *)0x0,1);
    UpdateWindow(*(HWND *)this);
  }
  FUN_66245c10(this);
  return 0;
}


