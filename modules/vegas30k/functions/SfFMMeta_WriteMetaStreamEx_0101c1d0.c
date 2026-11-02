/* Module: vegas30k.dll
   Function: SfFMMeta_WriteMetaStreamEx
   Address: 0101c1d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfFMMeta_WriteMetaStreamEx(char *,int,unsigned long,struct ISfReadMeta *,enum
   SFFIO_TYPESOFMETADATA) */

long SfFMMeta_WriteMetaStreamEx
               (char *param_1,int param_2,ulong param_3,ISfReadMeta *param_4,
               SFFIO_TYPESOFMETADATA param_5)

{
  int iVar1;
  HANDLE hObject;
  DWORD DVar2;
  long lVar3;
  int *local_108;
  char local_104 [260];
  
                    /* 0x1c1d0  390
                       ?SfFMMeta_WriteMetaStreamEx@@YGJPADHKPAUISfReadMeta@@W4SFFIO_TYPESOFMETADATA@@@Z
                        */
  SfFMMeta_CreateMetaName(param_1,local_104,0x104,0);
  iVar1 = SfFMMeta_IsMetaFile(param_1,local_104);
  if (iVar1 != 0) {
    DeleteFileA(local_104);
  }
  SfFMMeta_CreateMetaName(param_1,local_104,0x104,1);
  iVar1 = SfFMMeta_IsMetaFile(param_1,local_104);
  if (iVar1 != 0) {
    DeleteFileA(local_104);
  }
  iVar1 = FUN_0101c3d0(param_4,param_5);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    hObject = CreateFileA(param_1,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  }
  else {
    hObject = CreateFileA(local_104,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
    if (hObject == (HANDLE)0xffffffff) goto LAB_0101c3b0;
    iVar1 = riff_WriteFileID(hObject,0x4c504653,4);
    if (iVar1 < 0) {
      CloseHandle(hObject);
      return iVar1;
    }
  }
  if (hObject != (HANDLE)0xffffffff) {
    iVar1 = 0;
    if (param_4 != (ISfReadMeta *)0x0) {
      if ((param_5 & 4) != 0) {
        local_108 = (int *)0x0;
        iVar1 = (**(code **)(*(int *)param_4 + 0xc))(param_4,&local_108);
        if ((-1 < iVar1) && (local_108 != (int *)0x0)) {
          iVar1 = FUN_0101b910(hObject,local_108,param_3);
          if (iVar1 < 0) {
            CloseHandle(hObject);
            (**(code **)(*local_108 + 8))(local_108);
            return iVar1;
          }
          (**(code **)(*local_108 + 8))(local_108);
        }
      }
      if ((param_5 & 1) != 0) {
        local_108 = (int *)0x0;
        iVar1 = (**(code **)(*(int *)param_4 + 0x1c))(param_4,&local_108);
        if ((-1 < iVar1) && (local_108 != (int *)0x0)) {
          iVar1 = FUN_0101b6b0(hObject,local_108);
          (**(code **)(*local_108 + 8))(local_108);
        }
      }
      if (param_2 != 0) {
        iVar1 = FUN_0101b2c0(hObject,param_1);
      }
    }
    CloseHandle(hObject);
    return iVar1;
  }
LAB_0101c3b0:
  DVar2 = GetLastError();
  lVar3 = _SfErrorHandler_TranslateWin32Error_4(DVar2);
  return lVar3;
}


