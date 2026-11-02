/* Module: encn3260.dll
   Function: FUN_664be6e0
   Address: 664be6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664be6e0(void *this,uint param_1,uint param_2)

{
  void *pvVar1;
  int iVar2;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(short *)((int)this + 0x16) = (short)param_2;
  *(undefined2 *)((int)this + 0x18) = 0;
  *(undefined ***)this = &PTR_LAB_664df6b8;
  if ((short)param_2 != 1) {
    param_1 = ((int)(((param_1 & 0xffff) - 1) + (param_2 & 0xffff)) / (int)(param_2 & 0xffff)) *
              param_2;
  }
  *(short *)((int)this + 0x14) = (short)(param_1 + 1);
  pvVar1 = operator_new(param_1 + 1 & 0xffff);
  *(void **)((int)this + 4) = pvVar1;
  if (pvVar1 != (void *)0x0) {
    iVar2 = (int)pvVar1 + (uint)*(ushort *)((int)this + 0x14);
    *(int *)((int)this + 0x10) = iVar2;
    iVar2 = iVar2 + -1;
    *(int *)((int)this + 8) = iVar2;
    *(int *)((int)this + 0xc) = iVar2;
    return this;
  }
  *(undefined2 *)((int)this + 0x14) = 0;
  return this;
}


