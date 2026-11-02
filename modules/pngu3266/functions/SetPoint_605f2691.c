/* Module: pngu3266.dll
   Function: SetPoint
   Address: 605f2691
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNEvent::SetPoint(class CPNxPoint const &) */

void __thiscall CPNEvent::SetPoint(CPNEvent *this,CPNxPoint *param_1)

{
                    /* 0x2691  1964  ?SetPoint@CPNEvent@@QAEXABVCPNxPoint@@@Z */
  *(uint *)(this + 0x20) = *(int *)(param_1 + 4) << 0x10 | *(uint *)param_1;
  return;
}


