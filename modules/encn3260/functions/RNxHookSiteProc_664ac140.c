/* Module: encn3260.dll
   Function: RNxHookSiteProc
   Address: 664ac140
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall RNxHookSiteProc(struct HWND__ *,unsigned int,unsigned int,long) */

long RNxHookSiteProc(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  LRESULT LVar1;
  int iVar2;
  int local_c;
  void *local_8;
  
                    /* 0x2c140  10  ?RNxHookSiteProc@@YGJPAUHWND__@@IIJ@Z */
  local_c = 0;
  local_8 = (void *)0x0;
  FUN_664c3eb0(&DAT_664f0778,(uint)param_1,(int *)&local_8);
  if (local_8 == (void *)0x0) {
    LVar1 = DefWindowProcA(param_1,param_2,param_3,param_4);
    return LVar1;
  }
  iVar2 = FUN_664ab870(local_8,param_1,param_2,(int *)param_3,(HWND)param_4,&local_c);
  if (iVar2 != 0) {
    return local_c;
  }
  LVar1 = CallWindowProcA(*(WNDPROC *)((int)local_8 + 0x228),param_1,param_2,param_3,param_4);
  return LVar1;
}


