/* Module: pngu3266.dll
   Function: StopFlashing
   Address: 6060c3f3
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNCustomText::StopFlashing(void) */

void __thiscall XPNCustomText::StopFlashing(XPNCustomText *this)

{
                    /* 0x1c3f3  2078  ?StopFlashing@XPNCustomText@@QAEXXZ */
  if (*(XPNTimer **)(this + 0x141) != (XPNTimer *)0x0) {
    FUN_6060c535(*(XPNTimer **)(this + 0x141));
    if (*(int **)(this + 0x141) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x141) + 0x10))();
    }
    *(undefined4 *)(this + 0x141) = 0;
  }
  return;
}


