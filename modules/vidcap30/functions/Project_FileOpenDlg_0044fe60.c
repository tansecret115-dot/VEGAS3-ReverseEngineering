/* Module: vidcap30.exe
   Function: Project_FileOpenDlg
   Address: 0044fe60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Project_FileOpenDlg(struct HWND__ *,char *,unsigned short *,int,int,char const
   *,int) */

long Project_FileOpenDlg(HWND__ *param_1,char *param_2,ushort *param_3,int param_4,int param_5,
                        char *param_6,int param_7)

{
  HCURSOR pHVar1;
  HGLOBAL pvVar2;
  LPCSTR pMem;
  BOOL BVar3;
  int iVar4;
  void **ppvVar5;
  tagOFNA *ptVar6;
  tagOFNA local_1b4 [2];
  CHAR local_104 [260];
  
                    /* 0x4fe60  63  ?Project_FileOpenDlg@@YGJPAUHWND__@@PADPAGHHPBDH@Z */
  ppvVar5 = (void **)0x0;
  SetCapture(param_1);
  pHVar1 = (HCURSOR)_SfLoadCursor_8(0,0x7f02);
  pHVar1 = SetCursor(pHVar1);
  SetCursor(pHVar1);
  ReleaseCapture();
  pvVar2 = GlobalAlloc(0,0x30c);
  pMem = GlobalLock(pvVar2);
  if (pMem == (LPCSTR)0x0) {
    return -0x7ff8fff2;
  }
  _SfLoadString_16(DAT_005ba2a0,param_5,pMem,0x30c);
  _SfStringReplaceChars_12(pMem,9,0);
  if (param_7 != 0) {
    _SfLoadString_16(DAT_005ba2a0,param_7,&local_1b4[0].pvReserved,100);
    ppvVar5 = &local_1b4[0].pvReserved;
  }
  ptVar6 = local_1b4;
  for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
    ptVar6->lStructSize = 0;
    ptVar6 = (tagOFNA *)&ptVar6->hwndOwner;
  }
  local_1b4[0].nFilterIndex = param_4;
  local_1b4[0].lpstrDefExt = param_6;
  *param_2 = '\0';
  local_1b4[0].lpstrInitialDir = local_104;
  local_104[0] = '\0';
  local_1b4[0].lStructSize = 0x4c;
  local_1b4[0].hwndOwner = param_1;
  local_1b4[0].lpstrFile = param_2;
  local_1b4[0].nMaxFile = 0x104;
  local_1b4[0].lpTemplateName = (LPCSTR)0x0;
  local_1b4[0].lpstrFilter = pMem;
  local_1b4[0].lpstrTitle = (LPCSTR)ppvVar5;
  local_1b4[0].hInstance = (HINSTANCE)_SfFindResInstance_12(DAT_005ba2a0,0,5);
  local_1b4[0].lpfnHook = (LPOFNHOOKPROC)&LAB_0044fff0;
  local_1b4[0].Flags = local_1b4[0].Flags | 0x81224;
  BVar3 = GetOpenFileNameA(local_1b4);
  *param_3 = local_1b4[0].nFileOffset;
  pvVar2 = GlobalHandle(pMem);
  GlobalUnlock(pvVar2);
  pvVar2 = GlobalHandle(pMem);
  GlobalFree(pvVar2);
  return (uint)(BVar3 == 0);
}


