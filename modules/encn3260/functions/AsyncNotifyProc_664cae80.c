/* Module: encn3260.dll
   Function: AsyncNotifyProc
   Address: 664cae80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: static long __stdcall CAsyncSockN::AsyncNotifyProc(struct HWND__ *,unsigned
   int,unsigned int,long) */

long CAsyncSockN::AsyncNotifyProc(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  LRESULT LVar2;
  void *this;
  
                    /* 0x4ae80  2  ?AsyncNotifyProc@CAsyncSockN@@KGJPAUHWND__@@IIJ@Z */
  this = (void *)0x0;
  if (param_2 == 0x81) {
    this = *(void **)param_4;
    SetWindowLongA(param_1,0,(LONG)this);
  }
  else if (param_2 == 0x82) {
    SetWindowLongA(param_1,0,0);
  }
  else {
    this = (void *)GetWindowLongA(param_1,0);
  }
  if (this != (void *)0x0) {
    if (param_2 == 0x465) {
      lVar1 = FUN_664cb010(this,param_3,(int *)param_4);
      return lVar1;
    }
    if (param_2 == 0x466) {
      lVar1 = FUN_664caf70(this,(int *)param_3,param_4);
      return lVar1;
    }
  }
  LVar2 = DefWindowProcA(param_1,param_2,param_3,param_4);
  return LVar2;
}


