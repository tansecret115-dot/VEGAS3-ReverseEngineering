/* Module: rmbe3260.dll
   Function: FUN_66045cd0
   Address: 66045cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_66045cd0(uint param_1,uint *param_2)

{
  if ((int)(param_1 & 0xffff) < *(int *)(DAT_66075314 + 0xc)) {
    *param_2 = param_1 & 0xffff;
    return 0;
  }
  return 0x80040245;
}


