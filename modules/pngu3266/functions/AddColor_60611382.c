/* Module: pngu3266.dll
   Function: AddColor
   Address: 60611382
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNColorSelection::AddColor(unsigned long &) */

void __thiscall XPNColorSelection::AddColor(XPNColorSelection *this,ulong *param_1)

{
  CPNColor local_24 [32];
  
                    /* 0x21382  757  ?AddColor@XPNColorSelection@@QAEXAAK@Z */
  CPNColor::CPNColor(local_24,param_1);
  AddColor(this,local_24);
  CPNColor::~CPNColor(local_24);
  return;
}


