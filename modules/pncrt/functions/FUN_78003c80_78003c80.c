/* Module: pncrt.dll
   Function: FUN_78003c80
   Address: 78003c80
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl FUN_78003c80(void *param_1,int param_2)

{
  if (*DAT_78041aac == '@') {
    DAT_78041aac = DAT_78041aac + 1;
    FUN_78006240(param_1,param_2);
    return param_1;
  }
  FUN_78003cc0(param_1,param_2);
  return param_1;
}


