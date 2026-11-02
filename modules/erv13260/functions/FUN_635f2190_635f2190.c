/* Module: erv13260.dll
   Function: FUN_635f2190
   Address: 635f2190
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_635f2190(int param_1,int param_2,int *param_3)

{
  void *_Dst;
  
  _Dst = (void *)(param_2 + -1 + *param_3);
  memmove(_Dst,(void *)(param_1 + (int)_Dst),param_3[1] - param_1);
  param_3[1] = param_3[1] - param_1;
  return;
}


