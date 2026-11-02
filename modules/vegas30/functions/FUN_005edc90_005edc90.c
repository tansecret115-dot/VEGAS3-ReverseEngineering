/* Module: vegas30.exe
   Function: FUN_005edc90
   Address: 005edc90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005edc90(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 0xc);
  iVar2 = *(int *)(param_2 + 0x10);
  if (*(int *)(iVar1 + 0x10) == param_2) {
    *(int *)(iVar1 + 0x10) = iVar2;
  }
  else if (*(int *)(iVar1 + 0x14) == param_2) {
    *(int *)(iVar1 + 0x14) = iVar2;
  }
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (*(int *)(param_1 + 8) == param_2) {
    *(int *)(param_1 + 8) = iVar2;
  }
  iVar1 = *(int *)(iVar2 + 0x14);
  *(int *)(param_2 + 0x10) = iVar1;
  if ((*(byte *)(iVar1 + 0x18) & 2) != 2) {
    *(int *)(iVar1 + 0xc) = param_2;
  }
  *(int *)(iVar2 + 0x14) = param_2;
  *(int *)(param_2 + 0xc) = iVar2;
  return;
}


