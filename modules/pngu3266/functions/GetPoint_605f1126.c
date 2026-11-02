/* Module: pngu3266.dll
   Function: GetPoint
   Address: 605f1126
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNxPoint::GetPoint(long &,long &)const  */

void __thiscall CPNxPoint::GetPoint(CPNxPoint *this,long *param_1,long *param_2)

{
                    /* 0x1126  1299  ?GetPoint@CPNxPoint@@QBEXAAJ0@Z
                       0x1126  1355  ?GetSize@CPNxSize@@QBEXAAJ0@Z */
  *param_1 = *(long *)this;
  *param_2 = *(long *)(this + 4);
  return;
}


