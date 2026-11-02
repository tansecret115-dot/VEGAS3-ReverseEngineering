/* Module: pngu3266.dll
   Function: PNGuiTerminate
   Address: 605f2a7a
   Source: Ghidra pseudocode (Stage 10 batch) */


void PNGuiTerminate(void)

{
                    /* 0x2a7a  2232  PNGuiTerminate */
  DAT_60649844 = DAT_60649844 + -1;
  if (DAT_60649844 == 0) {
    CPNDrawHelper::Cleanup();
    CPNTimer::Cleanup();
    CPNTipManager::Cleanup();
    _PNGuiDestroyMap_0();
    DAT_60649840 = 0;
    FUN_6061d950();
    return;
  }
  return;
}


