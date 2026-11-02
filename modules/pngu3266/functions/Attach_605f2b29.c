/* Module: pngu3266.dll
   Function: Attach
   Address: 605f2b29
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNBrush::Attach(struct HBRUSH__ *) */

void __thiscall CPNBrush::Attach(CPNBrush *this,HBRUSH__ *param_1)

{
                    /* 0x2b29  804  ?Attach@CPNBrush@@QAEXPAUHBRUSH__@@@Z */
  if ((*(HGDIOBJ *)(this + 0x2f) != (HGDIOBJ)0x0) && (*(int *)(this + 0x33) == 0)) {
    DeleteObject(*(HGDIOBJ *)(this + 0x2f));
  }
  *(undefined4 *)(this + 0x33) = 1;
  *(HBRUSH__ **)(this + 0x2f) = param_1;
  return;
}


