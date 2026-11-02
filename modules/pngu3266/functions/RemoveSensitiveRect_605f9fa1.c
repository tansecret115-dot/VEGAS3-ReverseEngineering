/* Module: pngu3266.dll
   Function: RemoveSensitiveRect
   Address: 605f9fa1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNWindow::RemoveSensitiveRect(long) */

void __thiscall CPNWindow::RemoveSensitiveRect(CPNWindow *this,long param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int local_8;
  
                    /* 0x9fa1  1770  ?RemoveSensitiveRect@CPNWindow@@QAEXJ@Z */
  iVar1 = *(int *)(this + 0x70);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    local_8 = *(int *)(iVar1 + 4);
    do {
      while( true ) {
        iVar1 = local_8;
        local_8 = iVar1;
        if (iVar1 == 0) goto LAB_605fa009;
        puVar3 = (undefined4 *)FUN_6061a2c0(&local_8);
        pvVar2 = (void *)*puVar3;
        if (param_1 != -1) break;
        operator_delete(pvVar2);
        (**(code **)(**(int **)(this + 0x70) + 0xc))(iVar1);
      }
    } while (param_1 != *(int *)((int)pvVar2 + 0x10));
    operator_delete(pvVar2);
    (**(code **)(**(int **)(this + 0x70) + 0xc))(iVar1);
LAB_605fa009:
    puVar3 = *(undefined4 **)(this + 0x70);
    if (puVar3[4] == 0) {
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
      *(undefined4 *)(this + 0x70) = 0;
    }
  }
  return;
}


