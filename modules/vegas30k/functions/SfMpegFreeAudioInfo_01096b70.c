/* Module: vegas30k.dll
   Function: SfMpegFreeAudioInfo
   Address: 01096b70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfMpegFreeAudioInfo(struct tagAUDIO_INFO *) */

long SfMpegFreeAudioInfo(tagAUDIO_INFO *param_1)

{
  HANDLE hObject;
  HGLOBAL pvVar1;
  
                    /* 0x96b70  429  ?SfMpegFreeAudioInfo@@YGJPAUtagAUDIO_INFO@@@Z */
  if (param_1 != (tagAUDIO_INFO *)0x0) {
    hObject = *(HANDLE *)(param_1 + 0x24);
    if ((hObject != (HANDLE)0x0) && (hObject != (HANDLE)0xffffffff)) {
      CloseHandle(hObject);
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      _SfList_Destroy_4(*(int *)(param_1 + 0x28));
    }
    if (*(int *)(param_1 + 0x34) != 0) {
      _SfList_Destroy_4(*(int *)(param_1 + 0x34));
    }
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
    return 0;
  }
  return 0;
}


