/* Module: pngu3266.dll
   Function: SetText
   Address: 605f33f5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNControl::SetText(char const *) */

void __thiscall CPNControl::SetText(CPNControl *this,char *param_1)

{
                    /* 0x33f5  2018  ?SetText@CPNControl@@UAEXPBD@Z */
  (**(code **)(*(int *)this + 0x20))(param_1);
  return;
}


