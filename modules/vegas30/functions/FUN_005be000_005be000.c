/* Module: vegas30.exe
   Function: FUN_005be000
   Address: 005be000
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_005be000(int *param_1,LPSTR param_2,uint param_3)

{
  LPSTR pCVar1;
  uint uVar2;
  short unaff_DI;
  
  uVar2 = param_3;
  FUN_0060ac30();
  param_3 = (**(code **)(*param_1 + 0xc))(param_1,&stack0xfffffff0,uVar2,&param_1);
  pCVar1 = param_2;
  if (-1 < (int)param_3) {
    uVar2 = uVar2 >> 1;
    if ((&stack0x00000000 == (undefined1 *)0x10) || (unaff_DI != 0)) {
      WideCharToMultiByte(0,0,(LPCWSTR)&stack0xfffffff0,-1,param_2,uVar2,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else if (param_2 != (LPSTR)0x0) {
      *param_2 = '\0';
      param_2[uVar2 - 1] = '\0';
      return param_3;
    }
    pCVar1[uVar2 - 1] = '\0';
  }
  return param_3;
}


