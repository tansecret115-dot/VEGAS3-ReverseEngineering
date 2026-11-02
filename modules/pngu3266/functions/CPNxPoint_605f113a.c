/* Module: pngu3266.dll
   Function: CPNxPoint
   Address: 605f113a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNxPoint::CPNxPoint(class CPNxSize const &) */

void __thiscall CPNxPoint::CPNxPoint(CPNxPoint *this,CPNxSize *param_1)

{
  undefined4 uVar1;
  
                    /* 0x113a  164  ??0CPNxPoint@@QAE@ABVCPNxSize@@@Z */
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = uVar1;
  return;
}


