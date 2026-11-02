/* Module: erv23260.dll
   Function: FUN_637fa0f0
   Address: 637fa0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_637fa0f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x2e8) == 0) {
    iVar1 = *(int *)(param_1 + 0x2e0);
    if (*(int *)(iVar1 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0x14) + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(*(int *)(param_1 + 0x2e0) + 0x14);
    iVar2 = *(int *)(iVar1 + 4);
    *(undefined4 *)(iVar1 + 0x14) = 0;
    for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
      *(undefined4 *)(iVar2 + 0x1c) = 0;
      if (iVar2 == *(int *)(param_1 + 0x30)) {
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
    }
    *(int *)(param_1 + 0x2e8) = iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x2e8);
  *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(iVar1 + 0x14);
  if (*(int *)(param_1 + 0x2e0) == 0) {
    *(int *)(param_1 + 0x2e0) = iVar1;
  }
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  return;
}


