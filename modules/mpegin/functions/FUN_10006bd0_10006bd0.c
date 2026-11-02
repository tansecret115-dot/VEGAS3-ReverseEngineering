/* Module: mpegin.dll
   Function: FUN_10006bd0
   Address: 10006bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10006bd0(int param_1)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  *(undefined4 *)(param_1 + 0x34) = 1;
  uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),8);
  *(uint *)(param_1 + 0x188) = uVar2;
  uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),1);
  *(uint *)(param_1 + 0x18c) = uVar2;
  uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),2);
  *(uint *)(param_1 + 400) = uVar2;
  uVar3 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),2);
  uVar4 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),2);
  uVar5 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),0xd);
  uVar6 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),8);
  uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),1);
  *(uint *)(param_1 + 0x194) = uVar2;
  uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),2);
  *(uint *)(param_1 + 0x198) = uVar2;
  uVar7 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),5);
  *(uint *)(param_1 + 0x19c) = uVar7;
  uVar2 = *(uint *)(param_1 + 0x188);
  *(double *)(param_1 + 0x40) =
       (double)((*(int *)(param_1 + 0x198) + 1) / (int)(uVar7 + 1)) *
       *(double *)(&DAT_10018ae8 + *(int *)(param_1 + 0x178) * 8);
  if ((uVar2 & 0x80) == 0) {
    *(int *)(param_1 + 0x158) = (int)uVar2 >> 4;
    *(uint *)(param_1 + 0x15c) = uVar2 & 0xf;
  }
  else if (((byte)uVar2 & 0xf) == 5) {
    *(undefined4 *)(param_1 + 0x158) = 0x85;
    *(undefined4 *)(param_1 + 0x15c) = 8;
  }
  iVar8 = *(int *)(param_1 + 0x17c) + (uVar5 >> 1) * 0x40000;
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfff | uVar3 << 0xc;
  *(int *)(param_1 + 0x17c) = iVar8;
  dVar1 = (double)iVar8 * _DAT_10016128;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfff | uVar4 << 0xc;
  *(double *)(param_1 + 0x38) = dVar1;
  *(uint *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + uVar6 * 0x400;
  return;
}


