/* Module: pngu3266.dll
   Function: FUN_606195b0
   Address: 606195b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_606195b0(int *param_1)

{
  void *_Dst;
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  char *_Src;
  
  _Src = (char *)*param_1;
  iVar2 = FUN_60619530(*_Src);
  while ((iVar2 != 0 && (bVar1 = FUN_6061baf0(_Src,*_Src), CONCAT31(extraout_var,bVar1) != 0))) {
    _Src = FUN_6061bac0(_Src);
    iVar2 = FUN_60619530(*_Src);
  }
  _Dst = (void *)*param_1;
  iVar2 = (*(int *)((int)_Dst + -8) - (int)_Src) + (int)_Dst;
  memmove(_Dst,_Src,iVar2 + 1);
  *(int *)(*param_1 + -8) = iVar2;
  return;
}


