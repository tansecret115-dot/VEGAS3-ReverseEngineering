/* Module: pngu3266.dll
   Function: operator==
   Address: 605f13c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall CPNxRect::operator==(class CPNxRect const &)const  */

int __thiscall CPNxRect::operator==(CPNxRect *this,CPNxRect *param_1)

{
  int iVar1;
  
                    /* 0x13c0  570  ??8CPNxRect@@QBEHABV0@@Z */
  if ((((*(int *)this == *(int *)param_1) && (*(int *)(this + 4) == *(int *)(param_1 + 4))) &&
      (*(int *)(this + 8) == *(int *)(param_1 + 8))) &&
     (*(int *)(this + 0xc) == *(int *)(param_1 + 0xc))) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


