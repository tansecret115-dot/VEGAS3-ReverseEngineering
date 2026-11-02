/* Module: vegas30.exe
   Function: Project_FileOpenDlg
   Address: 0055c380
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Project_FileOpenDlg(struct HWND__ *,char *,struct SFFILE_DLG_PARAMS *,struct
   SFFILETYPEINFO *) */

long Project_FileOpenDlg(HWND__ *param_1,char *param_2,SFFILE_DLG_PARAMS *param_3,
                        SFFILETYPEINFO *param_4)

{
  HCURSOR hCursor;
  BOOL BVar1;
  HGLOBAL pvVar2;
  int iVar3;
  SFFILE_DLG_PARAMS **ppSVar4;
  tagOFNA *ptVar5;
  LPCSTR local_48c;
  DWORD local_488;
  HCURSOR local_484;
  tagOFNA local_480 [3];
  undefined1 local_331;
  SFFILE_DLG_PARAMS *local_330;
  SFFILETYPEINFO *local_32c;
  undefined1 local_324 [804];
  
                    /* 0x15c380  15
                       ?Project_FileOpenDlg@@YGJPAUHWND__@@PADPAUSFFILE_DLG_PARAMS@@PAUSFFILETYPEINFO@@@Z
                        */
  local_48c = (LPCSTR)0x0;
  SetCapture(param_1);
  hCursor = (HCURSOR)_SfLoadCursor_8(0,0x7f02);
  local_484 = SetCursor(hCursor);
  ppSVar4 = &local_330;
  for (iVar3 = 0xcc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppSVar4 = (SFFILE_DLG_PARAMS *)0x0;
    ppSVar4 = ppSVar4 + 1;
  }
  local_32c = param_4;
  local_330 = param_3;
  local_488 = 1;
  FUN_0055d690(&local_48c,local_324,&local_488,*(undefined4 *)(param_3 + 8));
  SetCursor(local_484);
  ReleaseCapture();
  local_480[0].lCustData = (LPARAM)&local_330;
  ptVar5 = local_480;
  for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
    ptVar5->lStructSize = 0;
    ptVar5 = (tagOFNA *)&ptVar5->hwndOwner;
  }
  local_480[0].lpstrTitle = *(LPCSTR *)param_3;
  local_480[0].lpstrFilter = local_48c;
  *param_2 = '\0';
  local_480[0].lpstrFile = param_2;
  local_480[0].lStructSize = 0x4c;
  local_480[0].lpstrCustomFilter = (LPSTR)0x0;
  local_480[0].nMaxCustFilter = 0;
  local_480[0].nFilterIndex = 1;
  local_480[0].nFileOffset = 0;
  local_480[0].nFileExtension = 0;
  local_480[0].lpstrDefExt = (LPCSTR)0x0;
  local_480[0].hwndOwner = param_1;
  local_480[0].Flags = 0x801060;
  if (((byte)param_3[8] & 1) == 0) {
    local_480[0].nMaxFile = 0x104;
  }
  else {
    local_480[0].nMaxFile = *(DWORD *)(param_3 + 0xc);
    local_480[0].Flags = 0x801260;
  }
  local_480[0].Flags = local_480[0].Flags | 0x80004;
  local_480[0].lpfnHook = (LPOFNHOOKPROC)&LAB_0055c590;
  local_480[0].lpTemplateName = (LPCSTR)0x343;
  local_480[0].hInstance = (HINSTANCE)_SfFindResInstance_12(DAT_00647204,0x343,5);
  local_480[0].nFilterIndex = DAT_00649dfc;
  local_480[0].pvReserved._0_1_ = 0;
  lstrcpynA((LPSTR)&local_480[0].pvReserved,&DAT_00649cf8,0x104);
  local_480[0].lpstrInitialDir = (LPCSTR)&local_480[0].pvReserved;
  local_331 = 0;
  if (*(int *)(param_3 + 0x20) == 0) {
    if (*(int *)(param_3 + 0x24) == 1) {
      local_480[0].nFilterIndex = local_488;
    }
  }
  else {
    local_480[0].nFilterIndex = FUN_0055dd10(*(int *)(param_3 + 0x20),local_48c);
  }
  BVar1 = GetOpenFileNameA(local_480);
  if (BVar1 != 0) {
    FUN_0055d930(local_480[0].lpstrFile,local_480[0]._56_4_ & 0xffff);
    DAT_00649dfc = local_480[0].nFilterIndex;
    *(uint *)(param_3 + 0x10) = local_480[0]._56_4_ & 0xffff;
  }
  if (local_48c != (LPCSTR)0x0) {
    pvVar2 = GlobalHandle(local_48c);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(local_48c);
    GlobalFree(pvVar2);
  }
  return (uint)(BVar1 == 0);
}


