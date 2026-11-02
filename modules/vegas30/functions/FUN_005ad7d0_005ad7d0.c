/* Module: vegas30.exe
   Function: FUN_005ad7d0
   Address: 005ad7d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005ad7d0(int *param_1,undefined4 param_2,int *param_3)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = _SfGetPixelType_4(*param_1);
  iVar7 = param_1[0x10c];
  piVar2 = (int *)*param_1;
  if (iVar7 == 0) {
    uVar4 = (uint)*(ushort *)((int)piVar2 + 0xe) * piVar2[1] + 0x1f;
    iVar7 = (int)((uVar4 & 0xffffffe0) + ((int)uVar4 >> 0x1f & 7U)) >> 3;
  }
  piVar5 = (int *)param_1[0x10b];
  if (piVar5 != (int *)0x0) goto LAB_005ad861;
  if (piVar2[4] == 0) {
    if (((piVar2[8] != 0) || (uVar1 = *(ushort *)((int)piVar2 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_005ad857;
    iVar6 = *piVar2 + (1 << ((byte)uVar1 & 0x1f)) * 4;
  }
  else {
    if (piVar2[4] == 3) {
      piVar5 = piVar2 + 0xd;
      goto LAB_005ad861;
    }
LAB_005ad857:
    iVar6 = *piVar2 + piVar2[8] * 4;
  }
  piVar5 = (int *)(iVar6 + (int)piVar2);
LAB_005ad861:
  iVar6 = param_1[0x10c];
  if (iVar6 == 0) {
    uVar4 = (uint)*(ushort *)((int)piVar2 + 0xe) * piVar2[1] + 0x1f;
    iVar6 = (int)((uVar4 & 0xffffffe0) + ((int)uVar4 >> 0x1f & 7U)) >> 3;
  }
  _SfDibPrepAlpha_32((int *)((piVar2[2] + -1) * iVar6 + (int)piVar5),piVar2[1],piVar2[2],-iVar7,
                     param_2,*param_3,param_3 + 2,(-(uint)(iVar3 != 0x20) & 0xfffffff4) + 0x10);
  if ((*param_3 == 0) || (*param_3 == -1)) {
    iVar7 = 0;
  }
  else {
    iVar7 = 1;
  }
  param_1[0x10d] = iVar7 << 1 | param_1[0x10d] & 0xfffffffdU;
  return;
}


