/* Module: pngu3266.dll
   Function: ~CPNGraphicResource
   Address: 60607878
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNGraphicResource::~CPNGraphicResource(void) */

void __thiscall CPNGraphicResource::~CPNGraphicResource(CPNGraphicResource *this)

{
                    /* 0x17878  333  ??1CPNGraphicResource@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  CPNObject::~CPNObject((CPNObject *)this);
  return;
}


