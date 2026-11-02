/* Module: pngu3266.dll
   Function: CPNCursor
   Address: 605f2d42
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNCursor::CPNCursor(void) */

CPNCursor * __thiscall CPNCursor::CPNCursor(CPNCursor *this)

{
                    /* 0x2d42  44  ??0CPNCursor@@QAE@XZ */
  XPNCursor::XPNCursor((XPNCursor *)this);
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &_vftable_;
  return this;
}


