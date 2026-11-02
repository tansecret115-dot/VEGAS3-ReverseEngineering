/* Module: pngu3266.dll
   Function: SetInitialPosition
   Address: 605fff29
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNPropertySheet::SetInitialPosition(class CPNxPoint) */

void __thiscall
CPNPropertySheet::SetInitialPosition(CPNPropertySheet *this,undefined4 param_2,undefined4 param_3)

{
                    /* 0xff29  1927  ?SetInitialPosition@CPNPropertySheet@@UAEXVCPNxPoint@@@Z */
  *(undefined4 *)(this + 0x124) = 1;
  *(undefined4 *)(this + 0x11c) = param_2;
  *(undefined4 *)(this + 0x120) = param_3;
  return;
}


