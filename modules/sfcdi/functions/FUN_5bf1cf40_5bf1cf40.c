/* Module: sfcdi.dll
   Function: FUN_5bf1cf40
   Address: 5bf1cf40
   Source: Ghidra pseudocode (Stage 10 batch) */


LPBYTE FUN_5bf1cf40(int param_1,uint param_2,LPBYTE param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = FUN_5bf21c40(param_1,param_2,param_3,param_4,(LPCSTR)0x0,1);
  if (iVar1 == 0) {
    *param_3 = '\0';
  }
  return param_3;
}


