/* Module: pngu3266.dll
   Function: operator-=
   Address: 605f12da
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNxPoint::operator-=(class CPNxSize const &) */

void __thiscall CPNxPoint::operator-=(CPNxPoint *this,CPNxSize *param_1)

{
                    /* 0x12da  614  ??ZCPNxPoint@@QAEXABVCPNxSize@@@Z
                       0x12da  616  ??ZCPNxSize@@QAEXABV0@@Z */
  *(int *)this = *(int *)this - *(int *)param_1;
  *(int *)(this + 4) = *(int *)(this + 4) - *(int *)(param_1 + 4);
  return;
}


