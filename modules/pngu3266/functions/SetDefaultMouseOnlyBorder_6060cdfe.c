/* Module: pngu3266.dll
   Function: SetDefaultMouseOnlyBorder
   Address: 6060cdfe
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static void __cdecl XPNButton::SetDefaultMouseOnlyBorder(int) */

void __cdecl XPNButton::SetDefaultMouseOnlyBorder(int param_1)

{
                    /* 0x1cdfe  1892  ?SetDefaultMouseOnlyBorder@XPNButton@@SAXH@Z */
  g_bMouseOnlyBorder = param_1;
  return;
}


