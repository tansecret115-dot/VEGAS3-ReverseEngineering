/* Module: pngu3266.dll
   Function: DrawArrow
   Address: 6060969a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static void __cdecl CPNDrawHelper::DrawArrow(class CPNDC *,class CPNxRect const &,long)
    */

void __cdecl CPNDrawHelper::DrawArrow(CPNDC *param_1,CPNxRect *param_2,long param_3)

{
  int iVar1;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
                    /* 0x1969a  978  ?DrawArrow@CPNDrawHelper@@SAXPAVCPNDC@@ABVCPNxRect@@J@Z */
  if (param_3 == 1) {
    local_c = *(int *)(param_2 + 8);
    local_1c = *(int *)param_2;
    local_18 = *(int *)(param_2 + 0xc);
    iVar1 = local_c - local_1c;
    local_14 = iVar1 / 2 + local_1c;
    local_10 = local_18 - iVar1 / 2;
  }
  else {
    if (param_3 != 2) {
      if ((param_3 == 3) || (param_3 == 4)) {
        (**(code **)(*(int *)param_1 + 0x48))(param_2,&m_blackBrush);
      }
      goto LAB_60609726;
    }
    local_c = *(int *)(param_2 + 8);
    local_1c = *(int *)param_2;
    local_18 = *(int *)(param_2 + 4);
    iVar1 = local_c - local_1c;
    local_14 = iVar1 / 2 + local_1c;
    local_10 = iVar1 / 2 + local_18;
  }
  local_c = local_c - iVar1 % 2;
  local_8 = local_18;
LAB_60609726:
  (**(code **)(*(int *)param_1 + 0xc))(3,&local_1c,0,0,1);
  return;
}


