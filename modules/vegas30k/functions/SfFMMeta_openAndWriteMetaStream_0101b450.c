/* Module: vegas30k.dll
   Function: SfFMMeta_openAndWriteMetaStream
   Address: 0101b450
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfFMMeta_openAndWriteMetaStream(char *,int,int,unsigned long,struct ISfReadMeta *)
    */

long SfFMMeta_openAndWriteMetaStream
               (char *param_1,int param_2,int param_3,ulong param_4,ISfReadMeta *param_5)

{
  long lVar1;
  HANDLE hObject;
  int iVar2;
  DWORD DVar3;
  int *unaff_EBX;
  int *local_10c;
  undefined4 local_108;
  char local_104 [260];
  
                    /* 0x1b450  393  ?SfFMMeta_openAndWriteMetaStream@@YGJPADHHKPAUISfReadMeta@@@Z
                        */
  lVar1 = SfFMMeta_CreateMetaName(param_1,local_104,0x104,1);
  if (-1 < lVar1) {
    DeleteFileA(local_104);
    if (param_3 == 0) {
      hObject = CreateFileA(param_1,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
      if (hObject != (HANDLE)0xffffffff) {
        if (param_2 == 0) {
          iVar2 = riff_DeleteChunk(hObject,0x20657563,&local_10c,0);
          if ((iVar2 < 0) && (iVar2 != -0x7ffb1ff6)) {
            CloseHandle(hObject);
            return iVar2;
          }
          iVar2 = riff_DeleteChunk(hObject,0x6c746461,&local_10c,1);
          if ((iVar2 < 0) && (iVar2 != -0x7ffb1ff6)) {
            CloseHandle(hObject);
            return iVar2;
          }
          iVar2 = riff_DeleteChunk(hObject,0x4f464e49,&local_10c,1);
          if ((iVar2 < 0) && (iVar2 != -0x7ffb1ff6)) {
            CloseHandle(hObject);
            return iVar2;
          }
        }
        goto LAB_0101b5cf;
      }
    }
    else {
      if (param_5 == (ISfReadMeta *)0x0) {
        return 0;
      }
      hObject = CreateFileA(local_104,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
      if (hObject != (HANDLE)0xffffffff) {
        iVar2 = riff_WriteFileID(hObject,0x4c504653,4);
        if (iVar2 < 0) {
          CloseHandle(hObject);
          return iVar2;
        }
LAB_0101b5cf:
        iVar2 = 0;
        if (param_5 != (ISfReadMeta *)0x0) {
          local_108 = 0;
          iVar2 = (**(code **)(*(int *)param_5 + 0xc))(param_5,&local_108);
          if ((-1 < iVar2) && (unaff_EBX != (int *)0x0)) {
            iVar2 = FUN_0101b910(hObject,unaff_EBX,param_2);
            if (iVar2 < 0) {
              CloseHandle(hObject);
              (**(code **)(*unaff_EBX + 8))(unaff_EBX);
              return iVar2;
            }
            (**(code **)(*unaff_EBX + 8))(unaff_EBX);
          }
          iVar2 = (**(code **)(*(int *)param_5 + 0x1c))(param_5,&stack0xfffffeec);
          if ((-1 < iVar2) && (local_10c != (int *)0x0)) {
            iVar2 = FUN_0101b6b0(hObject,local_10c);
            (**(code **)(*local_10c + 8))(local_10c);
          }
          if (param_3 != 0) {
            iVar2 = FUN_0101b2c0(hObject,param_1);
          }
        }
        CloseHandle(hObject);
        return iVar2;
      }
    }
    DVar3 = GetLastError();
    lVar1 = _SfErrorHandler_TranslateWin32Error_4(DVar3);
  }
  return lVar1;
}


