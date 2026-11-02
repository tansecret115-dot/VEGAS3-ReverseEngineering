/* Module: pngu3266.dll
   Function: OnMeasureItem
   Address: 6060183f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall CPNColorSelection::OnMeasureItem(struct tagMEASUREITEMSTRUCT *) */

void __thiscall
CPNColorSelection::OnMeasureItem(CPNColorSelection *this,tagMEASUREITEMSTRUCT *param_1)

{
                    /* 0x1183f  1645
                       ?OnMeasureItem@CPNColorSelection@@IAEXPAUtagMEASUREITEMSTRUCT@@@Z */
  if (*(int *)param_1 == 1) {
    *(int *)(param_1 + 0xc) = *(int *)(this + 0xf8) - *(int *)(this + 0xf0);
    *(int *)(param_1 + 0x10) = *(int *)(this + 0xfc) - *(int *)(this + 0xf4);
  }
  return;
}


