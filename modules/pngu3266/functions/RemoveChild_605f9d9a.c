/* Module: pngu3266.dll
   Function: RemoveChild
   Address: 605f9d9a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall CPNWindow::RemoveChild(class CPNWindow *) */

void __thiscall CPNWindow::RemoveChild(CPNWindow *this,CPNWindow *param_1)

{
  int *piVar1;
  int iVar2;
  
                    /* 0x9d9a  1759  ?RemoveChild@CPNWindow@@IAEXPAV1@@Z */
  if (((param_1 != (CPNWindow *)0x0) && (piVar1 = *(int **)(this + 0x44), piVar1 != (int *)0x0)) &&
     (piVar1[4] != 0)) {
    iVar2 = (**(code **)(*piVar1 + 0x18))(param_1,0);
    if (iVar2 != 0) {
      (**(code **)(**(int **)(this + 0x44) + 0xc))(iVar2);
    }
  }
  return;
}


