/* Module: vegas30k.dll
   Function: syncoutOpen
   Address: 0117ff80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall syncoutOpen,8 */

MMRESULT syncoutOpen(int *param_1,UINT param_2)

{
  LPHMIDIOUT phmo;
  HMIDIOUT pHVar1;
  MMRESULT MVar2;
  
                    /* 0x17ff80  1444  _syncoutOpen@8 */
  if (*param_1 != 0) {
    MVar2 = FUN_01001140(*param_1,param_2);
    return MVar2;
  }
  phmo = (LPHMIDIOUT)(param_1 + 1);
  if (param_1[1] != 0) {
    return 0;
  }
  MVar2 = midiOutOpen(phmo,param_2,0,0,0);
  if (MVar2 != 0) {
    *phmo = (HMIDIOUT)0x0;
  }
  pHVar1 = *phmo;
  ((LPMIDIHDR)(param_1 + 0x19))->lpData = (LPSTR)(param_1 + 0x39);
  param_1[0x1a] = 10;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  midiOutPrepareHeader(pHVar1,(LPMIDIHDR)(param_1 + 0x19),0x40);
  pHVar1 = *phmo;
  ((LPMIDIHDR)(param_1 + 0x29))->lpData = (LPSTR)(param_1 + 0x3c);
  param_1[0x2a] = 10;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  midiOutPrepareHeader(pHVar1,(LPMIDIHDR)(param_1 + 0x29),0x40);
  return MVar2;
}


