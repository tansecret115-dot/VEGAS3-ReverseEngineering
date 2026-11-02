/* Module: rmme3260.dll
   Function: FUN_662195d0
   Address: 662195d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662195d0(void *this)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_stack_00000010;
  uint in_stack_00000014;
  undefined4 *in_stack_00000018;
  byte *in_stack_ffffffdc;
  int local_8;
  
  local_8 = 0;
  FUN_66250110(&stack0xffffffdc,(int *)&stack0x00000004);
  piVar1 = (int *)FUN_662193b0(this,in_stack_ffffffdc);
  if (piVar1 == (int *)0x0) {
    local_8 = -0x7ffbfd7f;
  }
  if ((local_8 == 0) && (piVar1 != (int *)0x0)) {
    *(undefined4 *)((int)piVar1 + 0xb) = in_stack_00000010;
    *(short *)((int)piVar1 + 0xf) = (short)in_stack_00000014;
    if (*(void **)((int)piVar1 + 0x11) != (void *)0x0) {
      operator_delete(*(void **)((int)piVar1 + 0x11));
    }
    puVar2 = operator_new(in_stack_00000014 & 0xffff);
    *(undefined4 **)((int)piVar1 + 0x11) = puVar2;
    for (uVar4 = (in_stack_00000014 & 0xffff) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar2 = *in_stack_00000018;
      in_stack_00000018 = in_stack_00000018 + 1;
      puVar2 = puVar2 + 1;
    }
    for (in_stack_00000014 = in_stack_00000014 & 3; in_stack_00000014 != 0;
        in_stack_00000014 = in_stack_00000014 - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)in_stack_00000018;
      in_stack_00000018 = (undefined4 *)((int)in_stack_00000018 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    iVar3 = FUN_66218f10((int)piVar1);
    *piVar1 = iVar3;
    iVar3 = FUN_66218eb0((int)this + 0x46);
    *(int *)((int)this + 0x46) = iVar3;
  }
  FUN_66250210((int *)&stack0x00000004);
  return local_8;
}


