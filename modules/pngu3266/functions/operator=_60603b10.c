/* Module: pngu3266.dll
   Function: operator=
   Address: 60603b10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNArrowButton & __thiscall CPNArrowButton::operator=(class CPNArrowButton const &)
    */

CPNArrowButton * __thiscall CPNArrowButton::operator=(CPNArrowButton *this,CPNArrowButton *param_1)

{
                    /* 0x13b10  433  ??4CPNArrowButton@@QAEAAV0@ABV0@@Z
                       0x13b10  438  ??4CPNButton@@QAEAAV0@ABV0@@Z
                       0x13b10  509  ??4XPNArrowButton@@QAEAAV0@ABV0@@Z */
  XPNButton::operator=((XPNButton *)this,(XPNButton *)param_1);
  return this;
}


