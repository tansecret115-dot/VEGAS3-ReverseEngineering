/* Module: rmme3260.dll
   Function: FUN_66203bc0
   Address: 66203bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66203bc0(void *this,ushort param_1)

{
  void *pvVar1;
  
  if (*(void **)((int)this + 0x50) != (void *)0x0) {
    operator_delete(*(void **)((int)this + 0x50));
    *(undefined4 *)((int)this + 0x50) = 0;
    *(undefined2 *)((int)this + 0x4c) = 0;
    *(undefined2 *)((int)this + 0x4e) = 0;
  }
  pvVar1 = operator_new((uint)param_1 << 1);
  *(void **)((int)this + 0x50) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    return 0x8007000e;
  }
  *(ushort *)((int)this + 0x4e) = param_1;
  return 0;
}


