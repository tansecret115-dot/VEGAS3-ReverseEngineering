/* Module: pngu3266.dll
   Function: SetConstraintRect
   Address: 606078a9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNConstraintLayoutMgr::SetConstraintRect(struct _PNxRect const &) */

void __thiscall
CPNConstraintLayoutMgr::SetConstraintRect(CPNConstraintLayoutMgr *this,_PNxRect *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
                    /* 0x178a9  1873  ?SetConstraintRect@CPNConstraintLayoutMgr@@QAEXABU_PNxRect@@@Z
                        */
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 4) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  *(undefined4 *)(this + 0x10) = uVar3;
  return;
}


