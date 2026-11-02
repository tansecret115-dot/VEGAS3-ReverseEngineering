/* Module: pngu3266.dll
   Function: CPNColorMap
   Address: 605f5596
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNColorMap::CPNColorMap(int,unsigned char const *,unsigned char const
   *,unsigned char const *) */

CPNColorMap * __thiscall
CPNColorMap::CPNColorMap(CPNColorMap *this,int param_1,uchar *param_2,uchar *param_3,uchar *param_4)

{
                    /* 0x5596  34  ??0CPNColorMap@@QAE@HPBE00@Z */
  CPNObject::CPNObject((CPNObject *)this);
  *(undefined ***)this = &_vftable_;
  Create(this,param_1,param_2,param_3,param_4);
  return this;
}


