/* Module: pngu3266.dll
   Function: Detach
   Address: 605f5c58
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNPen::Detach(void) */

void __thiscall CPNPen::Detach(CPNPen *this)

{
                    /* 0x5c58  953  ?Detach@CPNPen@@QAEXXZ */
  if ((*(int *)(this + 0x5f) != 0) && (*(int *)(this + 0x67) != 0)) {
    *(undefined4 *)(this + 0x5f) = 0;
  }
  *(undefined4 *)(this + 0x67) = 0;
  return;
}


