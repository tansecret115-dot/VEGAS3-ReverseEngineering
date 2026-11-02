/* Module: pngu3266.dll
   Function: CPNConstraintLayoutMgr
   Address: 606078db
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNConstraintLayoutMgr::CPNConstraintLayoutMgr(class CPNConstraintLayoutMgr
   const &) */

CPNConstraintLayoutMgr * __thiscall
CPNConstraintLayoutMgr::CPNConstraintLayoutMgr
          (CPNConstraintLayoutMgr *this,CPNConstraintLayoutMgr *param_1)

{
                    /* 0x178db  38  ??0CPNConstraintLayoutMgr@@QAE@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  CPNMapPtrToPtr::CPNMapPtrToPtr((CPNMapPtrToPtr *)(this + 0x14),(CPNMapPtrToPtr *)(param_1 + 0x14))
  ;
  return this;
}


