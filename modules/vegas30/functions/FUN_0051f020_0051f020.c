/* Module: vegas30.exe
   Function: FUN_0051f020
   Address: 0051f020
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051f020(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  *(uint *)(param_1 + 0x1c) =
       (*(uint *)(param_1 + 0x1c) ^ DAT_006495b4) & 1 ^ *(uint *)(param_1 + 0x1c);
  uVar1 = *(uint *)(param_1 + 4);
  uVar2 = (DAT_006495b8 & 1) << 5;
  *(uint *)(param_1 + 4) = uVar2 | uVar1 & 0xffffffdf;
  uVar4 = (DAT_006495bc & 1) << 7;
  *(uint *)(param_1 + 4) = uVar4 | uVar2 | uVar1 & 0xffffff5f;
  uVar3 = (DAT_006495c0 & 1) << 8;
  *(uint *)(param_1 + 4) = uVar3 | uVar4 | uVar2 | uVar1 & 0xfffffe5f;
  *(uint *)(param_1 + 4) = (DAT_006495c4 & 0xf) << 0x11 | uVar3 | uVar4 | uVar2 | uVar1 & 0xffe1fe5f
  ;
  *(float *)(param_1 + 8) = (float)_DAT_006495c8;
  *(float *)(param_1 + 0x20) = (float)_DAT_006495d0;
  return;
}


