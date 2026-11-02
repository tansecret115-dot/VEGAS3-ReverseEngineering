/* Module: pngu3266.dll
   Function: SetPushedState
   Address: 6060c739
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNButton::SetPushedState(int) */

void __thiscall XPNButton::SetPushedState(XPNButton *this,int param_1)

{
                    /* 0x1c739  1971  ?SetPushedState@XPNButton@@UAEXH@Z */
  if (((*(int *)(this + 200) == 0) || (param_1 == 0)) &&
     ((*(int *)(this + 200) != 0 || (param_1 != 0)))) {
    *(int *)(this + 200) = param_1;
    (**(code **)(*(int *)this + 0x78))(0,1);
  }
  return;
}


