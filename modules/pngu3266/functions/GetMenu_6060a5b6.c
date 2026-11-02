/* Module: pngu3266.dll
   Function: GetMenu
   Address: 6060a5b6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNMenu * __thiscall CPNEvent::GetMenu(void)const  */

CPNMenu * __thiscall CPNEvent::GetMenu(CPNEvent *this)

{
                    /* 0x1a5b6  1247  ?GetMenu@CPNEvent@@QBEPAVCPNMenu@@XZ
                       0x1a5b6  1326  ?GetScrollDelay@CPNScrollHelper@@QBEKXZ
                       0x1a5b6  1390  ?GetTextFgColor@XPNDC@@QAEPAVCPNColor@@XZ
                       0x1a5b6  1409  ?GetUserData1@CPNEvent@@QBEKXZ
                       0x1a5b6  1411  ?GetWeight@XPNFont@@QBEHXZ
                       0x1a5b6  1527  ?IsValid@XPNImage@@UBEHXZ */
  return *(CPNMenu **)(this + 0x1c);
}


