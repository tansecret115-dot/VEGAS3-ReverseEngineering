/* Module: pngu3266.dll
   Function: PtInRect
   Address: 605f11e6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall CPNxRect::PtInRect(class CPNxPoint const &)const  */

int __thiscall CPNxRect::PtInRect(CPNxRect *this,CPNxPoint *param_1)

{
  int iVar1;
  
                    /* 0x11e6  1725  ?PtInRect@CPNxRect@@QBEHABVCPNxPoint@@@Z */
  if ((((*(int *)param_1 < *(int *)this) || (*(int *)(this + 8) < *(int *)param_1)) ||
      (*(int *)(param_1 + 4) < *(int *)(this + 4))) ||
     (*(int *)(this + 0xc) < *(int *)(param_1 + 4))) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}


