/* Module: rmto3260.dll
   Function: FUN_662ce710
   Address: 662ce710
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662ce710(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  short local_18;
  ushort uStack_16;
  uint local_8;
  
  iVar1 = FUN_662ce4e0((int)this);
  local_8 = 0;
  uVar3 = param_1;
  if (*(int *)(param_1 + 10) != 0) {
    do {
      if (iVar1 < 0) {
        return iVar1;
      }
      iVar1 = FUN_662d0290(this,&local_18);
      if ((-1 < iVar1) && (uVar3 = uStack_16 - 0xd, *(uint *)((int)this + 0x30) < uVar3)) {
        iVar1 = -0x7ffbff7f;
      }
      if (-1 < iVar1) {
        uVar2 = (**(code **)(**(int **)((int)this + 0x24) + 0x28))
                          (*(undefined4 *)((int)this + 0x2c),uVar3);
        if (uVar2 != uVar3) {
          iVar1 = -0x7ffbff7f;
        }
        if (-1 < iVar1) {
          FUN_662f0810(*(int **)((int)this + 0x28),s_Packet__lu_version____hu_stream__6630a8bc);
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(uint *)(param_1 + 10));
  }
  return iVar1;
}


