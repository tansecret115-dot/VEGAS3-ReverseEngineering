/* Module: pngu3266.dll
   Function: Detach
   Address: 605f3dd6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNIcon::Detach(void) */

void __thiscall CPNIcon::Detach(CPNIcon *this)

{
                    /* 0x3dd6  951  ?Detach@CPNIcon@@UAEXXZ */
  *(undefined4 *)(this + 0x2a) = 0;
  return;
}


