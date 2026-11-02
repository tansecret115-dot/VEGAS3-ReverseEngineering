/* Module: vegas30k.dll
   Function: SfSelectDirectoryDlg
   Address: 0101cc10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfSelectDirectoryDlg(struct HWND__ *,char const *,char *,unsigned int) */

long SfSelectDirectoryDlg(HWND__ *param_1,char *param_2,char *param_3,uint param_4)

{
  long lVar1;
  
                    /* 0x1cc10  495  ?SfSelectDirectoryDlg@@YGJPAUHWND__@@PBDPADI@Z */
  lVar1 = SfSelectDirectoryDlgEx(param_1,param_2,param_3,param_4,0,0);
  return lVar1;
}


