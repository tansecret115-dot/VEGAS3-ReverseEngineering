/* Module: vegas30k.dll
   Function: SfWtsGetSpecialFolderPath
   Address: 01003bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfWtsGetSpecialFolderPath(struct HWND__ *,char *,unsigned long,int) */

int SfWtsGetSpecialFolderPath(HWND__ *param_1,char *param_2,ulong param_3,int param_4)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  
                    /* 0x3bc0  525  ?SfWtsGetSpecialFolderPath@@YGHPAUHWND__@@PADKH@Z */
  hModule = GetModuleHandleA("shell32.dll");
  pFVar1 = GetProcAddress(hModule,"SHGetSpecialFolderPathA");
  if (pFVar1 != (FARPROC)0x0) {
    iVar2 = (*pFVar1)(param_1,param_2,param_3,param_4);
    return iVar2;
  }
  return 0;
}


