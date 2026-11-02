/* Module: pngu3266.dll
   Function: FUN_60600c2e
   Address: 60600c2e
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_60600c2e(void *this,char *param_1)

{
  size_t sVar1;
  char *_Dest;
  
  if (*(void **)((int)this + 0xd0) != (void *)0x0) {
    operator_delete(*(void **)((int)this + 0xd0));
    *(undefined4 *)((int)this + 0xd0) = 0;
  }
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    _Dest = operator_new(sVar1 + 1);
    *(char **)((int)this + 0xd0) = _Dest;
    strcpy(_Dest,param_1);
  }
  return;
}


