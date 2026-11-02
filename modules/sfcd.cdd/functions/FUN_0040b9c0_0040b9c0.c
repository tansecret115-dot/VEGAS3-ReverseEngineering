/* Module: sfcd.cdd
   Function: FUN_0040b9c0
   Address: 0040b9c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040b9c0(undefined4 *param_1,undefined1 *param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)param_1 = 2;
  *(undefined1 *)((int)param_1 + 1) = *param_2;
  *(undefined1 *)((int)param_1 + 2) = param_2[1];
  *(undefined1 *)((int)param_1 + 3) = param_2[2];
  *(undefined1 *)(param_1 + 1) = param_2[3];
  *(undefined1 *)((int)param_1 + 5) = param_2[4];
  *(undefined1 *)((int)param_1 + 6) = param_2[5];
  *(undefined1 *)((int)param_1 + 7) = param_2[6];
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 2) = 2;
  *(undefined1 *)((int)param_1 + 9) = param_2[7];
  *(undefined1 *)((int)param_1 + 10) = param_2[8];
  *(undefined1 *)((int)param_1 + 0xb) = param_2[9];
  *(undefined1 *)(param_1 + 3) = param_2[10];
  *(undefined1 *)((int)param_1 + 0xd) = param_2[0xb];
  *(undefined1 *)((int)param_1 + 0xe) = param_2[0xc];
  return 0;
}


