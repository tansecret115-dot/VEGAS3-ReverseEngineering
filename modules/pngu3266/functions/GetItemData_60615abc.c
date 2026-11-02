/* Module: pngu3266.dll
   Function: GetItemData
   Address: 60615abc
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall XPNTreeControl::GetItemData(unsigned long) */

ulong __thiscall XPNTreeControl::GetItemData(XPNTreeControl *this,ulong param_1)

{
  TreeViewItem *pTVar1;
  ulong uVar2;
  
                    /* 0x25abc  1233  ?GetItemData@XPNTreeControl@@UAEKK@Z */
  pTVar1 = GetTreeViewItem(this,param_1);
  if (pTVar1 == (TreeViewItem *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(ulong *)(pTVar1 + 0x14);
  }
  return uVar2;
}


