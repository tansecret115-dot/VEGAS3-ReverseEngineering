/* Module: pngu3266.dll
   Function: GetRect
   Address: 605f11c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNxRect::GetRect(long &,long &,long &,long &)const  */

void __thiscall
CPNxRect::GetRect(CPNxRect *this,long *param_1,long *param_2,long *param_3,long *param_4)

{
                    /* 0x11c0  1313  ?GetRect@CPNxRect@@QBEXAAJ000@Z */
  *param_1 = *(long *)this;
  *param_2 = *(long *)(this + 4);
  *param_3 = *(long *)(this + 8);
  *param_4 = *(long *)(this + 0xc);
  return;
}


