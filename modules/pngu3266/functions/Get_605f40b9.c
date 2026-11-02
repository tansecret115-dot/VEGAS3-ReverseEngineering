/* Module: pngu3266.dll
   Function: Get
   Address: 605f40b9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNColor::Get(unsigned char &,unsigned char &,unsigned char &) */

void __thiscall CPNColor::Get(CPNColor *this,uchar *param_1,uchar *param_2,uchar *param_3)

{
                    /* 0x40b9  1077  ?Get@CPNColor@@QAEXAAE00@Z */
  *param_1 = (uchar)this[0x1c];
  *param_2 = (uchar)this[0x1e];
  *param_3 = (uchar)this[0x1d];
  return;
}


