/* Module: pngu3266.dll
   Function: GetChildrenCount
   Address: 60615a9e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual long __thiscall XPNTreeControl::GetChildrenCount(unsigned long)const  */

long __thiscall XPNTreeControl::GetChildrenCount(XPNTreeControl *this,ulong param_1)

{
  TreeViewItem *pTVar1;
  long lVar2;
  
                    /* 0x25a9e  1132  ?GetChildrenCount@XPNTreeControl@@UBEJK@Z */
  pTVar1 = GetTreeViewItem(this,param_1);
  if ((pTVar1 == (TreeViewItem *)0x0) || (*(int *)(pTVar1 + 0xc) == 0)) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(*(int *)(pTVar1 + 0xc) + 8);
  }
  return lVar2;
}


