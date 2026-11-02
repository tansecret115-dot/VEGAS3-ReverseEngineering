/* Module: pncrt.dll
   Function: FUN_7802df00
   Address: 7802df00
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl FUN_7802df00(char *param_1,int param_2)

{
  *param_1 = (((char)(param_2 / 10) + (char)(param_2 >> 0x1f)) -
             (char)((longlong)param_2 * 0x66666667 >> 0x3f)) + '0';
  param_1[1] = (char)(param_2 % 10) + '0';
  return param_1 + 2;
}


