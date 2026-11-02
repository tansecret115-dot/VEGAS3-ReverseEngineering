/* Module: pngu3266.dll
   Function: RemoveAll
   Address: 60607b28
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNConstraintLayoutMgr::RemoveAll(void) */

void __thiscall CPNConstraintLayoutMgr::RemoveAll(CPNConstraintLayoutMgr *this)

{
  undefined4 *puVar1;
  int iVar2;
  int local_18 [3];
  undefined4 *local_c;
  
                    /* 0x17b28  1749  ?RemoveAll@CPNConstraintLayoutMgr@@QAEXXZ */
  FUN_605f28b6(local_18,this + 0x14,-(uint)(*(int *)(this + 0x20) != 0));
  puVar1 = local_c;
  for (iVar2 = *(int *)(this + 0x20); iVar2 != 0; iVar2 = iVar2 + -1) {
    local_c = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
      operator_delete(puVar1);
    }
    FUN_6060285c(local_18);
    puVar1 = local_c;
  }
  FUN_606196e0((int)(this + 0x14));
  return;
}


