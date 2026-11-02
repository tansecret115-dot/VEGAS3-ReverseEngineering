/* Module: pngu3266.dll
   Function: AddToolTip
   Address: 606048fb
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNTipManager::AddToolTip(char const *) */

int __thiscall CPNTipManager::AddToolTip(CPNTipManager *this,char *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  _ToolTipNode *p_Var3;
  LRESULT LVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_10;
  undefined4 local_c;
  
                    /* 0x148fb  783  ?AddToolTip@CPNTipManager@@UAEHPBD@Z */
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
      p_Var3 = XPNTipManager::MakeNewToolTipNode
                         ((XPNTipManager *)this,(CPNxRect *)0x0,param_1,
                          *(ulong *)(*(int *)(this + 0xc) + 0xc));
      memset(&local_30,0,0x2c);
      local_30 = 0x2c;
      local_2c = 1;
      local_28 = *(undefined4 *)(*(int *)(this + 0xc) + 0xc);
      local_10 = _PNGuiGetHandle_0();
      local_24 = *(undefined4 *)(*(int *)(this + 0xc) + 0xc);
      local_c = *(undefined4 *)(p_Var3 + 4);
      LVar4 = SendMessageA(DAT_60649ddc,0x404,0,(LPARAM)&local_30);
      if (LVar4 == 0) {
        return 0;
      }
      FUN_6061a1f0(*(void **)(this + 8),p_Var3);
      return LVar4;
    }
  }
  return 0;
}


