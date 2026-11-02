/* Module: vegas30k.dll
   Function: FUN_011677c0
   Address: 011677c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011677c0(int param_1,undefined1 *param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  
  FUN_01167740(param_1);
  *(undefined4 *)(param_1 + 0x16a7) = 8;
  if (param_4 != 0) {
    *(byte *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) = (byte)param_3;
    iVar2 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar2;
    bVar1 = (byte)((uint)param_3 >> 8);
    *(byte *)(iVar2 + *(int *)(param_1 + 8)) = bVar1;
    iVar2 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar2;
    *(byte *)(iVar2 + *(int *)(param_1 + 8)) = ~(byte)param_3;
    iVar2 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar2;
    *(byte *)(iVar2 + *(int *)(param_1 + 8)) = ~bVar1;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) = *param_2;
    param_2 = param_2 + 1;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  return;
}


