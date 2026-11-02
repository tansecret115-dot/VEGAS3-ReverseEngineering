/* Module: pngu3266.dll
   Function: operator==
   Address: 605f1291
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall CPNxPoint::operator==(class CPNxPoint const &)const  */

int __thiscall CPNxPoint::operator==(CPNxPoint *this,CPNxPoint *param_1)

{
  int iVar1;
  
                    /* 0x1291  569  ??8CPNxPoint@@QBEHABV0@@Z
                       0x1291  571  ??8CPNxSize@@QBEHABV0@@Z */
  if ((*(int *)this == *(int *)param_1) && (*(int *)(this + 4) == *(int *)(param_1 + 4))) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


