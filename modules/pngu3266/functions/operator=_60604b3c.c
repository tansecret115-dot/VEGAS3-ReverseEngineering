/* Module: pngu3266.dll
   Function: operator=
   Address: 60604b3c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNTreeControl & __thiscall CPNTreeControl::operator=(class CPNTreeControl const &)
    */

CPNTreeControl * __thiscall CPNTreeControl::operator=(CPNTreeControl *this,CPNTreeControl *param_1)

{
                    /* 0x14b3c  501  ??4CPNTreeControl@@QAEAAV0@ABV0@@Z */
  CPNFrame::operator=((CPNFrame *)this,(CPNFrame *)param_1);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  return this;
}


