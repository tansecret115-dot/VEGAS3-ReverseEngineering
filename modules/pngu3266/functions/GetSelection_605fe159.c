/* Module: pngu3266.dll
   Function: GetSelection
   Address: 605fe159
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNEdit::GetSelection(long &,long &)const  */

void __thiscall CPNEdit::GetSelection(CPNEdit *this,long *param_1,long *param_2)

{
  uint uVar1;
  
                    /* 0xe159  1346  ?GetSelection@CPNEdit@@UBEXAAJ0@Z */
  uVar1 = SendMessageA(*(HWND *)(this + 0xc),0xb0,0,0);
  *param_1 = uVar1 & 0xffff;
  *param_2 = uVar1 >> 0x10;
  return;
}


