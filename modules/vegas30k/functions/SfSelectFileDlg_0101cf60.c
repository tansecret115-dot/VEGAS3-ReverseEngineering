/* Module: vegas30k.dll
   Function: SfSelectFileDlg
   Address: 0101cf60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfSelectFileDlg(struct HWND__ *,char const *,char *,unsigned int,char const *,int
   *,struct HSFMETRIC__ *,unsigned long,char *,unsigned long,int) */

long SfSelectFileDlg(HWND__ *param_1,char *param_2,char *param_3,uint param_4,char *param_5,
                    int *param_6,HSFMETRIC__ *param_7,ulong param_8,char *param_9,ulong param_10,
                    int param_11)

{
  long lVar1;
  
                    /* 0x1cf60  497
                       ?SfSelectFileDlg@@YGJPAUHWND__@@PBDPADI1PAHPAUHSFMETRIC__@@K2KH@Z */
  lVar1 = SfSelectFileDlgEx(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                            param_10,param_11,0x881024);
  return lVar1;
}


