/* Module: pncrt.dll
   Function: operator=
   Address: 7800aac0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class exception & __thiscall exception::operator=(class exception const &) */

exception * __thiscall exception::operator=(exception *this,exception *param_1)

{
                    /* 0xaac0  20  ??4exception@@QAEAAV0@ABV0@@Z */
  if (this != param_1) {
    ~exception(this);
    exception(this,param_1);
  }
  return this;
}


