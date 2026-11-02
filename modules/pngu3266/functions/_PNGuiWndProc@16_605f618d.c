/* Module: pngu3266.dll
   Function: _PNGuiWndProc@16
   Address: 605f618d
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _PNGuiWndProc_16(uint param_1,ulong param_2,uint param_3,long param_4)

{
  void *this;
  CPNWindow *pCVar1;
  undefined4 uVar2;
  
                    /* 0x618d  2234  _PNGuiWndProc@16 */
  if (param_2 == 600) {
    uVar2 = 1;
  }
  else {
    this = (void *)PNGuiGetMapHandle();
    pCVar1 = (CPNWindow *)FUN_60619de0(this,param_1);
    if (pCVar1 == (CPNWindow *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = _PNGuiCallWndProc_20(pCVar1,param_1,param_2,param_3,param_4);
    }
  }
  return uVar2;
}


