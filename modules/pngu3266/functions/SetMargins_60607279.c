/* Module: pngu3266.dll
   Function: SetMargins
   Address: 60607279
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNCustomText::SetMargins(struct _PNxRect &) */

void __thiscall XPNCustomText::SetMargins(XPNCustomText *this,_PNxRect *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
                    /* 0x17279  1945  ?SetMargins@XPNCustomText@@QAEXAAU_PNxRect@@@Z */
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x131) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x135) = uVar1;
  *(undefined4 *)(this + 0x139) = uVar2;
  *(undefined4 *)(this + 0x13d) = uVar3;
  return;
}


