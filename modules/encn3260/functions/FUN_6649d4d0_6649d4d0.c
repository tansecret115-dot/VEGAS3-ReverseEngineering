/* Module: encn3260.dll
   Function: FUN_6649d4d0
   Address: 6649d4d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6649d4d0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (*(ushort *)((int)this + 0x82e) <= *(ushort *)((int)this + 0x82c)) {
    piVar3 = (int *)(*param_1 + -4);
    piVar2 = (int *)*piVar3;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x10))(piVar2,piVar3);
      return;
    }
    operator_delete(piVar3);
    return;
  }
  *(undefined4 *)(*param_1 + 0x10) = 0;
  if (*(int *)((int)this + 0x828) == 0) {
    *(int *)((int)this + 0x828) = *param_1;
    *(undefined4 *)(*param_1 + 4) = 0;
    *(short *)((int)this + 0x82c) = *(short *)((int)this + 0x82c) + 1;
    return;
  }
  *(int *)(*param_1 + 4) = *(int *)((int)this + 0x828);
  iVar1 = *param_1;
  *(short *)((int)this + 0x82c) = *(short *)((int)this + 0x82c) + 1;
  *(int *)((int)this + 0x828) = iVar1;
  return;
}


