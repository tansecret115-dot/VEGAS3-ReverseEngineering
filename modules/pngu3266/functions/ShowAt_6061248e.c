/* Module: pngu3266.dll
   Function: ShowAt
   Address: 6061248e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNToolTip::ShowAt(long,long,class CPNxRect &) */

void __thiscall XPNToolTip::ShowAt(XPNToolTip *this,long param_1,long param_2,CPNxRect *param_3)

{
                    /* 0x2248e  2062  ?ShowAt@XPNToolTip@@UAEXJJAAVCPNxRect@@@Z */
  SetDimensions(this,param_1,param_2,param_3);
  (**(code **)(*(int *)this + 0x98))(1);
  return;
}


