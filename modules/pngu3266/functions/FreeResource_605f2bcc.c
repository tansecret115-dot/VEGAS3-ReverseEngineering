/* Module: pngu3266.dll
   Function: FreeResource
   Address: 605f2bcc
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual int __thiscall CPNBrush::FreeResource(void) */

int __thiscall CPNBrush::FreeResource(CPNBrush *this)

{
                    /* 0x2bcc  1059  ?FreeResource@CPNBrush@@MAEHXZ */
  if (((*(int *)(this + 8) == 0) && (*(HGDIOBJ *)(this + 0x2f) != (HGDIOBJ)0x0)) &&
     (*(int *)(this + 0x33) == 0)) {
    DeleteObject(*(HGDIOBJ *)(this + 0x2f));
    *(undefined4 *)(this + 0x2f) = 0;
    return 1;
  }
  return 0;
}


