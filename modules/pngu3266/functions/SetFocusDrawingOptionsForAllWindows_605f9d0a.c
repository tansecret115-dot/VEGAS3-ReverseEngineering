/* Module: pngu3266.dll
   Function: SetFocusDrawingOptionsForAllWindows
   Address: 605f9d0a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static void __cdecl CPNWindow::SetFocusDrawingOptionsForAllWindows(unsigned long) */

void __cdecl CPNWindow::SetFocusDrawingOptionsForAllWindows(ulong param_1)

{
                    /* 0x9d0a  1910  ?SetFocusDrawingOptionsForAllWindows@CPNWindow@@SAXK@Z */
  zm_ulFocusDrawingFlags = param_1;
  return;
}


