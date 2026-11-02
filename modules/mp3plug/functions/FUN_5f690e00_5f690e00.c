/* Module: mp3plug.dll
   Function: FUN_5f690e00
   Address: 5f690e00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f690e00(void *this,byte param_1)

{
  int *piVar1;
  HGLOBAL pvVar2;
  
  piVar1 = *(int **)((int)this + 0x810);
  *(undefined ***)this = &PTR_FUN_5f72cc8c;
  *(undefined ***)((int)this + 4) = &PTR_LAB_5f72cc68;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  FUN_5f686920(this);
  if ((param_1 & 1) != 0) {
    pvVar2 = GlobalHandle(this);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(this);
    GlobalFree(pvVar2);
    return this;
  }
  return this;
}


