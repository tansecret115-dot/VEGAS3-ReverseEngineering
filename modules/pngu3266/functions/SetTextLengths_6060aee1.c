/* Module: pngu3266.dll
   Function: SetTextLengths
   Address: 6060aee1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* private: void __thiscall XPNTabControl::SetTextLengths(class CPNDC *,class CPNxRect &) */

void __thiscall XPNTabControl::SetTextLengths(XPNTabControl *this,CPNDC *param_1,CPNxRect *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  CPNFont *pCVar3;
  int *piVar4;
  CPNFont *local_10;
  int local_c;
  int local_8;
  
                    /* 0x1aee1  2024  ?SetTextLengths@XPNTabControl@@AAEXPAVCPNDC@@AAVCPNxRect@@@Z
                        */
  iVar1 = *(int *)(this + 0xd0);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    local_8 = *(int *)(iVar1 + 4);
    local_c = 0;
    pCVar3 = CPNDrawHelper::GetTabControlFont();
    if (param_1 != (CPNDC *)0x0) {
      local_10 = XPNDC::SetFont((XPNDC *)param_1,pCVar3);
    }
    while (local_8 != 0) {
      piVar4 = (int *)FUN_6061a2c0(&local_8);
      puVar2 = (undefined4 *)*piVar4;
      (**(code **)(*(int *)param_1 + 0x78))(*(undefined4 *)*puVar2,puVar2 + 6);
      if (local_c < (int)puVar2[7]) {
        local_c = puVar2[7];
      }
    }
    *(int *)(this + 0xe0) = local_c + 6;
    *(int *)(this + 0xdc) = local_c + 6;
    if (param_1 != (CPNDC *)0x0) {
      XPNDC::SetFont((XPNDC *)param_1,local_10);
    }
  }
  return;
}


