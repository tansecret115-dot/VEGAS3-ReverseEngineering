/* Module: pngu3266.dll
   Function: CPNSystemInfo
   Address: 605f67c6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNSystemInfo::CPNSystemInfo(class CPNSystemInfo const &) */

void __thiscall CPNSystemInfo::CPNSystemInfo(CPNSystemInfo *this,CPNSystemInfo *param_1)

{
  undefined4 uVar1;
  
                    /* 0x67c6  144  ??0CPNSystemInfo@@QAE@ABV0@@Z */
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 4) = uVar1;
  return;
}


