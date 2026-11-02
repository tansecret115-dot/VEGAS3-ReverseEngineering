/* Module: pngu3266.dll
   Function: GetInitialPosition
   Address: 605fff4a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNPropertySheet::GetInitialPosition(class CPNxPoint &) */

int __thiscall CPNPropertySheet::GetInitialPosition(CPNPropertySheet *this,CPNxPoint *param_1)

{
                    /* 0xff4a  1230  ?GetInitialPosition@CPNPropertySheet@@UAEHAAVCPNxPoint@@@Z */
  *(undefined4 *)param_1 = *(undefined4 *)(this + 0x11c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0x120);
  return *(int *)(this + 0x124);
}


