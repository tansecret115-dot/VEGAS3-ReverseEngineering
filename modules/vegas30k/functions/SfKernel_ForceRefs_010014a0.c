/* Module: vegas30k.dll
   Function: SfKernel_ForceRefs
   Address: 010014a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SfKernel_ForceRefs(void) */

void SfKernel_ForceRefs(void)

{
  tagBITMAPINFOHEADER *local_2c;
  undefined1 local_28 [16];
  CSfXSpline local_18 [24];
  
                    /* 0x14a0  402  ?SfKernel_ForceRefs@@YGXXZ */
  _SfDllCreateInstance_20(0,local_28,0,local_28,0);
  _SfHelp_SetHelpFilePath_8(0,0);
  _SfQueueInitialize_4(0);
  _SfAboutBox_12(0,0,0);
  _SfErrorHandler_DetailsInit_0();
  _Internet_SendFeedback_8(0,0);
  _SfCheckList_Create_24(0,0,0,0,0,0);
  _SfAudio_ResampleEx_16(0,0,0,0);
  riff64_ReadData(0,0,0,0);
  _SfAudio_GetFindPeaksFunction_4(0);
  _SfAudio_GetAttribsText_12(0,0,0);
  _SfPlugIn_CreateList_12(0,0,0);
  _FXPackage_LoadPackage_16(0,0,0,0);
  _SfDSFilter_SavePreset_12(0,0,0);
  _SfGraph_CreateFromStream_12(0,0,0);
  _SfVideoKeyframe_InsertSmart_20(0,0,0,0,0);
  GetCExpStorageFS((_func_int_CExpStorageFS_ptr__EXPMSG_ptr_ulong_long_ptr *)0x0,0,
                   (_initexpstorage *)0x0);
  SfFormatDiskFreeSpace((char *)0x0,(char *)0x0);
  SfFMMeta_CreateMetaName((char *)0x0,(char *)0x0,0,1);
  _SfZipEnum_Destroy_4(0);
  SfLoadPngDib((HSFLANG__ *)0x0,(char *)0x0,0,&local_2c);
  SfCdiInitializeFileSystem((tagFILE_SYSTEM_CAPS *)0x0,0,(tagDIR_TREE *)0x0,(HWND__ *)0x0);
  SfCDProject_IsProject((void *)0x0,(ulong *)0x0);
  VCD_GetFileSystemCaps((tagFILE_SYSTEM_CAPS *)0x0);
  SfVcdiParseVCD((tagDIR_ENTRY *)0x0);
  SfValidateMPEGAsVCD((char *)0x0,(VCDTYPE *)0x0);
  BufferPool_Create((IUnknown *)0x0,(_GUID *)&DAT_011dab80,0,0,(void **)0x0);
  SfLoadJpegDib((HSFLANG__ *)0x0,(char *)0x0,0,(tagBITMAPINFOHEADER **)0x0);
  SfSaveDiskJpegDib((char *)0x0,(tagBITMAPINFOHEADER *)0x0,(void *)0x0,(SFJPEGFILEOPTIONS *)0x0);
  CSfXSpline::CSfXSpline(local_18);
  SfOverlay_GetCompositorCount();
  _SfAudio_CopyChannels_24(0,0,0,0,0,0);
  SfOem_Init((void **)0x0,(char *)0x0,(char *)0x0);
  SfWtsRegisterSessionNotification((HWND__ *)0x0,0);
  return;
}


