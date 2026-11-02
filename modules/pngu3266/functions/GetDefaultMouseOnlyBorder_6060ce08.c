/* Module: pngu3266.dll
   Function: GetDefaultMouseOnlyBorder
   Address: 6060ce08
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static int __cdecl XPNButton::GetDefaultMouseOnlyBorder(void) */

int __cdecl XPNButton::GetDefaultMouseOnlyBorder(void)

{
                    /* 0x1ce08  1181  ?GetDefaultMouseOnlyBorder@XPNButton@@SAHXZ */
  return g_bMouseOnlyBorder;
}


