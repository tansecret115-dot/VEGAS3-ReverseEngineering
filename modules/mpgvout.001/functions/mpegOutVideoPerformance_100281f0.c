/* Module: mpgvout.001
   Function: mpegOutVideoPerformance
   Address: 100281f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl mpegOutVideoPerformance(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x281f0  3  mpegOutVideoPerformance */
  iVar1 = *(int *)((int)param_1 + 0x365);
  iVar2 = *(int *)((int)param_1 + 0x369);
  if (param_2 == 0) {
    if (param_3 < 0x11) {
      *(undefined1 *)(param_1 + 0xcb) = 3;
      *(undefined4 *)((int)param_1 + 0x351) = 5;
    }
    else {
      *(undefined1 *)(param_1 + 0xcb) = 5;
      *(undefined4 *)((int)param_1 + 0x351) = 3;
    }
    *(undefined4 *)((int)param_1 + 0x34d) = 1;
    if (param_3 < 0x17) {
      iVar3 = (iVar1 + 0x20) * (param_3 + 1) + 0x1ff >> 9;
      iVar1 = (iVar2 + 0x20) * (param_3 + 1) + 0x1ff >> 9;
    }
    else {
      iVar3 = (iVar1 + 0x20) * (param_3 + -0xb) + 0xff >> 8;
      iVar1 = (iVar2 + 0x20) * (param_3 + -0xb) + 0xff >> 8;
    }
  }
  else {
    *(undefined4 *)((int)param_1 + 0x34d) = 0;
    if (param_3 < 8) {
      *(undefined1 *)(param_1 + 0xcb) = 0;
      *(undefined4 *)((int)param_1 + 0x351) = 0xc;
      iVar3 = 1;
      iVar1 = 1;
    }
    else {
      if (param_3 < 0x14) {
        iVar1 = (iVar1 + 0x20 >> 6) * (param_3 + -7);
        iVar2 = (iVar2 + 0x20 >> 6) * (param_3 + -7);
        *(undefined1 *)(param_1 + 0xcb) = 2;
        *(undefined4 *)((int)param_1 + 0x351) = 0xc;
      }
      else {
        iVar1 = (iVar1 + 0x20 >> 6) * (param_3 + -7);
        iVar2 = (iVar2 + 0x20 >> 6) * (param_3 + -7);
        *(undefined1 *)(param_1 + 0xcb) = 3;
        *(undefined4 *)((int)param_1 + 0x351) = 0xc;
        *(undefined4 *)((int)param_1 + 0x34d) = 1;
      }
      iVar3 = iVar1 + 0xf >> 4;
      iVar1 = iVar2 + 0xf >> 4;
    }
  }
  FUN_100274ec(param_1,iVar3,iVar1);
  return;
}


