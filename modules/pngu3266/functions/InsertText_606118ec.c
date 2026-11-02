/* Module: pngu3266.dll
   Function: InsertText
   Address: 606118ec
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNScrollingText::InsertText(int,char const *) */

void __thiscall XPNScrollingText::InsertText(XPNScrollingText *this,int param_1,char *param_2)

{
  void *this_00;
  undefined4 *puVar1;
  
                    /* 0x218ec  1491  ?InsertText@XPNScrollingText@@UAEXHPBD@Z */
  this_00 = operator_new(0xc);
  if (this_00 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_60618d40(this_00,param_2);
  }
  FUN_6061a670(this + 0xfe,param_1,puVar1,1);
  return;
}


