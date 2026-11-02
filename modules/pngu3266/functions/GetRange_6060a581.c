/* Module: pngu3266.dll
   Function: GetRange
   Address: 6060a581
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNScrollHelper::GetRange(long &,long &) */

void __thiscall CPNScrollHelper::GetRange(CPNScrollHelper *this,long *param_1,long *param_2)

{
                    /* 0x1a581  1310  ?GetRange@CPNScrollHelper@@QAEXAAJ0@Z */
  *param_1 = *(long *)(this + 0xc);
  *param_2 = *(long *)(this + 0x10);
  return;
}


