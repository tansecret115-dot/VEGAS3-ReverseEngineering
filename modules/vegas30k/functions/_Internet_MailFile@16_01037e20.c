/* Module: vegas30k.dll
   Function: _Internet_MailFile@16
   Address: 01037e20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _Internet_MailFile_16(HWND param_1,LPCSTR param_2,LPCSTR param_3,LPCSTR param_4)

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
  CHAR *local_350 [4];
  CHAR *local_340;
  CHAR *local_338 [10];
  undefined4 local_310;
  undefined1 **local_30c;
  CHAR local_308 [254];
  undefined1 local_20a;
  CHAR local_208 [260];
  CHAR local_104 [260];
  
                    /* 0x37e20  673  _Internet_MailFile@16 */
  hModule = LoadLibraryA("MAPI32.DLL");
  if (hModule == (HMODULE)0x0) {
    return 0x80004005;
  }
  pFVar1 = GetProcAddress(hModule,"MAPISendMail");
  if (pFVar1 == (FARPROC)0x0) {
    FreeLibrary(hModule);
    return 0x80004005;
  }
  lstrcpyA(local_208,param_2);
  lstrcpyA(local_104,param_3);
  ppCVar4 = local_350;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppCVar4 = (CHAR *)0x0;
    ppCVar4 = ppCVar4 + 1;
  }
  local_350[3] = local_208;
  local_350[2] = (CHAR *)0xffffffff;
  local_340 = local_104;
  hCursor = (HCURSOR)_SfLoadCursor_8(DAT_0120e5c8,0x7f02);
  SetCursor(hCursor);
  ppCVar4 = local_338;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppCVar4 = (CHAR *)0x0;
    ppCVar4 = ppCVar4 + 1;
  }
  local_30c = local_350;
  local_310 = 1;
  lstrcpynA(local_308,param_4,0xff);
  local_338[1] = local_308;
  local_20a = 0;
  EnableWindow(param_1,0);
  SetCapture(param_1);
  SetFocus((HWND)0x0);
  uVar5 = 0;
  iVar2 = (*pFVar1)(0,param_1,local_338,9);
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


