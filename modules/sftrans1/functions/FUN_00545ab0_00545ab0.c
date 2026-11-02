/* Module: sftrans1.dll
   Function: FUN_00545ab0
   Address: 00545ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00545ab0(int *param_1)

{
  void *_Dst;
  int iVar1;
  uchar *_Ptr;
  
  FUN_00545d10();
  _Ptr = (uchar *)*param_1;
  iVar1 = _ismbcspace((int)(char)*_Ptr);
  while (iVar1 != 0) {
    _Ptr = _mbsinc(_Ptr);
    iVar1 = _ismbcspace((int)(char)*_Ptr);
  }
  _Dst = (void *)*param_1;
  iVar1 = (*(int *)((int)_Dst + -8) - (int)_Ptr) + (int)_Dst;
  memmove(_Dst,_Ptr,iVar1 + 1);
  *(int *)(*param_1 + -8) = iVar1;
  return;
}


