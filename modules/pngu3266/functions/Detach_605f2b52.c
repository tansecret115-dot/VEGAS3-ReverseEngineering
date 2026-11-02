/* Module: pngu3266.dll
   Function: Detach
   Address: 605f2b52
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNBrush::Detach(void) */

void __thiscall CPNBrush::Detach(CPNBrush *this)

{
                    /* 0x2b52  947  ?Detach@CPNBrush@@QAEXXZ */
  if ((*(int *)(this + 0x2f) != 0) && (*(int *)(this + 0x33) != 0)) {
    *(undefined4 *)(this + 0x2f) = 0;
  }
  *(undefined4 *)(this + 0x33) = 0;
  return;
}


