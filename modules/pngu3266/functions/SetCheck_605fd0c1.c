/* Module: pngu3266.dll
   Function: SetCheck
   Address: 605fd0c1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNCheckButton::SetCheck(int) */

void __thiscall CPNCheckButton::SetCheck(CPNCheckButton *this,int param_1)

{
                    /* 0xd0c1  1857  ?SetCheck@CPNCheckButton@@UAEXH@Z
                       0xd0c1  1858  ?SetCheck@CPNRadioBtn@@UAEXH@Z */
  SendMessageA(*(HWND *)(this + 0xc),0xf1,(uint)(param_1 != 0),0);
  return;
}


