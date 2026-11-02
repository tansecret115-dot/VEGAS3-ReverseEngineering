/* Module: pngu3266.dll
   Function: GetFamilyString
   Address: 6060d8a9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual char const * __thiscall XPNFont::GetFamilyString(void) */

char * __thiscall XPNFont::GetFamilyString(XPNFont *this)

{
  int iVar1;
  
                    /* 0x1d8a9  1188  ?GetFamilyString@XPNFont@@UAEPBDXZ */
  iVar1 = *(int *)(this + 0x10);
  if (iVar1 == 10) {
    return s_PNDECORATIVE_606492e0;
  }
  if (iVar1 == 0xb) {
    return s_PNROMAN_606492f0;
  }
  if (iVar1 == 0xc) {
    return s_PNSCRIPT_606492f8;
  }
  if (iVar1 != 0xd) {
    if (iVar1 == 0xe) {
      return s_PNMODERN_6064930c;
    }
    if (iVar1 != 0xf) {
      return s_PNDEFAULT_60649324;
    }
    return s_PNTELETYPE_60649318;
  }
  return s_PNSWISS_60649304;
}


