/* Module: rmbe3260.dll
   Function: FUN_6604bb40
   Address: 6604bb40
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6604bb40(void *this,undefined4 param_1,ushort *param_2,undefined2 *param_3)

{
  void *pvVar1;
  
  switch(*(undefined2 *)((int)this + 0x18)) {
  case 0:
    *(undefined2 *)((int)this + 4) = 0xe8;
    break;
  case 1:
    *(undefined2 *)((int)this + 4) = 0x130;
    break;
  case 2:
    *(undefined2 *)((int)this + 4) = 0x128;
    break;
  case 3:
    *(undefined2 *)((int)this + 4) = 0x140;
    break;
  default:
    return -0x7ff8ffa9;
  }
  *(undefined2 *)((int)this + 6) = 6;
  *(uint *)((int)this + 0xc) = (uint)*(ushort *)((int)this + 4) * 6;
  *param_2 = *(ushort *)((int)this + 4);
  *param_3 = *(undefined2 *)((int)this + 6);
  if (*(void **)((int)this + 0x10) != (void *)0x0) {
    operator_delete(*(void **)((int)this + 0x10));
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  pvVar1 = operator_new(*(uint *)((int)this + 0xc));
  *(void **)((int)this + 0x10) = pvVar1;
  if (pvVar1 != (void *)0x0) {
    if (*(void **)((int)this + 0x14) != (void *)0x0) {
      operator_delete(*(void **)((int)this + 0x14));
    }
    *(undefined4 *)((int)this + 0x14) = 0;
    pvVar1 = operator_new((uint)*(ushort *)((int)this + 6) << 2);
    *(void **)((int)this + 0x14) = pvVar1;
    return (-(uint)(pvVar1 != (void *)0x0) & 0x7ff8fff2) + 0x8007000e;
  }
  return -0x7ff8fff2;
}


