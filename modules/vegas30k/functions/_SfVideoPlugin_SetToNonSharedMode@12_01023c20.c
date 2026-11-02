/* Module: vegas30k.dll
   Function: _SfVideoPlugin_SetToNonSharedMode@12
   Address: 01023c20
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfVideoPlugin_SetToNonSharedMode_12(LPCSTR param_1,undefined4 param_2,undefined4 param_3)

{
  HANDLE hFindFile;
  BOOL BVar1;
  int iVar2;
  undefined1 local_348 [260];
  _WIN32_FIND_DATAA local_244;
  CHAR local_104 [260];
  
                    /* 0x23c20  1275  _SfVideoPlugin_SetToNonSharedMode@12 */
  iVar2 = 0;
  if (param_1 == (LPCSTR)0x0) {
    if (DAT_012099dc == 0) {
      return 0;
    }
  }
  else {
    if (DAT_012099dc != 0) {
      _SfList_Destroy_4(DAT_012099dc);
      DAT_012099dc = 0;
      DAT_012099e0 = 0;
      DAT_012099e4 = 0;
    }
    iVar2 = _SfList_CreateExZ_32(&DAT_012099dc,0x128,0xffffffff,0xffffffff,0x40000004,0,0,0);
    if (-1 < iVar2) {
      lstrcpynA(&DAT_012098d8,param_1,0x104);
      DAT_012099db = 0;
      _SfAddSlashToPathName_8(&DAT_012098d8,0x104);
      DAT_012099e0 = param_2;
      DAT_012099e4 = param_3;
      SfPrintF(local_104,"%s*.DLL",&DAT_012098d8);
      hFindFile = FindFirstFileA(local_104,&local_244);
      if (hFindFile == (HANDLE)0xffffffff) {
LAB_01023d88:
        if (-1 < iVar2) {
          return iVar2;
        }
      }
      else {
        SfPrintF(local_348,&DAT_011db124,&DAT_012098d8,local_244.cFileName);
        iVar2 = FUN_01023b80(local_348,DAT_012099dc);
        while (-1 < iVar2) {
          BVar1 = FindNextFileA(hFindFile,&local_244);
          if (BVar1 == 0) goto LAB_01023d88;
          SfPrintF(local_348,&DAT_011db124,&DAT_012098d8,local_244.cFileName);
          iVar2 = FUN_01023b80(local_348,DAT_012099dc);
        }
      }
    }
    if (DAT_012099dc == 0) {
      DAT_012098d8 = 0;
      DAT_012099e0 = 0;
      DAT_012099e4 = 0;
      return iVar2;
    }
  }
  _SfList_Destroy_4(DAT_012099dc);
  DAT_012099e4 = 0;
  DAT_012099e0 = 0;
  DAT_012099dc = 0;
  DAT_012098d8 = 0;
  return iVar2;
}


