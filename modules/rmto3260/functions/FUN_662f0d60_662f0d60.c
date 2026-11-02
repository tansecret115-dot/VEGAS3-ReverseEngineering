/* Module: rmto3260.dll
   Function: FUN_662f0d60
   Address: 662f0d60
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662f0d60(void *this,void *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = _write(*(int *)((int)this + 4),param_1,param_2);
  if (iVar1 < 0) {
    piVar2 = _errno();
    *(int *)((int)this + 8) = *piVar2;
  }
  return iVar1;
}


