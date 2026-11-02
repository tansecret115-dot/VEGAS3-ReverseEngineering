/* Module: mcmpgdec.dll
   Function: FUN_1000851c
   Address: 1000851c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1000851c(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  *(undefined4 *)(param_1 + 0x70) = 1;
  piVar1 = (int *)(param_1 + 0x66c);
  uVar2 = FUN_10003a04(piVar1,8);
  *(uint *)(param_1 + 0x588) = uVar2;
  uVar2 = FUN_10003a04(piVar1,1);
  *(uint *)(param_1 + 0x58c) = uVar2;
  uVar2 = FUN_10003a04(piVar1,2);
  *(uint *)(param_1 + 0x590) = uVar2;
  uVar3 = FUN_10003a04(piVar1,2);
  uVar4 = FUN_10003a04(piVar1,2);
  uVar5 = FUN_10003a04(piVar1,0xd);
  uVar6 = FUN_10003a04(piVar1,8);
  uVar2 = FUN_10003a04(piVar1,1);
  *(uint *)(param_1 + 0x594) = uVar2;
  uVar2 = FUN_10003a04(piVar1,2);
  *(uint *)(param_1 + 0x598) = uVar2;
  uVar7 = FUN_10003a04(piVar1,5);
  *(uint *)(param_1 + 0x59c) = uVar7;
  uVar2 = *(uint *)(param_1 + 0x588);
  *(double *)(param_1 + 0x154) =
       (double)((*(int *)(param_1 + 0x598) + 1) / (int)(uVar7 + 1)) *
       *(double *)(&DAT_10030f60 + *(int *)(param_1 + 0x13c) * 8);
  if ((uVar2 & 0x80) == 0) {
    *(int *)(param_1 + 0x114) = (int)uVar2 >> 4;
    *(uint *)(param_1 + 0x118) = uVar2 & 0xf;
  }
  else if ((uVar2 & 0xf) == 5) {
    *(undefined4 *)(param_1 + 0x114) = 0x85;
    *(undefined4 *)(param_1 + 0x118) = 8;
  }
  *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) & 0xfff | uVar3 << 0xc;
  *(uint *)(param_1 + 0x134) = uVar4 << 0xc | *(uint *)(param_1 + 0x134) & 0xfff;
  uVar2 = (uVar5 >> 1) << 0x12 | *(uint *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = uVar2;
  *(double *)(param_1 + 0x14c) = (double)(int)uVar2 * _DAT_10008514;
  *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | uVar6 << 10;
  return;
}


