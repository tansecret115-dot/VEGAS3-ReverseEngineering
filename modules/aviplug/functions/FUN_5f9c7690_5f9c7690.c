/* Module: aviplug.dll
   Function: FUN_5f9c7690
   Address: 5f9c7690
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f9c7690(undefined4 param_1,char *param_2)

{
  HWND hwnd;
  LPCSTR lpOperation;
  LPCSTR lpParameters;
  CHAR *lpDirectory;
  INT nShowCmd;
  CHAR local_104 [260];
  
  lpDirectory = local_104;
  GetWindowsDirectoryA(local_104,0x104);
  switch(param_2) {
  case (char *)0x65:
    param_2 = "http://www.sonicfoundry.com/productinfo.asp?Place=News";
    break;
  case (char *)0x66:
    param_2 = "http://www.sonicfoundry.com/productinfo.asp?Place=FAQ";
    break;
  case (char *)0x67:
    param_2 = "http://www.sonicfoundry.com/productinfo.asp?Place=Support";
    break;
  case (char *)0x68:
    param_2 = "http://www.sonicfoundry.com/productinfo.asp?Place=Home";
    break;
  case (char *)0x69:
    param_2 = "http://www.sonicfoundry.com/productinfo.asp?Product=SoftEncode";
  }
  nShowCmd = 0;
  lpParameters = (LPCSTR)0x0;
  lpOperation = "open";
  hwnd = GetDesktopWindow();
  ShellExecuteA(hwnd,lpOperation,param_2,lpParameters,lpDirectory,nShowCmd);
  return;
}


