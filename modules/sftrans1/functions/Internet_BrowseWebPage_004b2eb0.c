/* Module: sftrans1.dll
   Function: Internet_BrowseWebPage
   Address: 004b2eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* struct HINSTANCE__ * __stdcall Internet_BrowseWebPage(struct HWND__ *,char const *) */

HINSTANCE__ * Internet_BrowseWebPage(HWND__ *param_1,char *param_2)

{
  HWND hwnd;
  HINSTANCE pHVar1;
  LPCSTR lpOperation;
  LPCSTR lpParameters;
  CHAR *lpDirectory;
  INT nShowCmd;
  CHAR local_104 [260];
  
                    /* 0xb2eb0  16  ?Internet_BrowseWebPage@@YGPAUHINSTANCE__@@PAUHWND__@@PBD@Z */
  lpDirectory = local_104;
  GetWindowsDirectoryA(local_104,0x104);
  nShowCmd = 0;
  lpParameters = (LPCSTR)0x0;
  lpOperation = "open";
  hwnd = GetDesktopWindow();
  pHVar1 = ShellExecuteA(hwnd,lpOperation,param_2,lpParameters,lpDirectory,nShowCmd);
  return pHVar1;
}


