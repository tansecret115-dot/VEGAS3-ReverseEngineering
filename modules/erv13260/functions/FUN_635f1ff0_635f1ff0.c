/* Module: erv13260.dll
   Function: FUN_635f1ff0
   Address: 635f1ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_635f1ff0(undefined4 *param_1)

{
  undefined4 *puVar1;
  FARPROC pFVar2;
  
  if ((void *)param_1[1] != (void *)0x0) {
    pFVar2 = FUN_63602dd0((void *)param_1[1],s_InitColorConverter_63605288);
    param_1[2] = pFVar2;
    pFVar2 = FUN_63602dd0((void *)param_1[1],s_SetColorAdjustments_63605274);
    param_1[3] = pFVar2;
    pFVar2 = FUN_63602dd0((void *)param_1[1],s_ConvertRGBtoYUV_63605264);
    param_1[4] = pFVar2;
    pFVar2 = FUN_63602dd0((void *)param_1[1],s_ConvertYUVtoRGB_63605254);
    param_1[5] = pFVar2;
    pFVar2 = FUN_63602dd0((void *)param_1[1],s_ConvertRGB24toXRGB_63605240);
    param_1[6] = pFVar2;
  }
  if ((((param_1[2] == 0) || (param_1[3] == 0)) || (param_1[4] == 0)) || (param_1[5] == 0)) {
    puVar1 = (undefined4 *)param_1[1];
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_63602bb0(puVar1);
      operator_delete(puVar1);
    }
    param_1[1] = 0;
    *param_1 = 0x80004005;
  }
  return;
}


