/* Module: rmto3260.dll
   Function: FUN_662ff7f0
   Address: 662ff7f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662ff7f0(void *this,undefined4 param_1,undefined2 *param_2,undefined2 *param_3)

{
  void *pvVar1;
  
  *(undefined2 *)((int)this + 4) = 0xe0;
  *(undefined2 *)((int)this + 6) = 6;
  *(undefined4 *)((int)this + 0xc) = 0x540;
  *param_2 = 0xe0;
  *param_3 = *(undefined2 *)((int)this + 6);
  if (*(void **)((int)this + 0x10) != (void *)0x0) {
    operator_delete(*(void **)((int)this + 0x10));
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  pvVar1 = operator_new(*(uint *)((int)this + 0xc));
  *(void **)((int)this + 0x10) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    return -0x7ff8fff2;
  }
  if (*(void **)((int)this + 0x14) != (void *)0x0) {
    operator_delete(*(void **)((int)this + 0x14));
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  pvVar1 = operator_new((uint)*(ushort *)((int)this + 6) << 2);
  *(void **)((int)this + 0x14) = pvVar1;
  return (-(uint)(pvVar1 != (void *)0x0) & 0x7ff8fff2) + 0x8007000e;
}


