/* Module: sftrkfx1.dll
   Function: FUN_5cba6f70
   Address: 5cba6f70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cba6f70(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((*(int *)(param_1 + 0x260) != 0) && (*(int *)(param_1 + 0x264) != 0)) {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0x268) * 0x30 + *(int *)(param_1 + 0x264));
    puVar4 = puVar3;
    for (iVar1 = 10; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), iVar1 != 0;
        iVar1 = iVar1 + -1) {
      *puVar4 = *(undefined4 *)register0x00000010;
      puVar4 = puVar4 + 1;
    }
    puVar3[10] = *(undefined4 *)(param_1 + 0x270);
    puVar3[0xb] = *(undefined4 *)(param_1 + 0x274);
    uVar2 = *(int *)(param_1 + 0x268) + 1U & 0x3f;
    *(uint *)(param_1 + 0x268) = uVar2;
    if (uVar2 == *(uint *)(param_1 + 0x26c)) {
      *(uint *)(param_1 + 0x26c) = *(uint *)(param_1 + 0x26c) + 1 & 0x3f;
    }
    return 0;
  }
  return 1;
}


