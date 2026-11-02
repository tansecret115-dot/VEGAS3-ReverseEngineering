/* Module: pngu3266.dll
   Function: DrawSeparatorLine
   Address: 6060973f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static void __cdecl CPNDrawHelper::DrawSeparatorLine(class CPNDC *,struct _PNxPoint const
   &,struct _PNxPoint const &) */

void __cdecl CPNDrawHelper::DrawSeparatorLine(CPNDC *param_1,_PNxPoint *param_2,_PNxPoint *param_3)

{
  CPNPen *in_ECX;
  CPNPen *local_8;
  
                    /* 0x1973f  1012
                       ?DrawSeparatorLine@CPNDrawHelper@@SAXPAVCPNDC@@ABU_PNxPoint@@1@Z */
  local_8 = in_ECX;
  if (param_1 != (CPNDC *)0x0) {
    local_8 = XPNDC::SetPen((XPNDC *)param_1,&m_3dShadowPen);
  }
  (**(code **)(*(int *)param_1 + 0x10))
            (*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4),*(undefined4 *)param_3,
             *(undefined4 *)(param_3 + 4));
  if (param_1 != (CPNDC *)0x0) {
    XPNDC::SetPen((XPNDC *)param_1,local_8);
    if (param_1 != (CPNDC *)0x0) {
      local_8 = XPNDC::SetPen((XPNDC *)param_1,&m_3dHighlightPen);
    }
  }
  (**(code **)(*(int *)param_1 + 0x10))
            (*(int *)param_2 + 1,*(undefined4 *)(param_2 + 4),*(int *)param_3 + 1,
             *(undefined4 *)(param_3 + 4));
  if (param_1 != (CPNDC *)0x0) {
    XPNDC::SetPen((XPNDC *)param_1,local_8);
  }
  return;
}


