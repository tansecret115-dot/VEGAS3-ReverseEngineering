/* Module: pngu3266.dll
   Function: GetWeightString
   Address: 6060d90b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual char const * __thiscall XPNFont::GetWeightString(void) */

char * __thiscall XPNFont::GetWeightString(XPNFont *this)

{
                    /* 0x1d90b  1412  ?GetWeightString@XPNFont@@UAEPBDXZ */
  if (*(int *)(this + 0x1c) == 0x13) {
    return s_PNLIGHT_60649350;
  }
  if (*(int *)(this + 0x1c) != 0x14) {
    return s_PNNORMAL_60649344;
  }
  return s_PNBOLD_60649358;
}


