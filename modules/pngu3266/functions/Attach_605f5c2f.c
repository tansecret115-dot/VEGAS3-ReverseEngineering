/* Module: pngu3266.dll
   Function: Attach
   Address: 605f5c2f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNPen::Attach(struct HPEN__ *) */

void __thiscall CPNPen::Attach(CPNPen *this,HPEN__ *param_1)

{
                    /* 0x5c2f  813  ?Attach@CPNPen@@QAEXPAUHPEN__@@@Z */
  if ((*(HGDIOBJ *)(this + 0x5f) != (HGDIOBJ)0x0) && (*(int *)(this + 0x67) == 0)) {
    DeleteObject(*(HGDIOBJ *)(this + 0x5f));
  }
  *(undefined4 *)(this + 0x67) = 1;
  *(HPEN__ **)(this + 0x5f) = param_1;
  return;
}


