/* Module: pngu3266.dll
   Function: DetachFromFrame
   Address: 605fa1ed
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNMenu::DetachFromFrame(class CPNFrame *) */

int __thiscall CPNMenu::DetachFromFrame(CPNMenu *this,CPNFrame *param_1)

{
                    /* 0xa1ed  957  ?DetachFromFrame@CPNMenu@@UAEHPAVCPNFrame@@@Z */
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return 0;
}


