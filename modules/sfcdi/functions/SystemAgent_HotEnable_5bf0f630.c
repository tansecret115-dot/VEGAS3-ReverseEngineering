/* Module: sfcdi.dll
   Function: SystemAgent_HotEnable
   Address: 5bf0f630
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SystemAgent_HotEnable(int) */

int SystemAgent_HotEnable(int param_1)

{
  int iVar1;
  int iVar2;
  
                    /* 0xf630  139  ?SystemAgent_HotEnable@@YGHH@Z */
  if (((DAT_5bf65fe0 != 0) && (DAT_5bf65fe4 != (code *)0x0)) && (DAT_5bf65fe8 != (code *)0x0)) {
    iVar1 = (*DAT_5bf65fe4)();
    if (iVar1 != 0) {
      iVar2 = 2 - (uint)(param_1 != 0);
      iVar1 = (*DAT_5bf65fe8)(3);
      if (iVar2 != iVar1) {
        (*DAT_5bf65fe8)(iVar2);
      }
      return (uint)(iVar1 == 1);
    }
  }
  return 0;
}


