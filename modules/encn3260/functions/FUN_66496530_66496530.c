/* Module: encn3260.dll
   Function: FUN_66496530
   Address: 66496530
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66496530(void *this,int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(short *)((int)this + 0x6e) = *(short *)((int)this + 0x6e) + 1;
  if ((uint)*(ushort *)((int)this + 0x6e) == *(uint *)((int)this + 0x66)) {
    *(undefined2 *)((int)this + 0x6e) = 0;
  }
  iVar1 = (**(code **)(*param_1 + 0x28))();
  if (iVar1 != 0) {
    *(short *)((int)this + 0x6a) = *(short *)((int)this + 0x6a) + 1;
  }
  if (param_1[7] == 0) {
    *(int *)((int)this + 0x7e) = *(int *)((int)this + 0x7e) + 1;
  }
  uVar2 = (**(code **)(*param_1 + 0x1c))(param_1);
  *(undefined4 *)((int)this + 0x1a2) = uVar2;
  if ((uint)param_1[9] < *(uint *)((int)this + 0x1ea)) {
    *(uint *)((int)this + 0x1ea) = *(uint *)((int)this + 0x1ea) - param_1[9];
    return;
  }
  *(undefined4 *)((int)this + 0x1ea) = 0;
  return;
}


