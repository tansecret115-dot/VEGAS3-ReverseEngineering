/* Module: pngu3266.dll
   Function: operator!=
   Address: 605f405f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall CPNColor::operator!=(class CPNColor const &)const  */

int __thiscall CPNColor::operator!=(CPNColor *this,CPNColor *param_1)

{
  int iVar1;
  
                    /* 0x405f  572  ??9CPNColor@@QBEHABV0@@Z */
  if (((this[0x1c] == param_1[0x1c]) && (this[0x1d] == param_1[0x1d])) &&
     (this[0x1e] == param_1[0x1e])) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}


