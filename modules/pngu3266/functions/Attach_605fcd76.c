/* Module: pngu3266.dll
   Function: Attach
   Address: 605fcd76
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNRegion::Attach(struct HRGN__ *) */

void __thiscall CPNRegion::Attach(CPNRegion *this,HRGN__ *param_1)

{
                    /* 0xcd76  814  ?Attach@CPNRegion@@QAEXPAUHRGN__@@@Z */
  if ((*(HGDIOBJ *)(this + 0xc) != (HGDIOBJ)0x0) && (*(int *)(this + 0x10) == 0)) {
    DeleteObject(*(HGDIOBJ *)(this + 0xc));
  }
  *(undefined4 *)(this + 0x10) = 1;
  *(HRGN__ **)(this + 0xc) = param_1;
  return;
}


