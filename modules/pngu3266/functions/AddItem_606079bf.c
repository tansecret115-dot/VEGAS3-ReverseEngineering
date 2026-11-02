/* Module: pngu3266.dll
   Function: AddItem
   Address: 606079bf
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall CPNConstraintLayoutMgr::AddItem(struct IUnknown *,unsigned long,struct
   _PNxRect const *) */

int __thiscall
CPNConstraintLayoutMgr::AddItem
          (CPNConstraintLayoutMgr *this,IUnknown *param_1,ulong param_2,_PNxRect *param_3)

{
  int iVar1;
  void *this_00;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
                    /* 0x179bf  760
                       ?AddItem@CPNConstraintLayoutMgr@@QAEHPAUIUnknown@@KPBU_PNxRect@@@Z */
  local_8 = (int *)0x0;
  iVar1 = (*(code *)**(undefined4 **)param_1)(param_1,&DAT_6062bd68,&local_8);
  if (iVar1 == 0) {
    param_1 = (IUnknown *)0x0;
    iVar1 = FUN_60619880(this + 0x14,(uint)local_8,(int *)&param_1);
    if (iVar1 == 0) {
      if (param_3 == (_PNxRect *)0x0) {
        (**(code **)(*local_8 + 0x14))(local_8,&local_28);
      }
      else {
        local_28 = *(undefined4 *)param_3;
        uStack_24 = *(undefined4 *)(param_3 + 4);
        uStack_20 = *(undefined4 *)(param_3 + 8);
        uStack_1c = *(undefined4 *)(param_3 + 0xc);
        local_18 = local_28;
        local_14 = uStack_24;
        local_10 = uStack_20;
        local_c = uStack_1c;
      }
      this_00 = operator_new(0x18);
      if (this_00 == (void *)0x0) {
        param_1 = (IUnknown *)0x0;
      }
      else {
        param_1 = (IUnknown *)FUN_60607a80(this_00,local_8,param_2,&local_28);
      }
      FUN_60619810(this + 0x14,(uint)local_8,(int)param_1);
      (**(code **)(*local_8 + 8))(local_8);
    }
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


