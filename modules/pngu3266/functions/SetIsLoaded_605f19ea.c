/* Module: pngu3266.dll
   Function: SetIsLoaded
   Address: 605f19ea
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall XPNMenu::SetIsLoaded(int) */

void __thiscall XPNMenu::SetIsLoaded(XPNMenu *this,int param_1)

{
                    /* 0x19ea  1930  ?SetIsLoaded@XPNMenu@@IAEXH@Z
                       0x19ea  1955  ?SetNotification@CPNEvent@@QAEXK@Z
                       0x19ea  2008  ?SetSpecificEventType@CPNEvent@@QAEXK@Z
                       0x19ea  2011  ?SetStyle@XPNBrush@@UAEXJ@Z */
  *(int *)(this + 0xc) = param_1;
  return;
}


