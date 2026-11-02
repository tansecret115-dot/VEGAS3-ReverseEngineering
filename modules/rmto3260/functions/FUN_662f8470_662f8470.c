/* Module: rmto3260.dll
   Function: FUN_662f8470
   Address: 662f8470
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_662f8470(uint param_1,uint *param_2)

{
  if ((int)(param_1 & 0xffff) < *(int *)(DAT_66311d70 + 0xc)) {
    *param_2 = param_1 & 0xffff;
    return 0;
  }
  return 0x80040245;
}


