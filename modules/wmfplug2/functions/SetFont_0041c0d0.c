/* Module: wmfplug2.dll
   Function: SetFont
   Address: 0041c0d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CEncodeWizard::SetFont(struct HFONT__ *) */

void __thiscall CEncodeWizard::SetFont(CEncodeWizard *this,HFONT__ *param_1)

{
                    /* 0x1c0d0  11  ?SetFont@CEncodeWizard@@QAEXPAUHFONT__@@@Z */
  *(HFONT__ **)(this + 0x910) = param_1;
  return;
}


