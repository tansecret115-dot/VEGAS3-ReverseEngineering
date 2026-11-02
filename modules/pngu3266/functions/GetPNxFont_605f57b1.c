/* Module: pngu3266.dll
   Function: GetPNxFont
   Address: 605f57b1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNFont::GetPNxFont(void * &) */

void __thiscall CPNFont::GetPNxFont(CPNFont *this,void **param_1)

{
                    /* 0x57b1  1286  ?GetPNxFont@CPNFont@@UAEXAAPAX@Z */
  *param_1 = *(void **)(this + 0x2c);
  return;
}


