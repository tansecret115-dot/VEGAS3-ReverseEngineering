/* Module: pngu3266.dll
   Function: _PNGuiUnhookWindowCreate@0
   Address: 605f6222
   Source: Ghidra pseudocode (Stage 10 batch) */


void _PNGuiUnhookWindowCreate_0(void)

{
                    /* 0x6222  2233  _PNGuiUnhookWindowCreate@0 */
  if (DAT_6064996c != (HHOOK)0x0) {
    UnhookWindowsHookEx(DAT_6064996c);
    DAT_6064996c = (HHOOK)0x0;
    DAT_60649970 = 0;
  }
  return;
}


