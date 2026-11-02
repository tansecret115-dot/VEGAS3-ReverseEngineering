/* Module: vegas30k.dll
   Function: FUN_01161970
   Address: 01161970
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_01161970(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_2 == 0) {
    return;
  }
  *(int *)(param_1 + 4) = param_2;
  piVar2 = (int *)FUN_01135370();
  piVar3 = (int *)FUN_01134d60();
  if (piVar3 == (int *)0x0) {
    return;
  }
  if (piVar2 == (int *)0x0) {
    if (piVar3[4] == 0) {
      if (((piVar3[8] == 0) && (uVar1 = *(ushort *)((int)piVar3 + 0xe), uVar1 != 0)) && (uVar1 < 9))
      {
        piVar2 = (int *)(*piVar3 + (1 << ((byte)uVar1 & 0x1f)) * 4 + (int)piVar3);
        goto LAB_011619e7;
      }
    }
    else if (piVar3[4] == 3) {
      piVar2 = piVar3 + 0xd;
      goto LAB_011619e7;
    }
    piVar2 = (int *)(*piVar3 + piVar3[8] * 4 + (int)piVar3);
  }
LAB_011619e7:
  puVar7 = &param_2;
  *(int **)(param_1 + 8) = piVar2;
  uVar4 = _SfGetPixelType_4(piVar3);
  uVar5 = _SfGetPixelBitsPerChannel_8(uVar4,puVar7);
  *(uint *)(param_1 + 0x24) = uVar5 >> 3;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (piVar3[2] + -1) * *(int *)(param_1 + 0x10);
  iVar6 = -*(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar6;
  if (param_3 != 0) {
    *(int *)(param_1 + 8) =
         *(int *)(param_1 + 8) + *(int *)(param_3 + 0x10) * iVar6 + *(int *)(param_3 + 8) * 0x10;
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
  iVar6 = FUN_01135380();
  if (iVar6 == 0) {
    uVar5 = (uint)*(ushort *)((int)piVar3 + 0xe) * piVar3[1] + 0x1f;
    iVar6 = (int)((uVar5 & 0xffffffe0) + ((int)uVar5 >> 0x1f & 7U)) >> 3;
  }
  *(int *)(param_1 + 0x10) = iVar6;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


