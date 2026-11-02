/* Module: pngu3266.dll
   Function: GetData
   Address: 605f2eb6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: unsigned long __thiscall CPNWindow::GetData(void)const  */

ulong __thiscall CPNWindow::GetData(CPNWindow *this)

{
                    /* 0x2eb6  1177  ?GetData@CPNWindow@@QBEKXZ */
  return *(ulong *)(this + 0x4c);
}


