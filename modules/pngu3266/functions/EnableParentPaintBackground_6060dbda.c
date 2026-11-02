/* Module: pngu3266.dll
   Function: EnableParentPaintBackground
   Address: 6060dbda
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static void __cdecl XPNWindow::EnableParentPaintBackground(int) */

void __cdecl XPNWindow::EnableParentPaintBackground(int param_1)

{
                    /* 0x1dbda  1031  ?EnableParentPaintBackground@XPNWindow@@SAXH@Z */
  zm_bParentPaintBackground = param_1;
  return;
}


