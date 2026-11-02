/* Module: vegas30k.dll
   Function: syncoutClose
   Address: 01180180
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall syncoutClose,4 */

undefined4 syncoutClose(int *param_1)

{
  undefined4 uVar1;
  
                    /* 0x180180  1442  _syncoutClose@4 */
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      uVar1 = FUN_01001150(*param_1);
      return uVar1;
    }
    FUN_0117ff20(param_1);
    syncoutSendFFrameMsg(param_1);
    if ((HMIDIOUT)param_1[1] != (HMIDIOUT)0x0) {
      midiOutUnprepareHeader((HMIDIOUT)param_1[1],(LPMIDIHDR)(param_1 + 0x19),0x40);
      midiOutUnprepareHeader((HMIDIOUT)param_1[1],(LPMIDIHDR)(param_1 + 0x29),0x40);
      midiOutReset((HMIDIOUT)param_1[1]);
      midiOutClose((HMIDIOUT)param_1[1]);
      param_1[1] = 0;
    }
  }
  return 0;
}


