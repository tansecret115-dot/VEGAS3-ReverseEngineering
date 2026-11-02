/* Module: pngu3266.dll
   Function: SetDimensions
   Address: 6060b8f5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* private: void __thiscall XPNTabControl::SetDimensions(void) */

void __thiscall XPNTabControl::SetDimensions(XPNTabControl *this)

{
  long lVar1;
  CPNClientDC local_1f8 [484];
  CPNxRect local_14 [16];
  
                    /* 0x1b8f5  1897  ?SetDimensions@XPNTabControl@@AAEXXZ */
  (**(code **)(*(int *)this + 0x3c))(local_14);
  CPNClientDC::CPNClientDC(local_1f8,(CPNWindow *)this);
  SetTextLengths(this,(CPNDC *)local_1f8,local_14);
  (**(code **)(*(int *)this + 0x17c))(local_14);
  lVar1 = CalculateTotalWidth(this);
  *(long *)(this + 0xd8) = lVar1;
  SetScrolling(this,(CPNDC *)local_1f8,local_14);
  CPNClientDC::~CPNClientDC(local_1f8);
  return;
}


