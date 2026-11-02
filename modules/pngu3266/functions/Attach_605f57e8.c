/* Module: pngu3266.dll
   Function: Attach
   Address: 605f57e8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNFont::Attach(struct HFONT__ *) */

void __thiscall CPNFont::Attach(CPNFont *this,HFONT__ *param_1)

{
                    /* 0x57e8  808  ?Attach@CPNFont@@QAEXPAUHFONT__@@@Z */
  if ((*(HGDIOBJ *)(this + 0x2c) != (HGDIOBJ)0x0) && (*(int *)(this + 0x30) == 0)) {
    DeleteObject(*(HGDIOBJ *)(this + 0x2c));
  }
  *(undefined4 *)(this + 0x30) = 1;
  *(HFONT__ **)(this + 0x2c) = param_1;
  return;
}


