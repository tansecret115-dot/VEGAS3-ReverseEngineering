/* Module: sfs4rw.dll
   Function: FUN_004888b0
   Address: 004888b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004888b0(int *param_1)

{
  undefined4 *puVar1;
  char unaff_BL;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x1e);
  *(undefined4 **)((int)param_1 + 0x169) = puVar1;
  *puVar1 = FUN_00488ec0;
  puVar1[1] = FUN_00489320;
  puVar1[2] = &LAB_00489350;
  *(undefined1 *)((int)puVar1 + 0xd) = 0;
  FUN_00488970(param_1);
  if (*(int *)((int)param_1 + 0xe1) == 0) {
    *(undefined1 *)(param_1 + 0x41) = 0;
    *(undefined4 *)((int)param_1 + 0xdd) = 1;
  }
  else {
    FUN_00488b30(param_1);
  }
  if ((char)param_1[0x41] != '\0') {
    *(undefined1 *)((int)param_1 + 0xe7) = 1;
  }
  if (unaff_BL == '\0') {
    *(undefined4 *)((int)puVar1 + 0xe) = 0;
  }
  else if (*(char *)((int)param_1 + 0xe7) == '\0') {
    *(undefined4 *)((int)puVar1 + 0xe) = 2;
  }
  else {
    *(undefined4 *)((int)puVar1 + 0xe) = 1;
  }
  *(undefined4 *)((int)puVar1 + 0x1a) = 0;
  *(undefined4 *)((int)puVar1 + 0x12) = 0;
  if (*(char *)((int)param_1 + 0xe7) != '\0') {
    *(int *)((int)puVar1 + 0x16) = *(int *)((int)param_1 + 0xdd) << 1;
    return;
  }
  *(undefined4 *)((int)puVar1 + 0x16) = *(undefined4 *)((int)param_1 + 0xdd);
  return;
}


