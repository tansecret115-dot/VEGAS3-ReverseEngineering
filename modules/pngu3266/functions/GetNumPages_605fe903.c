/* Module: pngu3266.dll
   Function: GetNumPages
   Address: 605fe903
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: unsigned long __thiscall XPNPropertySheet::GetNumPages(void)const  */

ulong __thiscall XPNPropertySheet::GetNumPages(XPNPropertySheet *this)

{
                    /* 0xe903  1280  ?GetNumPages@XPNPropertySheet@@QBEKXZ */
  return *(ulong *)(this + 0xd4);
}


