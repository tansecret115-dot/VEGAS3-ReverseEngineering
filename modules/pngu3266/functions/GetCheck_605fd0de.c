/* Module: pngu3266.dll
   Function: GetCheck
   Address: 605fd0de
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNCheckButton::GetCheck(void)const  */

int __thiscall CPNCheckButton::GetCheck(CPNCheckButton *this)

{
  LRESULT LVar1;
  
                    /* 0xd0de  1129  ?GetCheck@CPNCheckButton@@UBEHXZ
                       0xd0de  1130  ?GetCheck@CPNRadioBtn@@UBEHXZ */
  LVar1 = SendMessageA(*(HWND *)(this + 0xc),0xf0,0,0);
  return (uint)(LVar1 == 1);
}


