/* Module: rmme3260.dll
   Function: FUN_662064a0
   Address: 662064a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662064a0(void *this,ushort param_1,undefined2 param_2)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)((int)this + 0x46) == 0) {
    pvVar1 = operator_new((uint)*(ushort *)((int)this + 0x4e) << 1);
    *(void **)((int)this + 0x46) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      iVar2 = -0x7ff8fff2;
    }
  }
  if (*(int *)((int)this + 0x4a) == 0) {
    pvVar1 = operator_new(0x30);
    *(void **)((int)this + 0x4a) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      iVar2 = -0x7ff8fff2;
    }
  }
  if (-1 < iVar2) {
    if ((*(int *)((int)this + 0x46) != 0) &&
       (*(ushort *)((int)this + 0x50) < *(ushort *)((int)this + 0x4e))) {
      *(ushort *)(*(int *)((int)this + 0x46) + (uint)*(ushort *)((int)this + 0x50) * 2) = param_1;
      *(short *)((int)this + 0x50) = *(short *)((int)this + 0x50) + 1;
      *(undefined2 *)(*(int *)((int)this + 0x4a) + (uint)param_1 * 2) = param_2;
      return iVar2;
    }
    if ((-1 < iVar2) && (*(ushort *)((int)this + 0x4e) <= *(ushort *)((int)this + 0x50))) {
      iVar2 = -0x7fffbffb;
    }
  }
  return iVar2;
}


