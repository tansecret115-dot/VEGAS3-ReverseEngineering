/* Module: pngu3266.dll
   Function: OnPaint
   Address: 6060b09c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNTabControl::OnPaint(class CPNDC *) */

void __thiscall XPNTabControl::OnPaint(XPNTabControl *this,CPNDC *param_1)

{
  CPNMemoryDC local_208 [500];
  CPNxRect local_14 [16];
  
                    /* 0x1b09c  1674  ?OnPaint@XPNTabControl@@UAEXPAVCPNDC@@@Z */
  (**(code **)(*(int *)this + 0x3c))(local_14);
  CPNMemoryDC::CPNMemoryDC(local_208,param_1,local_14);
  (**(code **)(*(int *)this + 0x174))(local_208,local_14);
  (**(code **)(*(int *)this + 0x170))(local_208,local_14);
  (**(code **)(*(int *)this + 0x178))(local_208,local_14);
  CPNMemoryDC::BlitToScreen(local_208);
  CPNMemoryDC::~CPNMemoryDC(local_208);
  return;
}


