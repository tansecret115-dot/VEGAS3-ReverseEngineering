/* Module: rmme3260.dll
   Function: FUN_66257500
   Address: 66257500
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66257500(void *this,byte param_1)

{
  int iVar1;
  int *piVar2;
  
  *(undefined ***)this = &PTR_FUN_6626ceb0;
  if (-1 < *(int *)((int)this + 4)) {
    iVar1 = _close(*(int *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0xffffffff;
    if (iVar1 < 0) {
      piVar2 = _errno();
      *(int *)((int)this + 8) = *piVar2;
    }
  }
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  *(undefined ***)this = &PTR_FUN_6626bcf8;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


