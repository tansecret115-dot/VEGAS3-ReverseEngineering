/* Module: pngu3266.dll
   Function: Detach
   Address: 605f5811
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNFont::Detach(void) */

void __thiscall CPNFont::Detach(CPNFont *this)

{
                    /* 0x5811  950  ?Detach@CPNFont@@QAEXXZ */
  if ((*(int *)(this + 0x2c) != 0) && (*(int *)(this + 0x30) != 0)) {
    *(undefined4 *)(this + 0x2c) = 0;
  }
  *(undefined4 *)(this + 0x30) = 0;
  return;
}


