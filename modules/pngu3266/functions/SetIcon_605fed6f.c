/* Module: pngu3266.dll
   Function: SetIcon
   Address: 605fed6f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNMessageBox::SetIcon(class CPNIcon *) */

void __thiscall XPNMessageBox::SetIcon(XPNMessageBox *this,CPNIcon *param_1)

{
                    /* 0xed6f  1918  ?SetIcon@XPNMessageBox@@QAEXPAVCPNIcon@@@Z */
  *(CPNIcon **)(this + 0xd0) = param_1;
  return;
}


