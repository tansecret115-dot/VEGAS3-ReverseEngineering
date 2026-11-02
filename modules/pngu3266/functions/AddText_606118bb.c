/* Module: pngu3266.dll
   Function: AddText
   Address: 606118bb
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNScrollingText::AddText(char const *) */

void __thiscall XPNScrollingText::AddText(XPNScrollingText *this,char *param_1)

{
  void *this_00;
  undefined4 *puVar1;
  
                    /* 0x218bb  781  ?AddText@XPNScrollingText@@UAEXPBD@Z */
  this_00 = operator_new(0xc);
  if (this_00 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_60618d40(this_00,param_1);
  }
  FUN_6061a640(this + 0xfe,*(int *)(this + 0x102),puVar1);
  return;
}


