/* Module: vegas30k.dll
   Function: SfFMMeta_UpdateMetaStreamEx
   Address: 0101c540
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfFMMeta_UpdateMetaStreamEx(char *,int,unsigned long,struct ISfReadMeta *,enum
   SFFIO_TYPESOFMETADATA) */

long SfFMMeta_UpdateMetaStreamEx
               (char *param_1,int param_2,ulong param_3,ISfReadMeta *param_4,
               SFFIO_TYPESOFMETADATA param_5)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  DWORD DVar3;
  long lVar4;
  char *lpFileName;
  int *local_10c;
  int local_108;
  char local_104 [260];
  
                    /* 0x1c540  388
                       ?SfFMMeta_UpdateMetaStreamEx@@YGJPADHKPAUISfReadMeta@@W4SFFIO_TYPESOFMETADATA@@@Z
                        */
  lVar4 = 0;
  local_108 = 0;
  iVar1 = FUN_0101c3d0(param_4,param_5);
  if (param_2 == 0) {
    SfFMMeta_CreateMetaName(param_1,local_104,0x104,1);
    iVar2 = SfFMMeta_IsMetaFile(param_1,local_104);
    if (iVar2 == 0) {
      SfFMMeta_CreateMetaName(param_1,local_104,0x104,0);
      iVar2 = SfFMMeta_IsMetaFile(param_1,local_104);
      if (iVar2 != 0) goto LAB_0101c68e;
    }
    else {
LAB_0101c68e:
      lVar4 = SfFMMeta_DeleteMetaChunks(local_104);
    }
    SfFMMeta_DeleteMetaChunks(param_1);
    lpFileName = param_1;
    if (iVar1 == 0) {
      return lVar4;
    }
  }
  else {
    SfFMMeta_CreateMetaName(param_1,local_104,0x104,0);
    iVar2 = SfFMMeta_IsMetaFile(param_1,local_104);
    if (iVar2 == 0) {
      SfFMMeta_CreateMetaName(param_1,local_104,0x104,1);
      iVar2 = SfFMMeta_IsMetaFile(param_1,local_104);
      if (iVar2 == 0) {
        if (iVar1 == 0) {
          return 0;
        }
        hObject = CreateFileA(local_104,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
        local_108 = 1;
        iVar1 = riff_WriteFileID(hObject,0x4c504653,4);
        if (iVar1 < 0) {
          CloseHandle(hObject);
          return iVar1;
        }
        goto LAB_0101c6c3;
      }
    }
    SfFMMeta_DeleteMetaChunks(local_104);
    if (iVar1 == 0) {
      return 0;
    }
    lpFileName = local_104;
  }
  hObject = CreateFileA(lpFileName,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
LAB_0101c6c3:
  if (hObject == (HANDLE)0xffffffff) {
    DVar3 = GetLastError();
    lVar4 = _SfErrorHandler_TranslateWin32Error_4(DVar3);
    return lVar4;
  }
  iVar1 = 0;
  if (param_4 != (ISfReadMeta *)0x0) {
    if ((param_5 & 4) != 0) {
      local_10c = (int *)0x0;
      iVar1 = (**(code **)(*(int *)param_4 + 0xc))(param_4,&local_10c);
      if ((-1 < iVar1) && (local_10c != (int *)0x0)) {
        iVar1 = FUN_0101b910(hObject,local_10c,param_3);
        if (iVar1 < 0) {
          CloseHandle(hObject);
          (**(code **)(*local_10c + 8))(local_10c);
          return iVar1;
        }
        (**(code **)(*local_10c + 8))(local_10c);
      }
    }
    if ((param_5 & 1) != 0) {
      local_10c = (int *)0x0;
      iVar1 = (**(code **)(*(int *)param_4 + 0x1c))(param_4,&local_10c);
      if ((-1 < iVar1) && (local_10c != (int *)0x0)) {
        iVar1 = FUN_0101b6b0(hObject,local_10c);
        (**(code **)(*local_10c + 8))(local_10c);
      }
    }
    if (local_108 != 0) {
      iVar1 = FUN_0101b2c0(hObject,param_1);
    }
  }
  CloseHandle(hObject);
  return iVar1;
}


