/* Module: erv23260.dll
   Function: FUN_637f5900
   Address: 637f5900
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_637f5900(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int local_8;
  
  puVar1 = *(undefined4 **)(param_1 + 0xa4);
  local_8 = 0x10;
  puVar2 = (undefined4 *)&stack0x00000004;
  do {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[3] = puVar2[3];
    puVar1 = (undefined4 *)((int)puVar1 + *(int *)(param_1 + 0x1c));
    local_8 = local_8 + -1;
    puVar2 = puVar2 + 4;
  } while (local_8 != 0);
  puVar1 = *(undefined4 **)(param_1 + 0xa8);
  local_8 = 8;
  puVar2 = (undefined4 *)&stack0x00000104;
  do {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1 = (undefined4 *)((int)puVar1 + *(int *)(param_1 + 0x1c));
    local_8 = local_8 + -1;
    puVar2 = puVar2 + 2;
  } while (local_8 != 0);
  puVar1 = *(undefined4 **)(param_1 + 0xac);
  local_8 = 8;
  puVar2 = (undefined4 *)&stack0x00000144;
  do {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1 = (undefined4 *)((int)puVar1 + *(int *)(param_1 + 0x1c));
    local_8 = local_8 + -1;
    puVar2 = puVar2 + 2;
  } while (local_8 != 0);
  return;
}


