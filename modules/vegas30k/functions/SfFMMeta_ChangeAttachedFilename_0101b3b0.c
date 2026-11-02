/* Module: vegas30k.dll
   Function: SfFMMeta_ChangeAttachedFilename
   Address: 0101b3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfFMMeta_ChangeAttachedFilename(char const *,char const *) */

long SfFMMeta_ChangeAttachedFilename(char *param_1,char *param_2)

{
  HANDLE hObject;
  int iVar1;
  long lVar2;
  DWORD DVar3;
  
                    /* 0x1b3b0  382  ?SfFMMeta_ChangeAttachedFilename@@YGJPBD0@Z */
  if ((param_2 == (char *)0x0) || (param_1 == (char *)0x0)) {
    return -0x7fffbffb;
  }
  hObject = CreateFileA(param_1,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hObject == (HANDLE)0xffffffff) {
    DVar3 = GetLastError();
    lVar2 = _SfErrorHandler_TranslateWin32Error_4(DVar3);
    return lVar2;
  }
  iVar1 = riff_DeleteChunk(hObject,0x49504653,0,0);
  if ((iVar1 < 0) && (iVar1 != -0x7ffb1ff6)) {
    CloseHandle(hObject);
    return iVar1;
  }
  lVar2 = FUN_0101b2c0(hObject,param_2);
  CloseHandle(hObject);
  return lVar2;
}


