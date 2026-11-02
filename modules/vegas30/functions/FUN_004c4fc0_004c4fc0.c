/* Module: vegas30.exe
   Function: FUN_004c4fc0
   Address: 004c4fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004c4fc0(uint param_1,_GUID *param_2)

{
  if ((0x2133 < param_1) && (param_1 < 0x2166)) {
    return param_1 - 0x2134;
  }
  if (param_2 != (_GUID *)0x0) {
    param_2->Data1 = 0;
    param_2->Data2 = 0;
    param_2->Data3 = 0;
    param_2->Data4[0] = '\0';
    param_2->Data4[1] = '\0';
    param_2->Data4[2] = '\0';
    param_2->Data4[3] = '\0';
    param_2->Data4[4] = '\0';
    param_2->Data4[5] = '\0';
    param_2->Data4[6] = '\0';
    param_2->Data4[7] = '\0';
    SfOverlay_GetCompositorGUID(param_1 - 0x2166,param_2);
    return -1;
  }
  return -1;
}


