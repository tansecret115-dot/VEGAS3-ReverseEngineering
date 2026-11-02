/* Module: pngu3266.dll
   Function: GetFaceName
   Address: 6060d8ea
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual char const * __thiscall XPNFont::GetFaceName(void) */

char * __thiscall XPNFont::GetFaceName(XPNFont *this)

{
                    /* 0x1d8ea  1186  ?GetFaceName@XPNFont@@UAEPBDXZ */
  return *(char **)(this + 0x28);
}


