/* Module: pncrt.dll
   Function: swscanf
   Address: 78027a50
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl swscanf(wchar_t *_Src,wchar_t *_Format,...)

{
  size_t sVar1;
  int iVar2;
  undefined4 unaff_retaddr;
  undefined4 *in_stack_0000000c;
  wchar_t in_stack_00000010;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  int in_stack_fffffff0;
  int in_stack_fffffff4;
  longlong in_stack_fffffff8;
  
                    /* 0x27a50  726  swscanf */
  pwVar5 = (wchar_t *)0x49;
  pwVar3 = _Src;
  pwVar4 = _Src;
  sVar1 = wcslen(_Src);
  iVar2 = FUN_7802a4d0(&stack0xffffffe0,_Format,&stack0x0000000c,pwVar3,(undefined *)(sVar1 << 1),
                       pwVar4,pwVar5,in_stack_fffffff0,in_stack_fffffff4,in_stack_fffffff8,
                       unaff_retaddr,(int)_Src,_Format,in_stack_0000000c,in_stack_00000010);
  return iVar2;
}


