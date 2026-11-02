/* Module: vegas30k.dll
   Function: FUN_01135c10
   Address: 01135c10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_01135c10(int param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x14) < *param_3) {
    *(int *)(param_1 + 0x14) = *param_3;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x18) <= *(int *)(param_2 + 4)) {
    iVar1 = *(int *)(param_2 + 4);
  }
  *(int *)(param_1 + 0x18) = iVar1;
  if (iVar1 <= param_3[1]) {
    iVar1 = param_3[1];
  }
  *(int *)(param_1 + 0x18) = iVar1;
  iVar1 = *(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) <= *(int *)(param_2 + 0xc)) {
    iVar1 = *(int *)(param_2 + 0xc);
  }
  *(int *)(param_1 + 0x20) = iVar1;
  if (param_3[3] < iVar1) {
    *(int *)(param_1 + 0x20) = iVar1;
    return;
  }
  *(int *)(param_1 + 0x20) = param_3[3];
  return;
}


