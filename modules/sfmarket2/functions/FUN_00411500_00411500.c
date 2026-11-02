/* Module: sfmarket2.dll
   Function: FUN_00411500
   Address: 00411500
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00411500(void *this,byte param_1)

{
  int *piVar1;
  HGLOBAL pvVar2;
  
  piVar1 = *(int **)((int)this + 0x4c);
  *(undefined ***)this = &PTR_LAB_00495fa8;
  *(undefined ***)((int)this + 0x1c) = &PTR_LAB_00495f88;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0x4c) = 0;
  }
  if ((param_1 & 1) != 0) {
    pvVar2 = GlobalHandle(this);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(this);
    GlobalFree(pvVar2);
    return this;
  }
  return this;
}


