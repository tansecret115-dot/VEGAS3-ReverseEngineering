/* Module: pngu3266.dll
   Function: SetDimensions
   Address: 60612101
   Source: Ghidra pseudocode (Stage 10 batch) */


/* private: void __thiscall XPNToolTip::SetDimensions(long,long,class CPNxRect &) */

void __thiscall
XPNToolTip::SetDimensions(XPNToolTip *this,long param_1,long param_2,CPNxRect *param_3)

{
  int iVar1;
  CPNFont *pCVar2;
  int iVar3;
  int iVar4;
  CPNScreenDC local_210 [484];
  CPNFont *local_2c;
  long local_28;
  long local_24;
  undefined4 local_20;
  undefined4 local_1c;
  char *local_18 [3];
  int local_c;
  int local_8;
  
                    /* 0x22101  1898  ?SetDimensions@XPNToolTip@@AAEXJJAAVCPNxRect@@@Z */
  CPNScreenDC::CPNScreenDC(local_210);
  pCVar2 = CPNDrawHelper::GetTooltipFont();
  if (&stack0x00000000 != (undefined1 *)0x210) {
    local_2c = XPNDC::SetFont((XPNDC *)local_210,pCVar2);
  }
  iVar3 = (**(code **)(*(int *)this + 0x28))();
  FUN_60618bb0(local_18);
  iVar3 = iVar3 + 1;
  iVar1 = *(int *)this;
  iVar4 = FUN_60619190(local_18,iVar3);
  (**(code **)(iVar1 + 0x24))(iVar4,iVar3);
  FUN_60619210(local_18,-1);
  CPNDC::GetTextExtent((CPNDC *)local_210,local_18[0],(CPNxSize *)&local_c);
  local_c = local_c + 6;
  local_8 = local_8 + 4;
  *(int *)(this + 0xb8) = local_c;
  *(int *)(this + 0xbc) = local_8;
  local_28 = param_1;
  local_24 = param_2;
  (**(code **)(*(int *)this + 0x124))(&local_c,&local_28,&local_20,param_3);
  *(undefined4 *)(this + 0xc0) = local_20;
  *(undefined4 *)(this + 0xc4) = local_1c;
  FUN_60618cd0((int *)local_18);
  if (&stack0x00000000 != (undefined1 *)0x210) {
    XPNDC::SetFont((XPNDC *)local_210,local_2c);
  }
  CPNScreenDC::~CPNScreenDC(local_210);
  return;
}


