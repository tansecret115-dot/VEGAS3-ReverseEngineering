/* Module: pngu3266.dll
   Function: AttachToFrame
   Address: 605fa1d2
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNMenu::AttachToFrame(class CPNFrame *) */

int __thiscall CPNMenu::AttachToFrame(CPNMenu *this,CPNFrame *param_1)

{
  BOOL BVar1;
  
                    /* 0xa1d2  819  ?AttachToFrame@CPNMenu@@UAEHPAVCPNFrame@@@Z */
  *(undefined4 *)(this + 0x10) = 1;
  *(CPNFrame **)(this + 0x18) = param_1;
  BVar1 = SetMenu((HWND)param_1,*(HMENU *)(this + 0x14));
  return BVar1;
}


