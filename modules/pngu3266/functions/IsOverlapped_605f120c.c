/* Module: pngu3266.dll
   Function: IsOverlapped
   Address: 605f120c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall CPNxRect::IsOverlapped(class CPNxRect &) */

int __thiscall CPNxRect::IsOverlapped(CPNxRect *this,CPNxRect *param_1)

{
  int iVar1;
  
                    /* 0x120c  1513  ?IsOverlapped@CPNxRect@@QAEHAAV1@@Z */
  if ((((*(int *)this < *(int *)(param_1 + 8)) && (*(int *)param_1 < *(int *)(this + 8))) &&
      (*(int *)(this + 4) < *(int *)(param_1 + 0xc))) &&
     (*(int *)(param_1 + 4) < *(int *)(this + 0xc))) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


