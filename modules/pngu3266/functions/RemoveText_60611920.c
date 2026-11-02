/* Module: pngu3266.dll
   Function: RemoveText
   Address: 60611920
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNScrollingText::RemoveText(int) */

void __thiscall XPNScrollingText::RemoveText(XPNScrollingText *this,int param_1)

{
  int *piVar1;
  
                    /* 0x21920  1778  ?RemoveText@XPNScrollingText@@UAEXH@Z */
  piVar1 = *(int **)(*(int *)(this + 0xfe) + param_1 * 4);
  if (piVar1 != (int *)0x0) {
    FUN_60618cd0(piVar1);
    operator_delete(piVar1);
    FUN_6061a710(this + 0xfe,param_1,1);
  }
  return;
}


