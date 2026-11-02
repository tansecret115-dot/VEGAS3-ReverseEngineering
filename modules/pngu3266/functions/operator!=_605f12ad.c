/* Module: pngu3266.dll
   Function: operator!=
   Address: 605f12ad
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall CPNxPoint::operator!=(class CPNxPoint const &)const  */

int __thiscall CPNxPoint::operator!=(CPNxPoint *this,CPNxPoint *param_1)

{
  int iVar1;
  
                    /* 0x12ad  574  ??9CPNxPoint@@QBEHABV0@@Z
                       0x12ad  576  ??9CPNxSize@@QBEHABV0@@Z */
  if ((*(int *)this == *(int *)param_1) && (*(int *)(this + 4) == *(int *)(param_1 + 4))) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}


