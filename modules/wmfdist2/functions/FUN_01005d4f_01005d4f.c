/* Module: wmfdist2.exe
   Function: FUN_01005d4f
   Address: 01005d4f
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01005d4f(HMODULE param_1,LPCSTR param_2,LPCSTR param_3,undefined2 param_4)

{
  undefined2 local_10 [2];
  undefined4 local_c;
  LPCSTR local_8;
  
  local_c = 0;
  local_10[0] = param_4;
  local_8 = param_2;
  EnumResourceLanguagesA(param_1,param_2,param_3,(ENUMRESLANGPROCA)&LAB_01005d22,(LONG_PTR)local_10)
  ;
  return local_c;
}


