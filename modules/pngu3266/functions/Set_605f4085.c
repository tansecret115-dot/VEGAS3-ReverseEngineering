/* Module: pngu3266.dll
   Function: Set
   Address: 605f4085
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNColor::Set(unsigned char,unsigned char,unsigned char) */

void __thiscall CPNColor::Set(CPNColor *this,uchar param_1,uchar param_2,uchar param_3)

{
                    /* 0x4085  1812  ?Set@CPNColor@@QAEXEEE@Z */
  this[0x1e] = (CPNColor)param_2;
  this[0x1c] = (CPNColor)param_1;
  this[0x1d] = (CPNColor)param_3;
  *(undefined4 *)(this + 0xc) = 1;
  *(uint *)(this + 8) = (uint)CONCAT21(CONCAT11(param_3,param_2),param_1);
  return;
}


