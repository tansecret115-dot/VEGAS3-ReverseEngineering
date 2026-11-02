/* Module: vegas30k.dll
   Function: FUN_010a5930
   Address: 010a5930
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010a5930(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x34);
  if (uVar1 != 0xffffffff) {
    uVar3 = *(uint *)(param_1 + 0x38);
    if ((((*(int *)(param_1 + 0xa0) - uVar3) + -1 + uVar1 < *(uint *)(param_1 + 0x98)) ||
        (uVar1 == 0)) || (uVar3 == *(int *)(param_1 + 0xa0) - 1U)) {
      MessageBeep(0);
    }
    else {
      if (uVar1 <= uVar3) {
        do {
          iVar2 = FUN_010a41e0(param_1,uVar3);
          if (iVar2 == 0) break;
          uVar3 = uVar3 - 1;
        } while (*(uint *)(param_1 + 0x34) <= uVar3);
      }
      if (*(HWND *)(param_1 + 0x6c) != (HWND)0x0) {
        PostMessageA(*(HWND *)(param_1 + 0x6c),0x612,0,
                     CONCAT22(*(undefined2 *)(param_1 + 0x38),*(undefined2 *)(param_1 + 0x34)));
        return;
      }
    }
  }
  return;
}


