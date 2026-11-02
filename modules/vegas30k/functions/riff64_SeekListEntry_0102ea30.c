/* Module: vegas30k.dll
   Function: riff64_SeekListEntry
   Address: 0102ea30
   Source: Ghidra pseudocode (migrated from analysis/ghidra/output/vegas30k.dll_analysis.txt)
*/


/* __stdcall riff64_SeekListEntry,12 */

int riff64_SeekListEntry(undefined4 param_1,int param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined1 local_10 [16];
  
                    /* 0x2ea30  1402  _riff64_SeekListEntry@12 */
  uVar4 = CONCAT44(local_18._4_4_,(undefined4)local_18);
  iVar3 = 0;
  while( true ) {
    if (param_2 == iVar3) {
      return 0;
    }
    if ((param_3 != (uint *)0x0) &&
       (((int)param_3[1] < 0 || (((int)param_3[1] < 1 && (*param_3 < 0x18)))))) break;
    local_18 = uVar4;
    iVar2 = riff64_ReadChunkHeader(param_1,local_10,&local_18);
    if (param_3 != (uint *)0x0) {
      uVar1 = *param_3;
      *param_3 = uVar1 - 0x18;
      param_3[1] = (param_3[1] - 1) + (uint)(0x17 < uVar1);
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    uVar4 = riff64_SkipChunk(param_1,local_18);
    if (param_3 != (uint *)0x0) {
      uVar1 = *param_3;
      *param_3 = uVar1 - (uint)uVar4;
      param_3[1] = (param_3[1] - (int)((ulonglong)uVar4 >> 0x20)) - (uint)(uVar1 < (uint)uVar4);
    }
    iVar3 = iVar3 + 1;
  }
  return -0x7ffb1ff6;
}



=== STRINGS (keyword) ===
STR @ 011da840: Software\Sonic Foundry\Vegas\3.0\DXCache
STR @ 011da884: Vegas
STR @ 011dafa8: OpenProcessToken
STR @ 011db020: OpenThreadToken
STR @ 011dcce4: Memory load (current)
STR @ 011dde64: 

Trying to open allocated resource.
STR @ 011ddf3c: 

The file could not be opened. Make sure the file exists and that you have access to the file/folder.
STR @ 011ddfa4: 

The file could not be opened because some other application already has it open.
STR @ 011ddff8: 

The file could not be opened because you do not have a high enough access permission to open it.
STR @ 011de2a0: 

An error occurred while opening a device driver.
STR @ 011de2d4: 

An error occurred while opening a codec.
STR @ 011de534: 

The file is most likely corrupted or of an unknown format. A chunk has a length of 0.
STR @ 011de58c: 

The file is most likely corrupted or of an unknown format. A chunk has an illegal length.
STR @ 011de788: 

An error occurred when loading a DirectX plug-in or plug-ins.  The DirectX plug-in(s) specified are not installed on this system.
STR @ 011de80c: 

An error occurred when loading a DirectX plug-in or plug-ins.  The plug-in preset(s) could not be loaded.
STR @ 011de878: 

An error occurred when loading a DirectX plug-in or plug-ins.  The plug-in(s) specified are not allowed in this version of the application.
STR @ 011de9cc: One or more effects in the package failed to load.

Do you want to try to load the loadable effects from the chain?
STR @ 011dea74: 

The file exists in the project and cannot be overwritten.
STR @ 011dec5c: 

An error occurred while opening a codec.
STR @ 011dee44: 

Too many files are open.
STR @ 011def54: 

Some streams in the media file could not be opened.
STR @ 011def8c: 

A stream could not be opened because it was unrecognized or corrupt.
STR @ 011defd4: 

A stream could not be opened.
STR @ 011df164: 

This project file was created by an older version of Vegas.
STR @ 011df288: 

This project file was created by a different version of the program.
STR @ 011df2f8: 

The playback devices specified in the project do not map to the current system settings. The project has been remapped to different devices.
STR @ 011df5d4: An error occurred while processing the undo buffer. You should save your work immediately using a new project filename and restart $(AppName).
STR @ 011df664: An error occurred while loading a plug-in.
STR @ 011df6c0: An error occurred while loading the project file %s.
STR @ 011df6f8: An error occurred while saving the project file %s.
STR @ 011df914: An error occurred while opening an audio device.
STR @ 011df948: The plug-in preset '%s' could not be loaded.
STR @ 011df978: An error occurred while creating a new project.
STR @ 011dfa7c: An error occurred while opening one or more files.
STR @ 011dfc6c: A error occurred accessing project media %s.
STR @ 011e0114: The %s device %s could not be opened.
STR @ 011e020c: The record device %s could not be opened.
STR @ 011e0310: The playback device %s could not be opened.
STR @ 011e0644: Siren Download
STR @ 011e06c0: %d %% Downloaded
STR @ 011e0830: Can't open %s
STR @ 011e0988: File %s can not be opened for reading.
STR @ 011e0d90: Save Template
STR @ 011e0db0: Project Default
STR @ 011e0dc0: Can't modify the built-in 'Project Default' template. Please rename it before saving.
STR @ 011e0eb4: Can't delete the built-in 'Project Default' template.
STR @ 011e0f18: Can't save the template without a valid name.  Please rename it before saving.
STR @ 011e0fc4: Last used template that you didn't save...
STR @ 011e1014: The template '%s' cannot be loaded.  Delete it?
STR @ 011e10d4: Plug-in: '%s' failed to load.  Please make sure the plug-in is properly installed.
STR @ 011e1128: The Plug-in '%s' failed to load.  Please make sure the plug-in is properly installed.
STR @ 011e1180: The Plug-in '%s' failed to load
STR @ 011e11a0: The user preset for Plug-in '%s' could not be loaded.  The default settings have been restored.
STR @ 011e1e24: Open Main
STR @ 011e1e30: open read
STR @ 011e1e3c: Open Append
STR @ 011e1e50: Open Delete
STR @ 011e1e5c: Open SEA
STR @ 011e1e68: OpenMultiVol
STR @ 011e1f98: LoadEndOfCentralDirectory
STR @ 011e5414: Opened temporary file %s
STR @ 011e62c8: MAX_ALLOC_CHUNK is wrong, please fix
STR @ 011e7d04: Invalid IHDR chunk
STR @ 011e7d2c: Truncating incorrect tRNS chunk length
STR @ 011e7d54: Invalid palette chunk
STR @ 011e7d6c: Duplicate PLTE chunk
STR @ 011e7db8: Incorrect IEND chunk length
STR @ 011e7e34: Duplicate gAMA chunk
STR @ 011e7e4c: Out of place gAMA chunk
STR @ 011e7e7c: Incorrect gAMA chunk length
STR @ 011e7eb4: Duplicate sBIT chunk
STR @ 011e7ecc: Out of place sBIT chunk
STR @ 011e7efc: Incorrect sBIT chunk length
STR @ 011e8037: ?Duplicate cHRM chunk
STR @ 011e8084: Incorrect cHRM chunk length
STR @ 011e80c4: Duplicate sRGB chunk
STR @ 011e80dc: Out of place sRGB chunk
STR @ 011e810c: Incorrect sRGB chunk length
STR @ 011e8144: tRNS chunk not allowed with alpha channel
STR @ 011e8170: Zero length tRNS chunk
STR @ 011e8188: Incorrect tRNS chunk length
STR @ 011e81a4: Duplicate tRNS chunk
STR @ 011e820c: Incorrect bKGD chunk length
STR @ 011e8228: Duplicate bKGD chunk
STR @ 011e8290: Duplicate hIST chunk
STR @ 011e82dc: Incorrect hIST chunk length
STR @ 011e8314: Duplicate pHYS chunk
STR @ 011e8344: Incorrect pHYs chunk length
STR @ 011e837c: Duplicate oFFs chunk
STR @ 011e83ac: Incorrect oFFs chunk length
STR @ 011e83e4: Duplicate tIME chunk
STR @ 011e83fc: Incorrect tIME chunk length
STR @ 011e8418: Out of place tIME chunk
STR @ 011e8470: Zero length zTXt chunk
STR @ 011e84a4: unknown critical chunk
STR @ 011e84bc: invalid chunk type
STR @ 011e88c4: Empty keyword in tEXt chunk
STR @ 011e88e0: Empty keyword in zTXt chunk
STR @ 011e88fc: Unrecognized unit type for oFFs chunk
STR @ 011e8924: Unrecognized equation type for pCAL chunk
STR @ 011e8950: Unrecognized unit type for pHYs chunk
STR @ 011e8978: Invalid time specified for tIME chunk
STR @ 011ebe30: The playback device %s could not be opened.
STR @ 011ebfd4: The %s device %s could not be opened.
STR @ 011ec3f0: The record device %s could not be opened.
STR @ 011f1d6c: midiOutOpen
STR @ 011f1e34: waveOutOpen
STR @ 011f1f5a: waveInOpen
STR @ 011f1f80: mixerOpen
STR @ 011f2076: midiInOpen
STR @ 011f2102: midiStreamOpen
STR @ 011f22d6: ImageList_LoadImageA
STR @ 011f23b0: DrawDibOpen
STR @ 011f2538: CoLoadLibrary
STR @ 011f25a2: fopen
STR @ 011f2830: LoadLibraryA
STR @ 011f2e78: LoadResource
STR @ 011f2f3c: LoadLibraryExA
STR @ 011f3016: OpenFile
STR @ 011f3030: OpenProcessToken
STR @ 011f3066: RegOpenKeyA
STR @ 011f3086: RegOpenKeyExA
STR @ 011f3900: LoadCursorA
STR @ 011f3946: LoadAcceleratorsA
STR @ 011f39a8: LoadMenuA
STR @ 011f39b4: LoadMenuIndirectA
STR @ 011f39fa: LoadStringA
STR @ 011f3a08: LoadBitmapA
STR @ 011f3a16: LoadIconA
STR @ 011f3a22: LoadImageA
STR @ 011f3a7c: OpenClipboard
STR @ 011f3ed8: SaveDC
STR @ 011f3fbe: GetOpenFileNameA
STR @ 011f3ff0: WNetOpenEnumA
STR @ 011f78f2: vegas30k.dll
STR @ 011f93cb: ?Mixer_BusFXGraphPersist@@YGJPAUIStream@@HPAUISFMixerIn@@@Z
STR @ 011f9407: ?Mixer_BusFXPersist@@YGJPAUIStream@@HPAUISFGraphFilter@@@Z
STR @ 011f945a: ?Mixer_BusPersist@@YGJPAUIStream@@HPAUISFMixerIn@@@Z
STR @ 011f95ef: ?Mixer_FXBusContainerPersist@@YGJPAUIStream@@HK@Z
STR @ 011f9d6b: ?Mixer_LoadMixer@@YGJPAXPAUIStream@@@Z
STR @ 011f9d92: ?Mixer_LoadMixerCfg@@YGJPAXKH@Z
STR @ 011f9db2: ?Mixer_LoadMixerCfgPrev@@YGJPAXKH@Z
STR @ 011f9dd6: ?Mixer_LoadMixerCfgPrevOld@@YGJPAXKH@Z
STR @ 011f9f98: ?Mixer_SaveMixer@@YGJPAXPAUIStream@@@Z
STR @ 011f9fbf: ?Mixer_SaveMixerCfg@@YGJPAPAXPAK@Z
STR @ 011fa4c9: ?Open@CArchive2@@QAGJPBDKPAVCSfArchiveProgress@@@Z
STR @ 011fa4fc: ?Persist@_summarylisttag@@QAGJPAUIStream@@H@Z
STR @ 011fa52a: ?Persist@_tmixerprops@@QAGJPAUIStream@@H@Z
STR @ 011fa555: ?Persist@tSFVIDEOFILTERCACHE@@QAGJPAUIStream@@H@Z
STR @ 011fab4f: ?SfCDProject_FreeProject@@YGJPAUtagSFCDPRJ_PROJECT@@@Z
STR @ 011fab86: ?SfCDProject_FreeTrack@@YGJPAUtagSFCDPRJ_TRACK_PROJECT@@@Z
STR @ 011fabc1: ?SfCDProject_IsProject@@YGJPAXPAK@Z
STR @ 011fabe5: ?SfCDProject_ReadPQListFile@@YGJPAXPAHPADPAUtSFLIST@@HK@Z
STR @ 011fac1f: ?SfCDProject_ReadProject@@YGJPAXPAUtagSFCDPRJ_PROJECT@@PAJ@Z
STR @ 011fac5c: ?SfCDProject_SavePQListFile@@YGJPAXHPADPAUtSFLIST@@H@Z
STR @ 011fac93: ?SfCDProject_WriteProject@@YGJPADPAXPAUtagSFCDPRJ_PROJECT@@PAK@Z
STR @ 011fbecb: ?SfFMMeta_DeleteMetaChunks@@YGJPAD@Z
STR @ 011fc0a9: ?SfFMMeta_openAndWriteMetaStream@@YGJPADHHKPAUISfReadMeta@@@Z
STR @ 011fc312: ?SfLoadDiskJpegDib@@YGPAUtagBITMAPINFOHEADER@@PBD@Z
STR @ 011fc346: ?SfLoadDiskJpegDibEx@@YGJPBDPAPAUtagBITMAPINFOHEADER@@@Z
STR @ 011fc37f: ?SfLoadDiskPngDib@@YGPAUtagBITMAPINFOHEADER@@PBD@Z
STR @ 011fc3b2: ?SfLoadDiskPngDibEx@@YGJPBDPAPAUtagBITMAPINFOHEADER@@@Z
STR @ 011fc3ea: ?SfLoadJpegDib@@YGJPAUHSFLANG__@@PBDKPAPAUtagBITMAPINFOHEADER@@@Z
STR @ 011fc42c: ?SfLoadPngDib@@YGJPAUHSFLANG__@@PBDKPAPAUtagBITMAPINFOHEADER@@@Z
STR @ 011fc46d: ?SfLoadResourceJpegDib@@YGPAUtagBITMAPINFOHEADER@@PAUHSFLANG__@@PBD@Z
STR @ 011fc4b3: ?SfLoadResourceJpegDibEx@@YGJPAUHSFLANG__@@PBDPAPAUtagBITMAPINFOHEADER@@@Z
STR @ 011fc4fe: ?SfLoadResourcePngDib@@YGPAUtagBITMAPINFOHEADER@@PAUHSFLANG__@@PBD@Z
STR @ 011fc543: ?SfLoadResourcePngDibEx@@YGJPAUHSFLANG__@@PBDPAPAUtagBITMAPINFOHEADER@@@Z
STR @ 011fc999: ?SfMpegStreamOpen@@YGJPAUtagMPEG_BIT_STREAM@@PAD@Z
STR @ 011fd37f: ?SfSaveDiskJpegDib@@YGJPBDPBUtagBITMAPINFOHEADER@@PBXPAUSFJPEGFILEOPTIONS@@@Z
STR @ 011fd3cd: ?SfSaveDiskPngDib@@YGJPBDPBUtagBITMAPINFOHEADER@@PBXPAUSFPNGFILEOPTIONS@@@Z
STR @ 011fdd6f: ?Transport_IsAnyOpen@@YGHXZ
STR @ 011fea22: _FXPackage_GetDefaultSavePath@8
STR @ 011fea7c: _FXPackage_LoadPackage@16
STR @ 011fea96: _FXPackage_LoadPackageData@8
STR @ 011feab3: _FXPackage_OpenPackageRegKey@24
STR @ 011feaee: _FXPackage_SavePackage@8
STR @ 011feb07: _FXPackage_SavePackageData@16
STR @ 011feb25: _FXPackage_SetDefaultSavePath@4
STR @ 011ff66e: _SfAudio_ResampleOpen@24
STR @ 011ff687: _SfAudio_ResampleOpenEx@24
STR @ 011ffa09: _SfDSFilter_GetDefaultSavePath@12
STR @ 011ffa66: _SfDSFilter_LoadPreset@12
STR @ 011ffa80: _SfDSFilter_SavePreset@12
STR @ 011ffa9a: _SfDSFilter_SetDefaultSavePath@8
STR @ 01200bd0: _SfGraph_MapFxGUID_OriginalToVegasVideo@4
STR @ 01200bfa: _SfGraph_MapFxGUID_VegasVideoToOriginal@4
STR @ 01200c24: _SfGraph_SaveToFile@12
STR @ 01200c3b: _SfGraph_SaveToMem@12
STR @ 01200c51: _SfGraph_SaveToStream@8
STR @ 01200e4b: _SfImageList_LoadImage@28
STR @ 01201090: _SfLang_LoadUserLCIDMetric@12
STR @ 012010ae: _SfLang_Open@16
STR @ 012010be: _SfLang_SaveUserLCIDMetric@12
STR @ 0120140b: _SfLoadAccelerators@8
STR @ 01201421: _SfLoadBitmap@8
STR @ 01201431: _SfLoadCulledMenu@20
STR @ 01201446: _SfLoadCursor@8
STR @ 01201456: _SfLoadIcon@8
STR @ 01201464: _SfLoadImage@24
STR @ 01201474: _SfLoadMenu@8
STR @ 01201482: _SfLoadResource@8
STR @ 01201494: _SfLoadResourceCustom@16
STR @ 012014ad: _SfLoadString2@16
STR @ 012014bf: _SfLoadString@16
STR @ 012014d0: _SfLoadUIBitmapEx@32
STR @ 012014e5: _SfLoadWindowPlacement@16
STR @ 012016bf: _SfMetric_Open@16
STR @ 012016d1: _SfMetric_OpenService@16
STR @ 012016ea: _SfMetric_OpenSubKey@12
STR @ 01201ed3: _SfSummary_Load@12
STR @ 01201ee6: _SfSummary_Save@12
STR @ 01202a5f: _SfZip_Open@12
STR @ 01202a6e: _SfZip_OpenResource@16
STR @ 01202e51: _displist_Load@12
STR @ 01202e63: _displist_Save@12
STR @ 01202e99: _iff_FindChunkFromStart@12
STR @ 01202eb4: _iff_FindChunkHeader@16
STR @ 01202f04: _iff_ReadChunkHdr@8
STR @ 01202f4e: _iff_SeekChunkHeader@12
STR @ 01202f66: _iff_SkipChunk@8
STR @ 01202f77: _iff_WriteChunk@8
STR @ 01202fc0: _riff64_AmountWritten@12
STR @ 01202fd9: _riff64_CompleteChunk@12
STR @ 01202ff2: _riff64_FindChunkHeader@28
STR @ 0120300d: _riff64_FindChunkHeaderInRIFF@28
STR @ 0120302e: _riff64_FindListChunk@28
STR @ 01203047: _riff64_FindListChunkFromStart@24
STR @ 01203069: _riff64_GetNumListEntries@12
STR @ 01203086: _riff64_Pad@12
STR @ 01203095: _riff64_PrepareChunk@24
STR @ 012030ad: _riff64_PrepareList@24
STR @ 012030c4: _riff64_ReadChunkHeader@12
STR @ 012030df: _riff64_ReadData@16
STR @ 012030f3: _riff64_ReadDataAlloc@8
STR @ 0120310b: _riff64_ReadDataBounded@16
STR @ 01203126: _riff64_ReadFileID@12
STR @ 0120313c: _riff64_ReadListHeader@12
STR @ 01203156: _riff64_RestoreLocation@12
STR @ 01203171: _riff64_SaveLocation@8
STR @ 01203188: _riff64_SeekDataStart@4
STR @ 012031a0: _riff64_SeekListEntry@12
STR @ 012031b9: _riff64_SetRIFFSize@12
STR @ 012031d0: _riff64_SkipChunk@12
STR @ 012031e5: _riff64_UpdateRIFFSize@12
STR @ 012031ff: _riff64_ValidateChunkHeader@24
STR @ 0120321e: _riff64_WriteChunk@36
STR @ 01203234: _riff64_WriteChunkHeader@28
STR @ 01203250: _riff64_WriteChunkToFile@32
STR @ 0120326c: _riff64_WriteData@20
STR @ 01203281: _riff64_WriteFileID@28
STR @ 01203298: _riff64_WriteListHeader@28
STR @ 012032b3: _riff64_WriteToFile@16
STR @ 012032ca: _riff_DeleteChunk@16
STR @ 012032df: _riff_FindChunkHeader@16
STR @ 012032f8: _riff_FindChunkHeaderInRIFF@16
STR @ 01203317: _riff_FindListChunk@16
STR @ 0120332e: _riff_FindListChunkFromStart@12
STR @ 01203395: _riff_ReadChunkHeader@12
STR @ 01203433: _riff_SaveLocation@8
STR @ 01203489: _riff_SkipChunk@8
STR @ 012034b2: _riff_ValidateChunkHeader@8
STR @ 012034e7: _riff_WriteChunk@20
STR @ 012034fb: _riff_WriteChunkHeader@12
STR @ 0120357e: _syncoutOpen@8
STR @ 01207788: Error decoding zTXt chunk

