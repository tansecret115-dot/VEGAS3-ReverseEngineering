/* Module: pngu3266.dll
   Function: SetModalWindow
   Address: 605f6017
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDialog::SetModalWindow(class CPNWindow *) */

void __thiscall CPNDialog::SetModalWindow(CPNDialog *this,CPNWindow *param_1)

{
                    /* 0x6017  1951  ?SetModalWindow@CPNDialog@@UAEXPAVCPNWindow@@@Z
                       0x6017  1952  ?SetModalWindow@CPNFrame@@UAEXPAVCPNWindow@@@Z */
  *(CPNWindow **)(this + 0xbc) = param_1;
  return;
}


