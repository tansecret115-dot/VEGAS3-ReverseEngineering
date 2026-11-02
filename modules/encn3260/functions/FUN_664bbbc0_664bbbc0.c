/* Module: encn3260.dll
   Function: FUN_664bbbc0
   Address: 664bbbc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664bbbc0(int *param_1)

{
  void *_Dst;
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  char *_Src;
  
  _Src = (char *)*param_1;
  iVar2 = FUN_664bbb40(*_Src);
  while ((iVar2 != 0 && (bVar1 = FUN_664d1c90(_Src,*_Src), CONCAT31(extraout_var,bVar1) != 0))) {
    _Src = FUN_664d1c60(_Src);
    iVar2 = FUN_664bbb40(*_Src);
  }
  _Dst = (void *)*param_1;
  iVar2 = (*(int *)((int)_Dst + -8) - (int)_Src) + (int)_Dst;
  memmove(_Dst,_Src,iVar2 + 1);
  *(int *)(*param_1 + -8) = iVar2;
  return;
}


