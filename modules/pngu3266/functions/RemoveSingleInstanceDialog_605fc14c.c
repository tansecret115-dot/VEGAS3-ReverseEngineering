/* Module: pngu3266.dll
   Function: RemoveSingleInstanceDialog
   Address: 605fc14c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: int __thiscall CPNDialog::RemoveSingleInstanceDialog(void) */

int __thiscall CPNDialog::RemoveSingleInstanceDialog(CPNDialog *this)

{
  uint uVar1;
  
                    /* 0xc14c  1771  ?RemoveSingleInstanceDialog@CPNDialog@@IAEHXZ */
  uVar1 = (**(code **)(*(int *)this + 0x138))();
  if (*(int *)(this + 0xc4) == 0) {
    return 0;
  }
  FUN_60619c00(&zm_SingleInstanceDlgs,uVar1);
  return 1;
}


