/* Module: pngu3266.dll
   Function: NotifyObservers
   Address: 60615db3
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNTreeControl::NotifyObservers(class CPNEvent &) */

void __thiscall XPNTreeControl::NotifyObservers(XPNTreeControl *this,CPNEvent *param_1)

{
                    /* 0x25db3  1580  ?NotifyObservers@XPNTreeControl@@UAEXAAVCPNEvent@@@Z */
  CPNRouter::NotifyObservers((CPNRouter *)this,param_1);
  return;
}


