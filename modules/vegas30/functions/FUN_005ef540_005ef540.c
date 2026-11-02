/* Module: vegas30.exe
   Function: FUN_005ef540
   Address: 005ef540
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005ef540(LPCSTR param_1,undefined4 param_2)

{
  HANDLE hObject;
  int iVar1;
  DWORD DVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10 [4];
  
  hObject = CreateFileA(param_1,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hObject == (HANDLE)0xffffffff) {
    DVar2 = GetLastError();
    iVar1 = _SfErrorHandler_TranslateWin32Error_4(DVar2);
    return iVar1;
  }
  iVar1 = riff64_ReadFileID(hObject,&local_18,local_10);
  if (-1 < iVar1) {
    iVar1 = 4;
    bVar5 = true;
    piVar3 = local_10;
    piVar4 = &DAT_0062c758;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar5 = *piVar3 == *piVar4;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (bVar5);
    iVar1 = -0x7ffb1ff5;
    if (bVar5) {
      riff64_SkipChunk(hObject,local_18,local_14);
      local_20 = 0;
      local_1c = 0;
      iVar1 = riff64_WriteChunk(hObject,DAT_0062c768,DAT_0062c76c,DAT_0062c770,DAT_0062c774,param_2,
                                0x14,0,&local_20);
      if (-1 < iVar1) {
        iVar1 = riff64_UpdateRIFFSize(hObject,local_20,local_1c);
      }
    }
  }
  CloseHandle(hObject);
  return iVar1;
}


