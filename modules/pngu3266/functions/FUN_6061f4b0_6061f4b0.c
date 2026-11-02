/* Module: pngu3266.dll
   Function: FUN_6061f4b0
   Address: 6061f4b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6061f4b0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x54) + 1;
  *(int *)(param_1 + 0x54) = iVar1;
  if (iVar1 == *(int *)(param_1 + 8)) {
    *(undefined4 *)(param_1 + 0x54) = 0;
    if (*(int *)(param_1 + 0x14) == 0) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
      return;
    }
    switch(*(undefined4 *)(param_1 + 0x5c)) {
    case 0:
      uVar2 = *(int *)(param_1 + 0x58) + 8;
      *(uint *)(param_1 + 0x58) = uVar2;
      if (*(uint *)(param_1 + 0xc) <= uVar2) {
        *(undefined4 *)(param_1 + 0x5c) = 1;
        *(undefined4 *)(param_1 + 0x58) = 4;
        return;
      }
      break;
    case 1:
      uVar2 = *(int *)(param_1 + 0x58) + 8;
      *(uint *)(param_1 + 0x58) = uVar2;
      if (*(uint *)(param_1 + 0xc) <= uVar2) {
        *(undefined4 *)(param_1 + 0x5c) = 2;
        *(undefined4 *)(param_1 + 0x58) = 2;
        return;
      }
      break;
    case 2:
      uVar2 = *(int *)(param_1 + 0x58) + 4;
      *(uint *)(param_1 + 0x58) = uVar2;
      if (*(uint *)(param_1 + 0xc) <= uVar2) {
        *(undefined4 *)(param_1 + 0x5c) = 3;
        *(undefined4 *)(param_1 + 0x58) = 1;
        return;
      }
      break;
    case 3:
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 2;
    }
  }
  return;
}


