/* Module: vidcap30.exe
   Function: FUN_00451430
   Address: 00451430
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00451430(int *param_1,LPSTR param_2,int param_3)

{
  LPSTR pCVar1;
  int cbMultiByte;
  short unaff_DI;
  
  cbMultiByte = param_3;
  FUN_00579db0();
  param_3 = (**(code **)(*param_1 + 0xc))(param_1,&stack0xfffffff0,cbMultiByte,&param_1);
  pCVar1 = param_2;
  if (-1 < param_3) {
    if ((&stack0x00000000 == (undefined1 *)0x10) || (unaff_DI != 0)) {
      WideCharToMultiByte(0,0,(LPCWSTR)&stack0xfffffff0,-1,param_2,cbMultiByte,(LPCSTR)0x0,
                          (LPBOOL)0x0);
    }
    else if (param_2 != (LPSTR)0x0) {
      *param_2 = '\0';
      param_2[cbMultiByte + -1] = '\0';
      return param_3;
    }
    pCVar1[cbMultiByte + -1] = '\0';
  }
  return param_3;
}


