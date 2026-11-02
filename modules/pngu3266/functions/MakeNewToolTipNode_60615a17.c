/* Module: pngu3266.dll
   Function: MakeNewToolTipNode
   Address: 60615a17
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: struct _ToolTipNode * __thiscall XPNTipManager::MakeNewToolTipNode(class CPNxRect
   *,char const *,unsigned long) */

_ToolTipNode * __thiscall
XPNTipManager::MakeNewToolTipNode(XPNTipManager *this,CPNxRect *param_1,char *param_2,ulong param_3)

{
  _ToolTipNode *p_Var1;
  size_t sVar2;
  char *_Dest;
  
                    /* 0x25a17  1558
                       ?MakeNewToolTipNode@XPNTipManager@@IAEPAU_ToolTipNode@@PAVCPNxRect@@PBDK@Z */
  p_Var1 = operator_new(0x18);
  sVar2 = strlen(param_2);
  _Dest = operator_new(sVar2 + 1);
  *(char **)(p_Var1 + 4) = _Dest;
  strcpy(_Dest,param_2);
  *(undefined4 *)(p_Var1 + 8) = 0;
  *(CPNxRect **)p_Var1 = param_1;
  *(ulong *)(p_Var1 + 0x14) = param_3;
  *(undefined4 *)(p_Var1 + 0x10) = 0x2ee;
  *(undefined4 *)(p_Var1 + 0xc) = 4000;
  return p_Var1;
}


