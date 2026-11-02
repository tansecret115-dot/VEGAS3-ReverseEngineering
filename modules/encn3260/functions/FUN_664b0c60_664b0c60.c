/* Module: encn3260.dll
   Function: FUN_664b0c60
   Address: 664b0c60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664b0c60(undefined4 *param_1)

{
  undefined4 *puVar1;
  FARPROC pFVar2;
  
  if ((void *)param_1[1] != (void *)0x0) {
    pFVar2 = FUN_664d5970((void *)param_1[1],s_InitColorConverter_664e3888);
    param_1[0x42] = pFVar2;
    pFVar2 = FUN_664d5970((void *)param_1[1],s_SetColorAdjustments_664e3874);
    param_1[0x43] = pFVar2;
    pFVar2 = FUN_664d5970((void *)param_1[1],s_GetColorAdjustments_664e3860);
    param_1[0x44] = pFVar2;
    pFVar2 = FUN_664d5970((void *)param_1[1],s_SuggestRGB8Palette_664e384c);
    param_1[0x45] = pFVar2;
    pFVar2 = FUN_664d5970((void *)param_1[1],s_SetRGB8Palette_664e383c);
    param_1[0x46] = pFVar2;
    pFVar2 = FUN_664d5970((void *)param_1[1],s_SetSharpnessAdjustments_664e3824);
    param_1[0x47] = pFVar2;
    pFVar2 = FUN_664d5970((void *)param_1[1],s_GetSharpnessAdjustments_664e380c);
    param_1[0x48] = pFVar2;
    pFVar2 = FUN_664d5970((void *)param_1[1],s_ConvertRGBtoYUV_664e37fc);
    param_1[0x49] = pFVar2;
    pFVar2 = FUN_664d5970((void *)param_1[1],s_ConvertYUVtoRGB_664e37ec);
    param_1[0x4a] = pFVar2;
    pFVar2 = FUN_664d5970((void *)param_1[1],s_Enhance_664e37e4);
    param_1[0x4b] = pFVar2;
    pFVar2 = FUN_664d5970((void *)param_1[1],s_EnhanceUniform_664e37d4);
    param_1[0x4c] = pFVar2;
    pFVar2 = FUN_664d5970((void *)param_1[1],s_MMXSharpenFilter_664e37c0);
    param_1[0x4d] = pFVar2;
    pFVar2 = FUN_664d5970((void *)param_1[1],s_ConvertRGB24toXRGB_664e37ac);
    param_1[0x4e] = pFVar2;
    pFVar2 = FUN_664d5970((void *)param_1[1],s_ScanCompatibleColorFormats_664e3790);
    param_1[0x4f] = pFVar2;
    pFVar2 = FUN_664d5970((void *)param_1[1],s_ScanAllCompatibleColorFormats_664e3770);
    param_1[0x50] = pFVar2;
    pFVar2 = FUN_664d5970((void *)param_1[1],s_GetColorConverter_664e375c);
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
      FUN_664d5750(puVar1);
      operator_delete(puVar1);
    }
    param_1[1] = 0;
    *param_1 = 0x80004005;
  }
  return;
}


