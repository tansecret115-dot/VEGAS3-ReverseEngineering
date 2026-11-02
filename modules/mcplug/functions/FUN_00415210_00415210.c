/* Module: mcplug.dll
   Function: FUN_00415210
   Address: 00415210
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00415210(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  short sVar3;
  
  if ((*param_1 < 0) || (sVar3 = 2, 2 < *param_1)) {
    sVar3 = 1;
  }
  iVar1 = param_1[0x100];
  *(short *)((int)param_2 + 2) = sVar3;
  *(short *)(param_2 + 3) = sVar3 * 2;
  param_2[2] = (uint)(ushort)(sVar3 * 2) * iVar1;
  puVar2 = *(undefined4 **)((int)param_2 + 0x16);
  *(undefined2 *)param_2 = 1;
  param_2[1] = iVar1;
  *(undefined2 *)((int)param_2 + 0xe) = 0x10;
  *(undefined2 *)(param_2 + 4) = 0;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *param_2;
    puVar2[1] = param_2[1];
    puVar2[2] = param_2[2];
    puVar2[3] = param_2[3];
    *(undefined2 *)(puVar2 + 4) = *(undefined2 *)(param_2 + 4);
  }
  return;
}


