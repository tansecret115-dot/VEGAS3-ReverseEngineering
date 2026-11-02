/* Module: pngu3266.dll
   Function: CPNConstraintLayoutMgr
   Address: 6060796e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNConstraintLayoutMgr::CPNConstraintLayoutMgr(struct IUnknown *) */

CPNConstraintLayoutMgr * __thiscall
CPNConstraintLayoutMgr::CPNConstraintLayoutMgr(CPNConstraintLayoutMgr *this,IUnknown *param_1)

{
                    /* 0x1796e  39  ??0CPNConstraintLayoutMgr@@QAE@PAUIUnknown@@@Z */
  CMap<>(this + 0x14,10);
  (*(code *)**(undefined4 **)param_1)(param_1,&DAT_6062bd58,this);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  return this;
}


