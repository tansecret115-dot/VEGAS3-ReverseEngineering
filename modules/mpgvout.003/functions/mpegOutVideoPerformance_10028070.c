/* Module: mpgvout.003
   Function: mpegOutVideoPerformance
   Address: 10028070
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl mpegOutVideoPerformance(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x28070  3  mpegOutVideoPerformance */
  iVar2 = *(int *)((int)param_1 + 0x365);
  iVar1 = *(int *)((int)param_1 + 0x369);
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
      iVar3 = (iVar2 + 0x20) * (param_3 + 1) + 0x1ff >> 9;
      iVar2 = (iVar1 + 0x20) * (param_3 + 1) + 0x1ff >> 9;
    }
    else {
      iVar3 = (iVar2 + 0x20) * (param_3 + -0xb) + 0xff >> 8;
      iVar2 = (iVar1 + 0x20) * (param_3 + -0xb) + 0xff >> 8;
    }
  }
  else {
    *(undefined4 *)((int)param_1 + 0x34d) = 0;
    if (param_3 < 8) {
      *(undefined1 *)(param_1 + 0xcb) = 0;
      iVar3 = 1;
      *(undefined4 *)((int)param_1 + 0x351) = 0xc;
      iVar2 = 1;
    }
    else if (param_3 < 0x14) {
      *(undefined1 *)(param_1 + 0xcb) = 2;
      *(undefined4 *)((int)param_1 + 0x351) = 0xc;
      iVar3 = (iVar2 + 0x20 >> 6) * (param_3 + -7) + 0xf >> 4;
      iVar2 = (iVar1 + 0x20 >> 6) * (param_3 + -7) + 0xf >> 4;
    }
    else {
      *(undefined1 *)(param_1 + 0xcb) = 3;
      *(undefined4 *)((int)param_1 + 0x351) = 0xc;
      iVar3 = (iVar2 + 0x20 >> 6) * (param_3 + -7) + 0xf >> 4;
      *(undefined4 *)((int)param_1 + 0x34d) = 1;
      iVar2 = (iVar1 + 0x20 >> 6) * (param_3 + -7) + 0xf >> 4;
    }
  }
  FUN_1002736c(param_1,iVar3,iVar2);
  return;
}


