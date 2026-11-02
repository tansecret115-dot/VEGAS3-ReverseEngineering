/* Module: pngu3266.dll
   Function: ~CPNConstraintLayoutMgr
   Address: 6060799e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNConstraintLayoutMgr::~CPNConstraintLayoutMgr(void) */

void __thiscall CPNConstraintLayoutMgr::~CPNConstraintLayoutMgr(CPNConstraintLayoutMgr *this)

{
  int *piVar1;
  
                    /* 0x1799e  319  ??1CPNConstraintLayoutMgr@@QAE@XZ */
  RemoveAll(this);
  piVar1 = *(int **)this;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)this = 0;
  }
  FUN_60619720((undefined4 *)(this + 0x14));
  return;
}


