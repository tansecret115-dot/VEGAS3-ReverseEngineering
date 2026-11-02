/* Module: pngu3266.dll
   Function: SetIsAttached
   Address: 605f3969
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall XPNMenu::SetIsAttached(int) */

void __thiscall XPNMenu::SetIsAttached(XPNMenu *this,int param_1)

{
                    /* 0x3969  1929  ?SetIsAttached@XPNMenu@@IAEXH@Z
                       0x3969  2007  ?SetSource@CPNEvent@@QAEXPAVCPNRouter@@@Z */
  *(int *)(this + 0x10) = param_1;
  return;
}


