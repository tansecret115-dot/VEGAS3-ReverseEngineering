/* Module: pngu3266.dll
   Function: FUN_60600c75
   Address: 60600c75
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_60600c75(void *this,char *param_1)

{
  size_t sVar1;
  char *_Dest;
  
  if (*(void **)((int)this + 0xd4) != (void *)0x0) {
    operator_delete(*(void **)((int)this + 0xd4));
    *(undefined4 *)((int)this + 0xd4) = 0;
  }
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    _Dest = operator_new(sVar1 + 1);
    *(char **)((int)this + 0xd4) = _Dest;
    strcpy(_Dest,param_1);
  }
  return;
}


