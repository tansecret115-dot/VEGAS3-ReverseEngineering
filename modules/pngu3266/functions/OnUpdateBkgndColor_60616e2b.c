/* Module: pngu3266.dll
   Function: OnUpdateBkgndColor
   Address: 60616e2b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual void __thiscall XPNAnimButton::OnUpdateBkgndColor(void) */

void __thiscall XPNAnimButton::OnUpdateBkgndColor(XPNAnimButton *this)

{
  int iVar1;
  int *piVar2;
  
                    /* 0x26e2b  1706  ?OnUpdateBkgndColor@XPNAnimButton@@MAEXXZ */
  if (*(undefined4 **)(this + 0x126) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x126))(1);
    *(undefined4 *)(this + 0x126) = 0;
  }
  if (*(int **)(this + 0x122) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(this + 0x122) + 4))();
    if ((iVar1 != 0) && (*(int *)(this + 0x11e) != 0)) {
      piVar2 = (int *)(**(code **)(**(int **)(this + 0x122) + 0x50))();
      *(int **)(this + 0x126) = piVar2;
      (**(code **)(*piVar2 + 0x34))(0,0,this + 0xff);
    }
  }
  return;
}


