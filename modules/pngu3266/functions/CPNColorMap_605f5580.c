/* Module: pngu3266.dll
   Function: CPNColorMap
   Address: 605f5580
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNColorMap::CPNColorMap(void) */

CPNColorMap * __thiscall CPNColorMap::CPNColorMap(CPNColorMap *this)

{
                    /* 0x5580  35  ??0CPNColorMap@@QAE@XZ */
  CPNObject::CPNObject((CPNObject *)this);
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &_vftable_;
  return this;
}


