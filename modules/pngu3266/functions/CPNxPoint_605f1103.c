/* Module: pngu3266.dll
   Function: CPNxPoint
   Address: 605f1103
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNxPoint::CPNxPoint(struct _PNxPoint const &) */

void __thiscall CPNxPoint::CPNxPoint(CPNxPoint *this,_PNxPoint *param_1)

{
                    /* 0x1103  163  ??0CPNxPoint@@QAE@ABU_PNxPoint@@@Z
                       0x1103  171  ??0CPNxSize@@QAE@ABU_PNxSize@@@Z
                       0x1103  172  ??0CPNxSize@@QAE@ABVCPNxPoint@@@Z
                       0x1103  504  ??4CPNxPoint@@QAEAAV0@ABV0@@Z
                       0x1103  506  ??4CPNxSize@@QAEAAV0@ABV0@@Z
                       0x1103  563  ??4_PNxPoint@@QAEAAU0@ABU0@@Z
                       0x1103  565  ??4_PNxSize@@QAEAAU0@ABU0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  return;
}


