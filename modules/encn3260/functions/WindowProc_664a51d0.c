/* Module: encn3260.dll
   Function: WindowProc
   Address: 664a51d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static long __stdcall CPNFullScreenWindow::WindowProc(struct HWND__ *,unsigned
   int,unsigned int,long) */

long CPNFullScreenWindow::WindowProc(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  void *this;
  HDC hDC;
  HBRUSH hbr;
  HCURSOR hCursor;
  LRESULT LVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  tagPAINTSTRUCT local_54;
  tagRECT local_14;
  
                    /* 0x251d0  12  ?WindowProc@CPNFullScreenWindow@@SGJPAUHWND__@@IIJ@Z */
  this = (void *)GetWindowLongA(param_1,-0x15);
  if ((this == (void *)0x0) || (param_1 == *(HWND__ **)((int)this + 0xc)))
  goto switchD_664a5214_caseD_11;
  switch(param_2) {
  case 0xf:
    hDC = BeginPaint(param_1,&local_54);
    GetClientRect(param_1,&local_14);
    hbr = GetStockObject(4);
    FillRect(hDC,&local_14,hbr);
    EndPaint(param_1,&local_54);
    return 0;
  case 0x10:
    FUN_664a53f0(this,0x102,0x1b,0);
    return 0;
  default:
    goto switchD_664a5214_caseD_11;
  case 0x1c:
    if ((param_3 != 0) || (*(int *)((int)this + 0x14) == 0)) goto switchD_664a5214_caseD_11;
    uVar3 = 0x1b;
    uVar2 = 0x102;
    lVar4 = 0;
    break;
  case 0x20:
    if ((short)param_4 != -2) {
      hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
      SetCursor(hCursor);
      return 1;
    }
    goto switchD_664a5214_caseD_11;
  case 0x102:
    uVar2 = param_2;
    uVar3 = param_3;
    lVar4 = param_4;
  }
  FUN_664a53f0(this,uVar2,uVar3,lVar4);
switchD_664a5214_caseD_11:
  LVar1 = DefWindowProcA(param_1,param_2,param_3,param_4);
  return LVar1;
}


