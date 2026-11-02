/* Module: rv103260.dll
   Function: FUN_636a3340
   Address: 636a3340
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_636a3340(void *this,undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined1 local_14 [8];
  int local_c [2];
  
  iVar1 = -0x7fffbffb;
  *(undefined4 *)((int)this + 0x4c) = param_1;
  *(int *)((int)this + 0x54) = param_3;
  *(int **)((int)this + 0x50) = param_2;
  if ((param_3 != 0) && (param_2 != (int *)0x0)) {
    local_c[1] = 1;
    local_c[0] = ((uint)*(ushort *)((int)this + 0x3e) * 0x18 + 0x1f >> 3 & 0x1ffffffc) *
                 (uint)*(ushort *)((int)this + 0x40);
    iVar1 = (**(code **)(*param_2 + 0x10))(local_c,local_14);
  }
  if (iVar1 != 0) {
    *(undefined4 *)((int)this + 0x4c) = 0;
    *(undefined4 *)((int)this + 0x54) = 0;
    *(undefined4 *)((int)this + 0x50) = 0;
  }
  return;
}


