/* Module: pngu3266.dll
   Function: PNGuiGetMapHandle
   Address: 605f613e
   Source: Ghidra pseudocode (Stage 10 batch) */


void PNGuiGetMapHandle(void)

{
  void *this;
  
                    /* 0x613e  2225  PNGuiGetMapHandle */
  if (DAT_60649968 == (undefined4 *)0x0) {
    this = operator_new(0xe0);
    if (this == (void *)0x0) {
      DAT_60649968 = (undefined4 *)0x0;
    }
    else {
      DAT_60649968 = FUN_60619cc0(this,0x7f,0);
    }
  }
  return;
}


