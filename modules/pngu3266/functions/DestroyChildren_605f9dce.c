/* Module: pngu3266.dll
   Function: DestroyChildren
   Address: 605f9dce
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall CPNWindow::DestroyChildren(void) */

void __thiscall CPNWindow::DestroyChildren(CPNWindow *this)

{
  int iVar1;
  int *piVar2;
  int local_8;
  
                    /* 0x9dce  943  ?DestroyChildren@CPNWindow@@IAEXXZ */
  iVar1 = *(int *)(this + 0x44);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    local_8 = *(int *)(iVar1 + 4);
    while (local_8 != 0) {
      piVar2 = (int *)FUN_6061a2c0(&local_8);
      piVar2 = (int *)*piVar2;
      if (piVar2 == (int *)0x0) break;
      (**(code **)(*piVar2 + 0xc))();
      (**(code **)(*piVar2 + 0x18))(0);
      if ((*(byte *)(piVar2 + 0x13) & 8) != 0) {
        (**(code **)*piVar2)(1);
      }
    }
    (**(code **)(**(int **)(this + 0x44) + 8))();
  }
  return;
}


