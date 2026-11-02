/* Module: pngu3266.dll
   Function: GetBoundingRect
   Address: 605fcf27
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNRegion::GetBoundingRect(class CPNxRect &) */

int __thiscall CPNRegion::GetBoundingRect(CPNRegion *this,CPNxRect *param_1)

{
  int iVar1;
  tagRECT local_14;
  
                    /* 0xcf27  1104  ?GetBoundingRect@CPNRegion@@UAEHAAVCPNxRect@@@Z */
  iVar1 = GetRgnBox(*(HRGN *)(this + 0xc),&local_14);
  *(LONG *)param_1 = local_14.left;
  *(LONG *)(param_1 + 4) = local_14.top;
  *(LONG *)(param_1 + 8) = local_14.right;
  *(LONG *)(param_1 + 0xc) = local_14.bottom;
  return (uint)(iVar1 == 2);
}


