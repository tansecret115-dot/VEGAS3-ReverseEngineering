/* Module: pngu3266.dll
   Function: CancelToClose
   Address: 605fef16
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNPropertySheet::CancelToClose(void) */

void __thiscall CPNPropertySheet::CancelToClose(CPNPropertySheet *this)

{
                    /* 0xef16  838  ?CancelToClose@CPNPropertySheet@@QAEXXZ */
  PostMessageA(*(HWND *)(this + 0xc),0x46b,0,0);
  return;
}


