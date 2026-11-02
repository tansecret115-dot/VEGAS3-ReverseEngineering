/* Module: ednt3260.dll
   Function: FUN_630f49a0
   Address: 630f49a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_630f49a0(int param_1)

{
  undefined2 uVar1;
  
  *(undefined2 *)(*(int *)(param_1 + 0x2a) + 2) = 0;
  uVar1 = FUN_630f4a70(*(int *)(param_1 + 0x2a) + 2,*(short *)(param_1 + 0x3fbb0) + -1);
  *(undefined2 *)(*(int *)(param_1 + 0x2a) + 2) = uVar1;
  *(undefined2 *)(*(int *)(param_1 + 0x2a) + -2 + *(short *)(param_1 + 0x3fbac) * 2) = 0;
  uVar1 = FUN_630f4a10(*(int *)(param_1 + 0x2a) + *(short *)(param_1 + 0x3fbb0) * 2,
                       (int)*(short *)(param_1 + 0x3fbb4));
  *(undefined2 *)(*(int *)(param_1 + 0x2a) + -2 + *(short *)(param_1 + 0x3fbac) * 2) = uVar1;
  return;
}


