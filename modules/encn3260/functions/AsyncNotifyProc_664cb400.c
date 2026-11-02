/* Module: encn3260.dll
   Function: AsyncNotifyProc
   Address: 664cb400
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: static long __stdcall CAsyncNetThread::AsyncNotifyProc(struct HWND__ *,unsigned
   int,unsigned int,long) */

long CAsyncNetThread::AsyncNotifyProc(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  BOOL BVar2;
  LRESULT LVar3;
  void *this;
  
                    /* 0x4b400  1  ?AsyncNotifyProc@CAsyncNetThread@@KGJPAUHWND__@@IIJ@Z */
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
    switch(param_2) {
    case 0x465:
      lVar1 = FUN_664cb730(this,param_3,param_4);
      return lVar1;
    case 0x466:
      lVar1 = FUN_664cb770(this,param_3,param_4);
      return lVar1;
    case 0x467:
      lVar1 = FUN_664cb7b0(this,param_3);
      return lVar1;
    case 0x468:
      lVar1 = FUN_664cb7f0(this,param_3);
      return lVar1;
    case 0x46d:
      lVar1 = FUN_664cb830(this,param_3);
      return lVar1;
    }
  }
  if (param_2 == DAT_664f2a50) {
    BVar2 = DestroyWindow(param_1);
    if (this != (void *)0x0) {
      FUN_664cb3c0((int)this);
      operator_delete(this);
    }
    return BVar2;
  }
  LVar3 = DefWindowProcA(param_1,param_2,param_3,param_4);
  return LVar3;
}


