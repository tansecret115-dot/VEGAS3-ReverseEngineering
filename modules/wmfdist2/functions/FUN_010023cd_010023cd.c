/* Module: wmfdist2.exe
   Function: FUN_010023cd
   Address: 010023cd
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSTR FUN_010023cd(undefined4 param_1,LPSTR param_2)

{
  wsprintfA(param_2,"%lu",param_1);
  return param_2;
}


