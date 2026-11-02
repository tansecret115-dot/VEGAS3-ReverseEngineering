/* Module: encn3260.dll
   Function: WindowProc
   Address: 664ac970
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static long __stdcall CPNNewFullScreenWindow::WindowProc(struct HWND__ *,unsigned
   int,unsigned int,long) */

long CPNNewFullScreenWindow::WindowProc(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  void *this;
  LRESULT LVar1;
  bool bVar2;
  
                    /* 0x2c970  13  ?WindowProc@CPNNewFullScreenWindow@@SGJPAUHWND__@@IIJ@Z */
  this = (void *)GetWindowLongA(param_1,-0x15);
  if (this != (void *)0x0) {
    if (param_2 == 0x10) {
      FUN_664aca00(this,0x102,0x1b,0);
      return 0;
    }
    if (param_2 == 0x1c) {
      bVar2 = param_3 == 0;
    }
    else {
      if (param_2 != 0x105) goto LAB_664ac9e9;
      bVar2 = param_3 == 9;
    }
    if ((bVar2) && (*(int *)((int)this + 0x10) != 0)) {
      FUN_664aca00(this,0x102,0x1b,0);
      LVar1 = DefWindowProcA(param_1,param_2,param_3,param_4);
      return LVar1;
    }
  }
LAB_664ac9e9:
  LVar1 = DefWindowProcA(param_1,param_2,param_3,param_4);
  return LVar1;
}


