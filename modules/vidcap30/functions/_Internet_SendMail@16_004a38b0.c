/* Module: vidcap30.exe
   Function: _Internet_SendMail@16
   Address: 004a38b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _Internet_SendMail_16(HWND param_1,LPCSTR param_2,LPCSTR param_3,LPCSTR param_4)

{
  HMODULE hModule;
  FARPROC pFVar1;
  HCURSOR hCursor;
  HWND hWnd;
  int iVar2;
  HCURSOR unaff_EBX;
  undefined4 uVar3;
  HMODULE unaff_EDI;
  CHAR **ppCVar4;
  undefined4 uVar5;
  CHAR *local_348 [6];
  CHAR *local_330 [8];
  undefined4 local_310;
  undefined1 **local_30c;
  CHAR local_300 [254];
  undefined1 local_202;
  CHAR local_200 [254];
  undefined1 local_102;
  CHAR local_100 [254];
  undefined1 local_2;
  
                    /* 0xa38b0  178  _Internet_SendMail@16 */
  hModule = LoadLibraryA("MAPI32.DLL");
  if (hModule == (HMODULE)0x0) {
    return 0x80004005;
  }
  pFVar1 = GetProcAddress(hModule,"MAPISendMail");
  if (pFVar1 == (FARPROC)0x0) {
    FreeLibrary(hModule);
    return 0x80004005;
  }
  ppCVar4 = local_330;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppCVar4 = (CHAR *)0x0;
    ppCVar4 = ppCVar4 + 1;
  }
  ppCVar4 = local_348;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppCVar4 = (CHAR *)0x0;
    ppCVar4 = ppCVar4 + 1;
  }
  lstrcpynA(local_200,param_3,0xff);
  local_102 = 0;
  lstrcpynA(local_100,param_4,0xff);
  local_2 = 0;
  lstrcpynA(local_300,param_2,0xff);
  local_330[1] = local_300;
  local_348[2] = local_200;
  local_348[1] = (CHAR *)0x1;
  local_310 = 1;
  local_348[3] = local_100;
  local_30c = local_348;
  local_202 = 0;
  hCursor = (HCURSOR)_SfLoadCursor_8(DAT_005c16d8,0x7f02);
  SetCursor(hCursor);
  EnableWindow(param_1,0);
  SetCapture(param_1);
  SetFocus((HWND)0x0);
  uVar5 = 0;
  iVar2 = (*pFVar1)(0,param_1,local_330,9);
  ReleaseCapture();
  EnableWindow(param_1,1);
  hWnd = GetDesktopWindow();
  SetActiveWindow(hWnd);
  SetActiveWindow(param_1);
  SetFocus(param_1);
  if (((iVar2 == 0) || (iVar2 == 1)) || (uVar3 = 0x80004005, iVar2 == 3)) {
    uVar3 = uVar5;
  }
  FreeLibrary(unaff_EDI);
  SetCursor(unaff_EBX);
  return uVar3;
}


