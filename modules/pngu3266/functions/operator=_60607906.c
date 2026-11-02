/* Module: pngu3266.dll
   Function: operator=
   Address: 60607906
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNConstraintLayoutMgr & __thiscall CPNConstraintLayoutMgr::operator=(class
   CPNConstraintLayoutMgr const &) */

CPNConstraintLayoutMgr * __thiscall
CPNConstraintLayoutMgr::operator=(CPNConstraintLayoutMgr *this,CPNConstraintLayoutMgr *param_1)

{
                    /* 0x17906  445  ??4CPNConstraintLayoutMgr@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  CPNMapPtrToPtr::operator=((CPNMapPtrToPtr *)(this + 0x14),(CPNMapPtrToPtr *)(param_1 + 0x14));
  return this;
}


