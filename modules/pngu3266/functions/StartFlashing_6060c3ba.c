/* Module: pngu3266.dll
   Function: StartFlashing
   Address: 6060c3ba
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNCustomText::StartFlashing(long,long) */

void __thiscall XPNCustomText::StartFlashing(XPNCustomText *this,long param_1,long param_2)

{
  void *this_00;
  CPNTimer *pCVar1;
  
                    /* 0x1c3ba  2072  ?StartFlashing@XPNCustomText@@QAEXJJ@Z */
  StopFlashing(this);
  this_00 = operator_new(0x72);
  if (this_00 == (void *)0x0) {
    pCVar1 = (CPNTimer *)0x0;
  }
  else {
    pCVar1 = FUN_6060c41d(this_00,this,param_1,param_2,(CPNTimer **)(this + 0x141));
  }
  *(CPNTimer **)(this + 0x141) = pCVar1;
  return;
}


