/* Module: pngu3266.dll
   Function: AddItem
   Address: 60615ad3
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: unsigned long __thiscall XPNTreeControl::AddItem(struct TreeViewItem *,unsigned long)
    */

ulong __thiscall XPNTreeControl::AddItem(XPNTreeControl *this,TreeViewItem *param_1,ulong param_2)

{
  int iVar1;
  TreeViewItem *pTVar2;
  void *this_00;
  undefined4 uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  
                    /* 0x25ad3  761  ?AddItem@XPNTreeControl@@IAEKPAUTreeViewItem@@K@Z */
  pTVar2 = param_1;
  if ((*(int *)(this + 0xc0) == 0) || (param_1 == (TreeViewItem *)0x0)) {
LAB_60615b77:
    uVar5 = 0;
  }
  else {
    iVar1 = *(int *)(this + 0xc4);
    *(int *)(this + 0xc4) = iVar1 + 1;
    *(int *)param_1 = iVar1;
    if (param_2 != 0) {
      param_1 = (TreeViewItem *)0x0;
      FUN_60619b60(*(void **)(this + 0xc0),param_2,&param_1);
      if (param_1 == (TreeViewItem *)0x0) goto LAB_60615b77;
      if (*(int *)(param_1 + 0xc) == 0) {
        this_00 = operator_new(0x18);
        if (this_00 == (void *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_6061ff50(this_00,10);
        }
        *(undefined4 *)(param_1 + 0xc) = uVar3;
      }
      puVar4 = FUN_60619ba0(*(void **)(param_1 + 0xc),*(uint *)pTVar2);
      *puVar4 = pTVar2;
      *(TreeViewItem **)(pTVar2 + 8) = param_1;
    }
    puVar4 = FUN_60619ba0(*(void **)(this + 0xc0),*(uint *)pTVar2);
    *puVar4 = pTVar2;
    uVar5 = *(ulong *)pTVar2;
  }
  return uVar5;
}


