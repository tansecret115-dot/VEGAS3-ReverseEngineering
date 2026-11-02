/* Module: pngu3266.dll
   Function: CreateRectRgn
   Address: 605fce2b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNRegion::CreateRectRgn(class CPNxRect &) */

int __thiscall CPNRegion::CreateRectRgn(CPNRegion *this,CPNxRect *param_1)

{
  HRGN pHVar1;
  
                    /* 0xce2b  939  ?CreateRectRgn@CPNRegion@@UAEHAAVCPNxRect@@@Z */
  pHVar1 = ::CreateRectRgn(*(int *)param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8),
                           *(int *)(param_1 + 0xc));
  *(HRGN *)(this + 0xc) = pHVar1;
  return (uint)(pHVar1 != (HRGN)0x0);
}


