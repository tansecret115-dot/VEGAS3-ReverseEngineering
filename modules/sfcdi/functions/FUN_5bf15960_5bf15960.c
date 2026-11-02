/* Module: sfcdi.dll
   Function: FUN_5bf15960
   Address: 5bf15960
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf15960(HSFCD__ *param_1,HWND param_2,uint param_3,int param_4)

{
  _toc *p_Var1;
  
  if (param_4 != 0) {
    FUN_5bf159a0(param_2);
  }
  p_Var1 = FUN_5bf15e30(param_1,param_3,0x20);
  FUN_5bf15b50(param_2,(int)p_Var1,(_sfcdtext *)0x0);
  FUN_5bf15ea0(p_Var1);
  return 0;
}


