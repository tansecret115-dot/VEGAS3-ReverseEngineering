/* Module: sfcd.cdd
   Function: FUN_004090f0
   Address: 004090f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004090f0(undefined4 *param_1,int param_2)

{
  char *pcVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  *(byte *)((int)param_1 + 1) = 3;
  FUN_00408fa0((byte *)((int)param_1 + 1),param_2);
  pcVar1 = (char *)((int)param_1 + 2);
  *(undefined4 *)pcVar1 = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((int)param_1 + 6) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)((int)param_1 + 10) = *(undefined4 *)(param_2 + 0x28);
  do {
    *pcVar1 = *pcVar1 + -0x40;
    pcVar1 = pcVar1 + 1;
  } while ((int)(pcVar1 + (-2 - (int)param_1)) < 5);
  pcVar1 = (char *)((int)param_1 + 7);
  do {
    *pcVar1 = *pcVar1 + -0x30;
    pcVar1 = pcVar1 + 1;
  } while ((int)(pcVar1 + (-2 - (int)param_1)) < 0xc);
  return;
}


