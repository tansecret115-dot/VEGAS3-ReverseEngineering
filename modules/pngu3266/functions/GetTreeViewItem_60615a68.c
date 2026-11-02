/* Module: pngu3266.dll
   Function: GetTreeViewItem
   Address: 60615a68
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: struct TreeViewItem * __thiscall XPNTreeControl::GetTreeViewItem(unsigned long)const
    */

TreeViewItem * __thiscall XPNTreeControl::GetTreeViewItem(XPNTreeControl *this,ulong param_1)

{
  TreeViewItem *local_8;
  
                    /* 0x25a68  1403  ?GetTreeViewItem@XPNTreeControl@@IBEPAUTreeViewItem@@K@Z */
  local_8 = (TreeViewItem *)0x0;
  if (*(void **)(this + 0xc0) != (void *)0x0) {
    FUN_60619b60(*(void **)(this + 0xc0),param_1,&local_8);
  }
  return local_8;
}


