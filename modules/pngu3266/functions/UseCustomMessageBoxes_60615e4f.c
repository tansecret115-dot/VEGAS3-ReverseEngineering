/* Module: pngu3266.dll
   Function: UseCustomMessageBoxes
   Address: 60615e4f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static void __cdecl XPNMessageBox::UseCustomMessageBoxes(int) */

void __cdecl XPNMessageBox::UseCustomMessageBoxes(int param_1)

{
                    /* 0x25e4f  2121  ?UseCustomMessageBoxes@XPNMessageBox@@SAXH@Z */
  zmb_CustomMessageBoxes = param_1;
  return;
}


