/* Module: pngu3266.dll
   Function: NotifyChildren
   Address: 605f8dd1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNWindow::NotifyChildren(class CPNEvent &) */

void __thiscall CPNWindow::NotifyChildren(CPNWindow *this,CPNEvent *param_1)

{
  int *piVar1;
  int local_8;
  
                    /* 0x8dd1  1577  ?NotifyChildren@CPNWindow@@QAEXAAVCPNEvent@@@Z */
  if (*(int *)(this + 0x44) != 0) {
    local_8 = *(int *)(*(int *)(this + 0x44) + 4);
    while (local_8 != 0) {
      piVar1 = (int *)FUN_6061a2c0(&local_8);
      piVar1 = (int *)*piVar1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xdc))(param_1);
        (**(code **)(*piVar1 + 4))(param_1);
      }
    }
  }
  return;
}


