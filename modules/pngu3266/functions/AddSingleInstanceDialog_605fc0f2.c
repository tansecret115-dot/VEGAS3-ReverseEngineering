/* Module: pngu3266.dll
   Function: AddSingleInstanceDialog
   Address: 605fc0f2
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: int __thiscall CPNDialog::AddSingleInstanceDialog(void) */

int __thiscall CPNDialog::AddSingleInstanceDialog(CPNDialog *this)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  CPNDialog *local_8;
  
                    /* 0xc0f2  773  ?AddSingleInstanceDialog@CPNDialog@@IAEHXZ */
  local_8 = this;
  uVar1 = (**(code **)(*(int *)this + 0x138))();
  local_8 = (CPNDialog *)0x0;
  if (*(int *)(this + 0xc4) != 0) {
    iVar2 = FUN_60619b60(&zm_SingleInstanceDlgs,uVar1,&local_8);
    if (iVar2 != 0) {
      (**(code **)(*(int *)local_8 + 0xa8))(0,2);
      return 0;
    }
    puVar3 = FUN_60619ba0(&zm_SingleInstanceDlgs,uVar1);
    *puVar3 = this;
  }
  return 1;
}


