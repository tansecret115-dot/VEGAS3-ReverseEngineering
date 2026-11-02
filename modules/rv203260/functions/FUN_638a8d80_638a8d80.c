/* Module: rv203260.dll
   Function: FUN_638a8d80
   Address: 638a8d80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_638a8d80(void *this,undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined1 local_14 [8];
  int local_c [2];
  
  iVar1 = -0x7fffbffb;
  *(undefined4 *)((int)this + 0xca) = param_1;
  *(int *)((int)this + 0xd2) = param_3;
  *(int **)((int)this + 0xce) = param_2;
  if ((param_3 != 0) && (param_2 != (int *)0x0)) {
    local_c[1] = 1;
    local_c[0] = ((uint)*(ushort *)((int)this + 0xb8) * 0x18 + 0x1f >> 3 & 0x1ffffffc) *
                 (uint)*(ushort *)((int)this + 0xba);
    iVar1 = (**(code **)(*param_2 + 0x10))(local_c,local_14);
  }
  if (iVar1 != 0) {
    *(undefined4 *)((int)this + 0xca) = 0;
    *(undefined4 *)((int)this + 0xd2) = 0;
    *(undefined4 *)((int)this + 0xce) = 0;
  }
  return;
}


