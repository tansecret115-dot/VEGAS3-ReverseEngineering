/* Module: mcplugrw.dll
   Function: FUN_00488930
   Address: 00488930
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00488930(int *param_1)

{
  undefined4 *puVar1;
  char unaff_BL;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x1e);
  *(undefined4 **)((int)param_1 + 0x169) = puVar1;
  *puVar1 = FUN_00488f40;
  puVar1[1] = FUN_004893a0;
  puVar1[2] = &LAB_004893d0;
  *(undefined1 *)((int)puVar1 + 0xd) = 0;
  FUN_004889f0(param_1);
  if (*(int *)((int)param_1 + 0xe1) == 0) {
    *(undefined1 *)(param_1 + 0x41) = 0;
    *(undefined4 *)((int)param_1 + 0xdd) = 1;
  }
  else {
    FUN_00488bb0(param_1);
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


