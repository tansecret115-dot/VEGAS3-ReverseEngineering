/* Module: mp3plug.dll
   Function: FUN_5f6858c0
   Address: 5f6858c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6858c0(undefined4 param_1,LPCSTR param_2)

{
  HWND hwnd;
  LPCSTR lpOperation;
  LPCSTR lpParameters;
  CHAR *lpDirectory;
  INT nShowCmd;
  CHAR local_104 [260];
  
  lpDirectory = local_104;
  GetWindowsDirectoryA(local_104,0x104);
  nShowCmd = 0;
  lpParameters = (LPCSTR)0x0;
  lpOperation = "open";
  hwnd = GetDesktopWindow();
  ShellExecuteA(hwnd,lpOperation,param_2,lpParameters,lpDirectory,nShowCmd);
  return;
}


