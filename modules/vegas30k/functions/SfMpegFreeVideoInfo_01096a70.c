/* Module: vegas30k.dll
   Function: SfMpegFreeVideoInfo
   Address: 01096a70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfMpegFreeVideoInfo(struct VIDEO_INFO *) */

long SfMpegFreeVideoInfo(VIDEO_INFO *param_1)

{
  HANDLE hObject;
  HGLOBAL pvVar1;
  
                    /* 0x96a70  430  ?SfMpegFreeVideoInfo@@YGJPAUVIDEO_INFO@@@Z */
  if (param_1 != (VIDEO_INFO *)0x0) {
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


