/* Module: g2plug.dll
   Function: SetFont
   Address: 5f80bf80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CG2EncodeWizard::SetFont(struct HFONT__ *) */

void __thiscall CG2EncodeWizard::SetFont(CG2EncodeWizard *this,HFONT__ *param_1)

{
                    /* 0xbf80  16  ?SetFont@CG2EncodeWizard@@QAEXPAUHFONT__@@@Z */
  *(HFONT__ **)(this + 0x688) = param_1;
  return;
}


