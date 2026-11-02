/* Module: pngu3266.dll
   Function: GetPosition
   Address: 605ffeb3
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNPropertySheet::GetPosition(class CPNxPoint &) */

int __thiscall CPNPropertySheet::GetPosition(CPNPropertySheet *this,CPNxPoint *param_1)

{
  tagRECT local_14;
  
                    /* 0xfeb3  1301  ?GetPosition@CPNPropertySheet@@UAEHAAVCPNxPoint@@@Z */
  GetWindowRect(*(HWND *)(this + 0xc),&local_14);
  *(LONG *)param_1 = local_14.left;
  *(LONG *)(param_1 + 4) = local_14.top;
  return 1;
}


