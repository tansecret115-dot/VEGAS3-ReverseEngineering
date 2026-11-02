/* Module: rmto3260.dll
   Function: FUN_662f0ce0
   Address: 662f0ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


long __thiscall FUN_662f0ce0(void *this,long param_1,int param_2)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = _lseek(*(int *)((int)this + 4),param_1,param_2);
  if (lVar1 < 0) {
    piVar2 = _errno();
    *(int *)((int)this + 8) = *piVar2;
  }
  return lVar1;
}


