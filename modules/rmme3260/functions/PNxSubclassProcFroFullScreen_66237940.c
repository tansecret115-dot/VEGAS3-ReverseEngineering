/* Module: rmme3260.dll
   Function: PNxSubclassProcFroFullScreen
   Address: 66237940
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall PNxSubclassProcFroFullScreen(struct HWND__ *,unsigned int,unsigned int,long) */

long PNxSubclassProcFroFullScreen(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  WNDPROC lpPrevWndFunc;
  void *pvVar1;
  int iVar2;
  LRESULT LVar3;
  long local_c;
  void *local_8;
  
                    /* 0x37940  7  ?PNxSubclassProcFroFullScreen@@YGJPAUHWND__@@IIJ@Z */
  local_c = 0;
  local_8 = (void *)0x0;
  iVar2 = FUN_66251030(&DAT_6627cea0,(uint)param_1,(int *)&local_8);
  pvVar1 = local_8;
  if (iVar2 != 0) {
    if ((local_8 != (void *)0x0) &&
       (iVar2 = FUN_66237460(local_8,param_1,param_2,param_3,param_4,&local_c), iVar2 != 0)) {
      return local_c;
    }
    if ((pvVar1 != (void *)0x0) &&
       (lpPrevWndFunc = *(WNDPROC *)((int)pvVar1 + 0xfd), lpPrevWndFunc != (WNDPROC)0x0)) {
      LVar3 = CallWindowProcA(lpPrevWndFunc,param_1,param_2,param_3,param_4);
      return LVar3;
    }
  }
  LVar3 = DefWindowProcA(param_1,param_2,param_3,param_4);
  return LVar3;
}


