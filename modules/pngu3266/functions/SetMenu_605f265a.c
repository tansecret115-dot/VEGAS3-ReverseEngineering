/* Module: pngu3266.dll
   Function: SetMenu
   Address: 605f265a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNEvent::SetMenu(class CPNMenu *) */

void __thiscall CPNEvent::SetMenu(CPNEvent *this,CPNMenu *param_1)

{
                    /* 0x265a  1946  ?SetMenu@CPNEvent@@QAEXPAVCPNMenu@@@Z
                       0x265a  1982  ?SetScrollDelay@CPNScrollHelper@@QAEXK@Z
                       0x265a  2040  ?SetUserData1@CPNEvent@@QAEXK@Z */
  *(CPNMenu **)(this + 0x1c) = param_1;
  return;
}


