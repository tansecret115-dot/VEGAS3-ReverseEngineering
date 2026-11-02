/* Module: pngu3266.dll
   Function: AddToolTip
   Address: 60615966
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall XPNTipManager::AddToolTip(char const *) */

int __thiscall XPNTipManager::AddToolTip(XPNTipManager *this,char *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  _ToolTipNode *p_Var3;
  
                    /* 0x25966  787  ?AddToolTip@XPNTipManager@@UAEHPBD@Z */
  if ((*(byte *)(*(int *)(this + 0xc) + 9) & 0x80) != 0) {
    if (*(int *)(this + 8) == 0) {
      puVar1 = operator_new(0x14);
      if (puVar1 == (undefined4 *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_6061a0c0(puVar1);
      }
      *(undefined4 *)(this + 8) = uVar2;
    }
    if (*(int *)(*(int *)(this + 8) + 0x10) == 0) {
      p_Var3 = MakeNewToolTipNode(this,(CPNxRect *)0x0,param_1,0);
      FUN_6061a1f0(*(void **)(this + 8),p_Var3);
      return (uint)(p_Var3 != (_ToolTipNode *)0x0);
    }
  }
  return 0;
}


