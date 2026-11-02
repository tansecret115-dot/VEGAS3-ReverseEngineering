/* Module: pngu3266.dll
   Function: Offset
   Address: 605f14e9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNxRect::Offset(class CPNxPoint const &) */

void __thiscall CPNxRect::Offset(CPNxRect *this,CPNxPoint *param_1)

{
                    /* 0x14e9  1586  ?Offset@CPNxRect@@QAEXABVCPNxPoint@@@Z */
  *(int *)this = *(int *)this + *(int *)param_1;
  *(int *)(this + 4) = *(int *)(this + 4) + *(int *)(param_1 + 4);
  *(int *)(this + 8) = *(int *)(this + 8) + *(int *)param_1;
  *(int *)(this + 0xc) = *(int *)(this + 0xc) + *(int *)(param_1 + 4);
  return;
}


