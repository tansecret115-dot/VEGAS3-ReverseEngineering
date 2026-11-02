/* Module: rmme3260.dll
   Function: FUN_66226070
   Address: 66226070
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66226070(void *this)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint *in_stack_0000001c;
  int local_10 [3];
  
  if (in_stack_0000001c == (uint *)0x0) {
    FUN_66250210((int *)&stack0x00000004);
    FUN_66250210((int *)&stack0x00000010);
    return -0x7ff8ffa9;
  }
  piVar1 = FUN_66250550(local_10,s_logical__6626f798,(undefined4 *)&stack0x00000010);
  FUN_662503a0(&stack0x00000010,piVar1);
  FUN_66250210(local_10);
  puVar2 = operator_new(0x62);
  if (puVar2 == (undefined4 *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_66218f30(puVar2);
  }
  if (piVar1 == (int *)0x0) {
    iVar3 = -0x7ff8fff2;
  }
  else {
    FUN_6624ff10(this,*(int *)((int)this + 4),piVar1);
    FUN_6624ff10((void *)((int)this + 0x16),*(int *)((int)this + 0x1a),piVar1);
    FUN_6624ff10((void *)((int)this + 0x26),*(int *)((int)this + 0x2a),piVar1);
    FUN_6624ff10((void *)((int)this + 0xa0),*(int *)((int)this + 0xa4),0);
    puVar2 = (undefined4 *)0x6622613c;
    FUN_6624ff10((void *)((int)this + 0xb0),*(int *)((int)this + 0xb4),0);
    FUN_66218280(piVar1,*(undefined2 *)((int)this + 0x36));
    *in_stack_0000001c = (uint)*(ushort *)((int)this + 0x36);
    *(short *)((int)this + 0x36) = *(short *)((int)this + 0x36) + 1;
    *(short *)((int)this + 0x14) = *(short *)((int)this + 0x14) + 1;
    FUN_66250110(&stack0xffffffd8,(int *)&stack0x00000004);
    iVar3 = FUN_662182b0(piVar1,puVar2);
    if (iVar3 == 0) {
      iVar3 = *piVar1;
      FUN_66250110(&stack0xffffffd8,(int *)&stack0x00000010);
      iVar3 = (**(code **)(iVar3 + 0x30))();
    }
  }
  FUN_66250210((int *)&stack0x00000004);
  FUN_66250210((int *)&stack0x00000010);
  return iVar3;
}


