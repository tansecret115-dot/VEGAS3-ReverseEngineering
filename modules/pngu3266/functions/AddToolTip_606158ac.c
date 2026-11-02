/* Module: pngu3266.dll
   Function: AddToolTip
   Address: 606158ac
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall XPNTipManager::AddToolTip(class CPNxRect &,char const *) */

int __thiscall XPNTipManager::AddToolTip(XPNTipManager *this,CPNxRect *param_1,char *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  CPNxRect *pCVar4;
  _ToolTipNode *p_Var5;
  XPNTipManager *local_8;
  
                    /* 0x258ac  786  ?AddToolTip@XPNTipManager@@UAEHAAVCPNxRect@@PBD@Z */
  if ((*(byte *)(*(int *)(this + 0xc) + 9) & 0x80) != 0) {
    if (*(int *)(this + 8) == 0) {
      local_8 = this;
      puVar2 = operator_new(0x14);
      if (puVar2 == (undefined4 *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_6061a0c0(puVar2);
      }
      *(undefined4 *)(this + 8) = uVar3;
    }
    local_8 = *(XPNTipManager **)(*(int *)(this + 8) + 4);
    do {
      if (local_8 == (XPNTipManager *)0x0) {
        pCVar4 = operator_new(0x10);
        if (pCVar4 == (CPNxRect *)0x0) {
          pCVar4 = (CPNxRect *)0x0;
        }
        else {
          *(undefined4 *)pCVar4 = *(undefined4 *)param_1;
          *(undefined4 *)(pCVar4 + 4) = *(undefined4 *)(param_1 + 4);
          *(undefined4 *)(pCVar4 + 8) = *(undefined4 *)(param_1 + 8);
          *(undefined4 *)(pCVar4 + 0xc) = *(undefined4 *)(param_1 + 0xc);
        }
        p_Var5 = MakeNewToolTipNode(this,pCVar4,param_2,0);
        FUN_6061a1f0(*(void **)(this + 8),p_Var5);
        return (uint)(p_Var5 != (_ToolTipNode *)0x0);
      }
      puVar2 = (undefined4 *)FUN_6061a2c0((int *)&local_8);
      piVar1 = *(int **)*puVar2;
    } while ((piVar1 != (int *)0x0) &&
            ((((*(int *)(param_1 + 8) <= *piVar1 || (piVar1[2] <= *(int *)param_1)) ||
              (*(int *)(param_1 + 0xc) <= piVar1[1])) || (piVar1[3] <= *(int *)(param_1 + 4)))));
  }
  return 0;
}


