/* Module: pngu3266.dll
   Function: ~CPNColorMap
   Address: 605f55c1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNColorMap::~CPNColorMap(void) */

void __thiscall CPNColorMap::~CPNColorMap(CPNColorMap *this)

{
                    /* 0x55c1  317  ??1CPNColorMap@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  if (*(HGDIOBJ *)(this + 8) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(this + 8));
  }
  CPNObject::~CPNObject((CPNObject *)this);
  return;
}


