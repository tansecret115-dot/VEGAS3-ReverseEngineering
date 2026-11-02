/* Module: pngu3266.dll
   Function: Detach
   Address: 605fcd9f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNRegion::Detach(void) */

void __thiscall CPNRegion::Detach(CPNRegion *this)

{
                    /* 0xcd9f  954  ?Detach@CPNRegion@@QAEXXZ */
  if ((*(int *)(this + 0xc) != 0) && (*(int *)(this + 0x10) != 0)) {
    *(undefined4 *)(this + 0xc) = 0;
  }
  *(undefined4 *)(this + 0x10) = 0;
  return;
}


