/* Module: pngu3266.dll
   Function: AddToolTip
   Address: 606047bc
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNTipManager::AddToolTip(class CPNxRect &,char const *) */

int __thiscall CPNTipManager::AddToolTip(CPNTipManager *this,CPNxRect *param_1,char *param_2)

{
  int *piVar1;
  CPNxRect *pCVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  CPNxRect *pCVar5;
  _ToolTipNode *p_Var6;
  LRESULT LVar7;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulong local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  CPNTipManager *local_8;
  
                    /* 0x147bc  782  ?AddToolTip@CPNTipManager@@UAEHAAVCPNxRect@@PBD@Z */
  if ((*(byte *)(*(int *)(this + 0xc) + 9) & 0x80) != 0) {
    local_8 = this;
    if (*(int *)(this + 8) == 0) {
      puVar3 = operator_new(0x14);
      if (puVar3 == (undefined4 *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_6061a0c0(puVar3);
      }
      *(undefined4 *)(this + 8) = uVar4;
    }
    pCVar2 = param_1;
    if (*(int *)(*(int *)(this + 8) + 0x10) == 0) {
LAB_60604847:
      pCVar5 = operator_new(0x10);
      if (pCVar5 == (CPNxRect *)0x0) {
        pCVar5 = (CPNxRect *)0x0;
      }
      else {
        *(undefined4 *)pCVar5 = *(undefined4 *)pCVar2;
        *(undefined4 *)(pCVar5 + 4) = *(undefined4 *)(pCVar2 + 4);
        *(undefined4 *)(pCVar5 + 8) = *(undefined4 *)(pCVar2 + 8);
        *(undefined4 *)(pCVar5 + 0xc) = *(undefined4 *)(pCVar2 + 0xc);
        this = local_8;
      }
      DAT_60649de0 = DAT_60649de0 + 1;
      p_Var6 = XPNTipManager::MakeNewToolTipNode((XPNTipManager *)this,pCVar5,param_2,DAT_60649de0);
      memset(&local_34,0,0x2c);
      local_30 = 0;
      local_34 = 0x2c;
      local_2c = *(undefined4 *)(*(int *)(this + 0xc) + 0xc);
      local_14 = _PNGuiGetHandle_0();
      local_28 = DAT_60649de0;
      local_10 = *(undefined4 *)(p_Var6 + 4);
      local_24 = *(undefined4 *)pCVar2;
      local_1c = *(undefined4 *)(pCVar2 + 8);
      local_18 = *(undefined4 *)(pCVar2 + 0xc);
      local_20 = *(undefined4 *)(pCVar2 + 4);
      LVar7 = SendMessageA(DAT_60649ddc,0x404,0,(LPARAM)&local_34);
      if (LVar7 == 0) {
        return 0;
      }
      FUN_6061a1f0(*(void **)(this + 8),p_Var6);
      return LVar7;
    }
    param_1 = *(CPNxRect **)(*(int *)(this + 8) + 4);
    do {
      if (param_1 == (CPNxRect *)0x0) goto LAB_60604847;
      puVar3 = (undefined4 *)FUN_6061a2c0((int *)&param_1);
      piVar1 = *(int **)*puVar3;
    } while ((piVar1 != (int *)0x0) &&
            ((((*(int *)(pCVar2 + 8) <= *piVar1 || (piVar1[2] <= *(int *)pCVar2)) ||
              (*(int *)(pCVar2 + 0xc) <= piVar1[1])) || (piVar1[3] <= *(int *)(pCVar2 + 4)))));
  }
  return 0;
}


