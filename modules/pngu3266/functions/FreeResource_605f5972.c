/* Module: pngu3266.dll
   Function: FreeResource
   Address: 605f5972
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual int __thiscall CPNFont::FreeResource(void) */

int __thiscall CPNFont::FreeResource(CPNFont *this)

{
                    /* 0x5972  1060  ?FreeResource@CPNFont@@MAEHXZ */
  if (((*(HGDIOBJ *)(this + 0x2c) != (HGDIOBJ)0x0) && (*(int *)(this + 8) == 0)) &&
     (*(int *)(this + 0x30) == 0)) {
    DeleteObject(*(HGDIOBJ *)(this + 0x2c));
    *(undefined4 *)(this + 0x2c) = 0;
    return 1;
  }
  return 0;
}


