/* Module: pngu3266.dll
   Function: operator+=
   Address: 605f12c9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNxPoint::operator+=(class CPNxSize const &) */

void __thiscall CPNxPoint::operator+=(CPNxPoint *this,CPNxSize *param_1)

{
                    /* 0x12c9  611  ??YCPNxPoint@@QAEXABVCPNxSize@@@Z
                       0x12c9  613  ??YCPNxSize@@QAEXABV0@@Z
                       0x12c9  1583  ?Offset@CPNxPoint@@QAEXABV1@@Z
                       0x12c9  1584  ?Offset@CPNxPoint@@QAEXABVCPNxSize@@@Z */
  *(int *)this = *(int *)this + *(int *)param_1;
  *(int *)(this + 4) = *(int *)(this + 4) + *(int *)(param_1 + 4);
  return;
}


