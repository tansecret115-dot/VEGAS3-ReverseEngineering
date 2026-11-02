/* Module: pngu3266.dll
   Function: OnPaint
   Address: 60612256
   Source: Ghidra pseudocode (Stage 10 batch) */


/* private: void __thiscall XPNToolTip::OnPaint(class CPNDC *) */

void __thiscall XPNToolTip::OnPaint(XPNToolTip *this,CPNDC *param_1)

{
  CPNMemoryDC local_208 [500];
  CPNxRect local_14 [16];
  
                    /* 0x22256  1676  ?OnPaint@XPNToolTip@@AAEXPAVCPNDC@@@Z */
  (**(code **)(*(int *)this + 0x3c))(local_14);
  CPNMemoryDC::CPNMemoryDC(local_208,param_1,local_14);
  DrawBackground(this,(CPNDC *)local_208,local_14);
  DrawForeground(this,(CPNDC *)local_208,local_14);
  CPNMemoryDC::BlitToScreen(local_208);
  CPNMemoryDC::~CPNMemoryDC(local_208);
  return;
}


