/* Module: pngu3266.dll
   Function: GetButtonMenu
   Address: 605f3435
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNMenu * __thiscall XPNButton::GetButtonMenu(void) */

CPNMenu * __thiscall XPNButton::GetButtonMenu(XPNButton *this)

{
                    /* 0x3435  1117  ?GetButtonMenu@XPNButton@@QAEPAVCPNMenu@@XZ
                       0x3435  1191  ?GetFileName@XPNOpenFileDialog@@QAEPBDXZ
                       0x3435  1293  ?GetPath@XPNBrowseDialog@@QAEPBDXZ
                       0x3435  1380  ?GetTabList@XPNTabControl@@QBEPAVCPNSimpleList@@XZ */
  return *(CPNMenu **)(this + 0xd0);
}


