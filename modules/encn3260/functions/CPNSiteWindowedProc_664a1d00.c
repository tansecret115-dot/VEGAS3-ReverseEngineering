/* Module: encn3260.dll
   Function: CPNSiteWindowedProc
   Address: 664a1d00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall CPNSiteWindowedProc(struct HWND__ *,unsigned int,unsigned int,long) */

long CPNSiteWindowedProc(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  LRESULT LVar1;
  
                    /* 0x21d00  4  ?CPNSiteWindowedProc@@YGJPAUHWND__@@IIJ@Z
                       0x21d00  5  ?CRNSiteWindowedProc@@YGJPAUHWND__@@IIJ@Z */
  LVar1 = DefWindowProcA(param_1,param_2,param_3,param_4);
  return LVar1;
}


