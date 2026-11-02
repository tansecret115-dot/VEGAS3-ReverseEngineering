/* Module: enlv3260.dll
   Function: FUN_661d2990
   Address: 661d2990
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_661d2990(void *this,int param_1)

{
  void *this_00;
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  local_10 = *(int *)(param_1 + 4);
  this_00 = (void *)((int)this + 0x18);
  local_8 = 0;
  local_c = FUN_661d32d0(this_00,uVar1,&local_14);
  FUN_661d2950((int)this);
  if (*(int *)(param_1 + 8) == 0) {
    if (this == (void *)0xfffffffc) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 0x14);
    }
    if (*(int *)this < iVar2) {
      if (local_c != 0) goto LAB_661d2a26;
      if (local_10 != 0) {
        puVar3 = FUN_661d3310(this_00,uVar1);
        *puVar3 = 0;
        goto LAB_661d2a26;
      }
    }
    else if (local_c != 0) {
      if (local_10 != 0) {
        local_8 = 1;
        FUN_661d3370(this_00,uVar1);
      }
      goto LAB_661d2a26;
    }
  }
  local_8 = 1;
LAB_661d2a26:
  iVar2 = local_8;
  if (local_8 != 0) {
    FUN_661d2980((int)this);
    FUN_661d3530((void *)((int)this + 4),param_1);
  }
  FUN_661d2960((int)this);
  return iVar2;
}


