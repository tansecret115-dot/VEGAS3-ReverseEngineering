/* Module: vegas30k.dll
   Function: syncoutSendFFrameMsg
   Address: 011800d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall syncoutSendFFrameMsg,4 */

void syncoutSendFFrameMsg(int *param_1)

{
  int iVar1;
  byte bVar2;
  
                    /* 0x1800d0  1445  _syncoutSendFFrameMsg@4 */
  if (param_1 == (int *)0x0) {
    return;
  }
  if (*param_1 != 0) {
    FUN_01001180(*param_1);
    return;
  }
  if (param_1[1] == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x39) = 0xf0;
  *(undefined1 *)((int)param_1 + 0xe5) = 0x7f;
  *(undefined1 *)((int)param_1 + 0xe6) = 0x7f;
  *(undefined1 *)((int)param_1 + 0xe7) = 1;
  *(undefined1 *)(param_1 + 0x3a) = 1;
  bVar2 = *(byte *)(param_1 + 0xf);
  *(byte *)((int)param_1 + 0xe9) = bVar2;
  iVar1 = param_1[0xe];
  if (iVar1 == 1) {
    bVar2 = bVar2 | 0x60;
  }
  else if (iVar1 == 2) {
    bVar2 = bVar2 | 0x40;
  }
  else {
    if (iVar1 != 3) goto LAB_0118013d;
    bVar2 = bVar2 | 0x20;
  }
  *(byte *)((int)param_1 + 0xe9) = bVar2;
LAB_0118013d:
  *(char *)((int)param_1 + 0xea) = (char)param_1[0x10];
  *(char *)((int)param_1 + 0xeb) = (char)param_1[0x11];
  *(char *)(param_1 + 0x3b) = (char)param_1[0x12];
  *(undefined1 *)((int)param_1 + 0xed) = 0xf7;
  midiOutLongMsg((HMIDIOUT)param_1[1],(LPMIDIHDR)(param_1 + 0x19),0x40);
  return;
}


