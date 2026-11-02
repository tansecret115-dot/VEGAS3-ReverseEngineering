/* Module: pngu3266.dll
   Function: RemoveItem
   Address: 60607ab9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall CPNConstraintLayoutMgr::RemoveItem(struct IUnknown *) */

int __thiscall CPNConstraintLayoutMgr::RemoveItem(CPNConstraintLayoutMgr *this,IUnknown *param_1)

{
  IUnknown *pIVar1;
  int iVar2;
  int *local_8;
  
                    /* 0x17ab9  1760  ?RemoveItem@CPNConstraintLayoutMgr@@QAEHPAUIUnknown@@@Z */
  local_8 = (int *)0x0;
  iVar2 = (*(code *)**(undefined4 **)param_1)(param_1,&DAT_6062bd68,&local_8);
  if (iVar2 == 0) {
    param_1 = (IUnknown *)0x0;
    iVar2 = FUN_60619880(this + 0x14,(uint)local_8,(int *)&param_1);
    if (iVar2 != 0) {
      FUN_60619950(this + 0x14,local_8);
      pIVar1 = param_1;
      if (param_1 != (IUnknown *)0x0) {
        (**(code **)(**(int **)param_1 + 8))(*(int **)param_1);
        operator_delete(pIVar1);
      }
    }
    (**(code **)(*local_8 + 8))(local_8);
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}


