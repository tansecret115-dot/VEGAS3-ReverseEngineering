/* Module: rmto3260.dll
   Function: FUN_662d8cc0
   Address: 662d8cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662d8cc0(void *this,int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  void *this_00;
  int iVar2;
  
  iVar2 = 0;
  *(undefined4 *)((int)this + 0xbe) = param_2;
  if ((param_1 == 0) || (*(int *)(param_1 + 0x36) == 0)) {
    iVar2 = -0x7ff8ffa9;
  }
  if (-1 < iVar2) {
    iVar2 = FUN_662d92a0((int)this);
    if (-1 < iVar2) {
      iVar2 = FUN_662d8830(this,*(uint **)(param_1 + 0x36),*(uint *)(param_1 + 0x32));
      if (-1 < iVar2) {
        puVar1 = operator_new(0x35);
        if (puVar1 == (undefined4 *)0x0) {
          this_00 = (void *)0x0;
        }
        else {
          this_00 = (void *)FUN_662dc0e0(puVar1);
        }
        *(void **)this = this_00;
        if (this_00 == (void *)0x0) {
          iVar2 = -0x7ff8fff2;
        }
        if (-1 < iVar2) {
          iVar2 = FUN_662dc1c0(this_00,param_1,*(int *)((int)this + 4));
          if (iVar2 < 0) {
            puVar1 = *(undefined4 **)this;
            if (puVar1 != (undefined4 *)0x0) {
              thunk_FUN_662dc120(puVar1);
              operator_delete(puVar1);
            }
            *(undefined4 *)this = 0;
            if (iVar2 != -0x7ff8fff2) {
              iVar2 = 0;
            }
          }
        }
      }
    }
  }
  return iVar2;
}


