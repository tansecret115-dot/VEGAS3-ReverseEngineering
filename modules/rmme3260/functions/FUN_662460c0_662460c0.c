/* Module: rmme3260.dll
   Function: FUN_662460c0
   Address: 662460c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662460c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  FARPROC pFVar2;
  
  if ((void *)param_1[1] != (void *)0x0) {
    pFVar2 = FUN_66265e30((void *)param_1[1],s_InitColorConverter_66270374);
    param_1[0x42] = pFVar2;
    pFVar2 = FUN_66265e30((void *)param_1[1],s_SetColorAdjustments_66270360);
    param_1[0x43] = pFVar2;
    pFVar2 = FUN_66265e30((void *)param_1[1],s_GetColorAdjustments_6627034c);
    param_1[0x44] = pFVar2;
    pFVar2 = FUN_66265e30((void *)param_1[1],s_SuggestRGB8Palette_66270338);
    param_1[0x45] = pFVar2;
    pFVar2 = FUN_66265e30((void *)param_1[1],s_SetRGB8Palette_66270328);
    param_1[0x46] = pFVar2;
    pFVar2 = FUN_66265e30((void *)param_1[1],s_SetSharpnessAdjustments_66270310);
    param_1[0x47] = pFVar2;
    pFVar2 = FUN_66265e30((void *)param_1[1],s_GetSharpnessAdjustments_662702f8);
    param_1[0x48] = pFVar2;
    pFVar2 = FUN_66265e30((void *)param_1[1],s_ConvertRGBtoYUV_662702e8);
    param_1[0x49] = pFVar2;
    pFVar2 = FUN_66265e30((void *)param_1[1],s_ConvertYUVtoRGB_662702d8);
    param_1[0x4a] = pFVar2;
    pFVar2 = FUN_66265e30((void *)param_1[1],s_Enhance_662702d0);
    param_1[0x4b] = pFVar2;
    pFVar2 = FUN_66265e30((void *)param_1[1],s_EnhanceUniform_662702c0);
    param_1[0x4c] = pFVar2;
    pFVar2 = FUN_66265e30((void *)param_1[1],s_MMXSharpenFilter_662702ac);
    param_1[0x4d] = pFVar2;
    pFVar2 = FUN_66265e30((void *)param_1[1],s_ConvertRGB24toXRGB_66270298);
    param_1[0x4e] = pFVar2;
    pFVar2 = FUN_66265e30((void *)param_1[1],s_ScanCompatibleColorFormats_6627027c);
    param_1[0x4f] = pFVar2;
    pFVar2 = FUN_66265e30((void *)param_1[1],s_ScanAllCompatibleColorFormats_6627025c);
    param_1[0x50] = pFVar2;
    pFVar2 = FUN_66265e30((void *)param_1[1],s_GetColorConverter_66270248);
    param_1[0x51] = pFVar2;
  }
  if (((((param_1[0x42] == 0) || (param_1[0x43] == 0)) || (param_1[0x45] == 0)) ||
      ((((param_1[0x46] == 0 || (param_1[0x47] == 0)) ||
        ((param_1[0x49] == 0 || ((param_1[0x4a] == 0 || (param_1[0x4b] == 0)))))) ||
       (param_1[0x4c] == 0)))) ||
     ((((param_1[0x4d] == 0 || (param_1[0x44] == 0)) || (param_1[0x48] == 0)) ||
      ((param_1[0x50] == 0 || (param_1[0x51] == 0)))))) {
    puVar1 = (undefined4 *)param_1[1];
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    param_1[0x46] = 0;
    param_1[0x47] = 0;
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    param_1[0x4a] = 0;
    param_1[0x4b] = 0;
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    param_1[0x50] = 0;
    param_1[0x51] = 0;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_66265c10(puVar1);
      operator_delete(puVar1);
    }
    param_1[1] = 0;
    *param_1 = 0x80004005;
  }
  return;
}


