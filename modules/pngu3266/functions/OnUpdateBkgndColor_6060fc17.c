/* Module: pngu3266.dll
   Function: OnUpdateBkgndColor
   Address: 6060fc17
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual void __thiscall XPNAnimateCtl::OnUpdateBkgndColor(void) */

void __thiscall XPNAnimateCtl::OnUpdateBkgndColor(XPNAnimateCtl *this)

{
  int iVar1;
  int *piVar2;
  
                    /* 0x1fc17  1707  ?OnUpdateBkgndColor@XPNAnimateCtl@@MAEXXZ */
  if (*(undefined4 **)(this + 0xeb) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0xeb))(1);
    *(undefined4 *)(this + 0xeb) = 0;
  }
  if (*(int **)(this + 0xe7) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(this + 0xe7) + 4))();
    if ((iVar1 != 0) && (*(int *)(this + 0xe3) != 0)) {
      piVar2 = (int *)(**(code **)(**(int **)(this + 0xe7) + 0x50))();
      *(int **)(this + 0xeb) = piVar2;
      (**(code **)(*piVar2 + 0x34))(0,0,this + 0xc4);
    }
  }
  return;
}


