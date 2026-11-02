/* Module: pngu3266.dll
   Function: GetStyleString
   Address: 6060d8ee
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual char const * __thiscall XPNFont::GetStyleString(void) */

char * __thiscall XPNFont::GetStyleString(XPNFont *this)

{
                    /* 0x1d8ee  1374  ?GetStyleString@XPNFont@@UAEPBDXZ */
  if (*(int *)(this + 0x18) == 0x10) {
    return s_PNITALIC_60649330;
  }
  if (*(int *)(this + 0x18) != 0x11) {
    return s_PNNORMAL_60649344;
  }
  return s_PNSLANT_6064933c;
}


