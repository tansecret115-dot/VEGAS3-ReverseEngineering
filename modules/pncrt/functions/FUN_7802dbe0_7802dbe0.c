/* Module: pncrt.dll
   Function: FUN_7802dbe0
   Address: 7802dbe0
   Source: Ghidra pseudocode (Stage 10 batch) */


short * __cdecl FUN_7802dbe0(short *param_1,int param_2)

{
  *param_1 = ((short)(param_2 / 10) + (short)(param_2 >> 0x1f) + 0x30) -
             (short)((longlong)param_2 * 0x66666667 >> 0x3f);
  param_1[1] = (short)(param_2 % 10) + 0x30;
  return param_1 + 2;
}


