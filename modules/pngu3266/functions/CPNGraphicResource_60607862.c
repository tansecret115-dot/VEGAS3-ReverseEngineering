/* Module: pngu3266.dll
   Function: CPNGraphicResource
   Address: 60607862
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNGraphicResource::CPNGraphicResource(void) */

CPNGraphicResource * __thiscall CPNGraphicResource::CPNGraphicResource(CPNGraphicResource *this)

{
                    /* 0x17862  73  ??0CPNGraphicResource@@QAE@XZ */
  CPNObject::CPNObject((CPNObject *)this);
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &_vftable_;
  return this;
}


