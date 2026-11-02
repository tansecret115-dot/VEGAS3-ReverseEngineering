/* Module: encn3260.dll
   Function: CPNSiteStatusTextProc
   Address: 664b0220
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall CPNSiteStatusTextProc(struct HWND__ *,unsigned int,unsigned int,long) */

long CPNSiteStatusTextProc(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  int iVar1;
  LRESULT LVar2;
  void *local_8;
  
                    /* 0x30220  3  ?CPNSiteStatusTextProc@@YGJPAUHWND__@@IIJ@Z */
  local_8 = (void *)0x0;
  iVar1 = FUN_664c3eb0(&DAT_664f0880,(uint)param_1,(int *)&local_8);
  if ((iVar1 != 0) && (local_8 != (void *)0x0)) {
    LVar2 = FUN_664b0370(local_8,param_1,param_2,param_3,param_4);
    return LVar2;
  }
  LVar2 = DefWindowProcA(param_1,param_2,param_3,param_4);
  return LVar2;
}


