/* Module: pngu3266.dll
   Function: OnMeasureItem
   Address: 606036b6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNCustomFrame::OnMeasureItem(class CPNEvent &) */

int __thiscall CPNCustomFrame::OnMeasureItem(CPNCustomFrame *this,CPNEvent *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
                    /* 0x136b6  1646  ?OnMeasureItem@CPNCustomFrame@@UAEHAAVCPNEvent@@@Z */
  piVar1 = *(int **)(param_1 + 0x20);
  if ((*piVar1 == 1) || (piVar1[1] == 0x4e21)) {
    piVar1[4] = *(int *)(*(int *)(this + 0x18) + 0x50) - *(int *)(*(int *)(this + 0x18) + 0x48);
    piVar2 = *(int **)(this + 0x18);
    iVar3 = 1;
    piVar1[3] = (((piVar2[0x1d] + piVar2[0x21] + *piVar2 * -3) - piVar2[0x1b]) - piVar2[0x1f]) + 0xb
    ;
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}


