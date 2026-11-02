/* Module: pngu3266.dll
   Function: Contains
   Address: 605f1238
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall CPNxRect::Contains(class CPNxRect &) */

int __thiscall CPNxRect::Contains(CPNxRect *this,CPNxRect *param_1)

{
  int iVar1;
  
                    /* 0x1238  879  ?Contains@CPNxRect@@QAEHAAV1@@Z */
  if ((((*(int *)param_1 < *(int *)this) || (*(int *)(this + 8) < *(int *)(param_1 + 8))) ||
      (*(int *)(param_1 + 4) < *(int *)(this + 4))) ||
     (*(int *)(this + 0xc) < *(int *)(param_1 + 0xc))) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}


