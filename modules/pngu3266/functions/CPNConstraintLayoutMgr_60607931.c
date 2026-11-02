/* Module: pngu3266.dll
   Function: CPNConstraintLayoutMgr
   Address: 60607931
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNConstraintLayoutMgr::CPNConstraintLayoutMgr(struct IUnknown *,struct
   _PNxRect const &) */

CPNConstraintLayoutMgr * __thiscall
CPNConstraintLayoutMgr::CPNConstraintLayoutMgr
          (CPNConstraintLayoutMgr *this,IUnknown *param_1,_PNxRect *param_2)

{
                    /* 0x17931  40  ??0CPNConstraintLayoutMgr@@QAE@PAUIUnknown@@ABU_PNxRect@@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)param_2;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_2 + 0xc);
  CMap<>(this + 0x14,10);
  (*(code *)**(undefined4 **)param_1)(param_1,&DAT_6062bd58,this);
  return this;
}


