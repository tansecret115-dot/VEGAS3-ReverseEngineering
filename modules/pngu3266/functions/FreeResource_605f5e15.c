/* Module: pngu3266.dll
   Function: FreeResource
   Address: 605f5e15
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual int __thiscall CPNPen::FreeResource(void) */

int __thiscall CPNPen::FreeResource(CPNPen *this)

{
                    /* 0x5e15  1061  ?FreeResource@CPNPen@@MAEHXZ */
  if (((*(int *)(this + 8) == 0) && (*(HGDIOBJ *)(this + 0x5f) != (HGDIOBJ)0x0)) &&
     (*(int *)(this + 0x67) == 0)) {
    DeleteObject(*(HGDIOBJ *)(this + 0x5f));
    *(undefined4 *)(this + 0x5f) = 0;
    return 1;
  }
  return 0;
}


