/* Module: pngu3266.dll
   Function: OnDrawItem
   Address: 60601865
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall CPNColorSelection::OnDrawItem(struct tagDRAWITEMSTRUCT *) */

void __thiscall CPNColorSelection::OnDrawItem(CPNColorSelection *this,tagDRAWITEMSTRUCT *param_1)

{
  CPNColor *pCVar1;
  CPNDC local_244 [480];
  CPNBrush local_64 [60];
  CPNPen *local_28;
  CPNPen *local_20;
  CPNBrush *local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
                    /* 0x11865  1599  ?OnDrawItem@CPNColorSelection@@IAEXPAUtagDRAWITEMSTRUCT@@@Z */
  if (*(int *)param_1 == 1) {
    pCVar1 = *(CPNColor **)(param_1 + 0x2c);
    CPNDC::CPNDC(local_244);
    CPNDC::Attach(local_244,*(HDC__ **)(param_1 + 0x18));
    CPNBrush::CPNBrush(local_64,pCVar1,8);
    local_14 = *(undefined4 *)(param_1 + 0x1c);
    local_c = *(undefined4 *)(param_1 + 0x24);
    local_10 = *(int *)(param_1 + 0x20) + 1;
    local_8 = *(int *)(param_1 + 0x28) + -1;
    if (&stack0x00000000 != (undefined1 *)0x244) {
      local_18 = XPNDC::SetBrush((XPNDC *)local_244,local_64);
      local_20 = XPNDC::SetPen((XPNDC *)local_244,&CPNDrawHelper::m_blackPen);
    }
    if ((((*(uint *)(param_1 + 0xc) & 1) == 0) && ((*(uint *)(param_1 + 0xc) & 2) != 0)) &&
       (((byte)param_1[0x10] & 1) != 0)) {
      if (&stack0x00000000 != (undefined1 *)0x244) {
        local_28 = XPNDC::SetPen((XPNDC *)local_244,&CPNDrawHelper::m_whitePen);
      }
      CPNDC::DrawRectangle(local_244,(CPNxRect *)&local_14);
      if (&stack0x00000000 != (undefined1 *)0x244) {
        XPNDC::SetPen((XPNDC *)local_244,local_28);
      }
    }
    else {
      CPNDC::DrawRectangle(local_244,(CPNxRect *)&local_14);
    }
    if (&stack0x00000000 != (undefined1 *)0x244) {
      XPNDC::SetPen((XPNDC *)local_244,local_20);
      XPNDC::SetBrush((XPNDC *)local_244,local_18);
    }
    CPNBrush::~CPNBrush(local_64);
    CPNDC::~CPNDC(local_244);
  }
  return;
}


