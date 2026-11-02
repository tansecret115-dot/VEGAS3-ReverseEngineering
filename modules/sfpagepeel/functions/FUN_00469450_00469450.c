/* Module: sfpagepeel.dll
   Function: FUN_00469450
   Address: 00469450
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00469450(uint param_1,uint param_2)

{
  return *(uint *)(&DAT_004787ec + (param_2 & 0xff ^ param_1 & 0xff) * 4) ^ param_2 >> 8;
}


