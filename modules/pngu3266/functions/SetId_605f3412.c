/* Module: pngu3266.dll
   Function: SetId
   Address: 605f3412
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNControl::SetId(unsigned long) */

void __thiscall CPNControl::SetId(CPNControl *this,ulong param_1)

{
                    /* 0x3412  1920  ?SetId@CPNControl@@UAEXK@Z */
  SetWindowLongA(*(HWND *)(this + 0xc),-0xc,param_1);
  return;
}


