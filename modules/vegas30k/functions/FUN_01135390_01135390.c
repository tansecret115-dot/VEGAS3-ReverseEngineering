/* Module: vegas30k.dll
   Function: FUN_01135390
   Address: 01135390
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_01135390(int param_1,int *param_2,int *param_3,undefined4 *param_4,undefined4 param_5,
            int param_6)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(undefined4 *)(param_1 + 0x38) = param_5;
  bVar5 = false;
  if (param_6 == 1) {
    iVar3 = _SfGetPixelType_4(param_2);
    bVar5 = iVar3 != 0x20;
    local_10 = DAT_011e6998;
    local_c = DAT_011e699c;
    local_8 = DAT_011e69a0;
    local_4 = DAT_011e69a4;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0x20;
  }
  else {
    iVar3 = _SfGetPixelType_4(param_2);
    if ((iVar3 != 0x1c) && (iVar3 = _SfGetPixelType_4(param_2), iVar3 != 0x1d)) {
      bVar5 = true;
    }
    local_10 = DAT_011e67d8;
    local_c = DAT_011e67dc;
    local_8 = DAT_011e67e0;
    local_4 = DAT_011e67e4;
    *(undefined4 *)(param_1 + 0x8c) = 0x60001;
    *(undefined4 *)(param_1 + 0xb0) = 0x1c;
  }
  if (bVar5) {
    piVar1 = (int *)(param_1 + 0x4c);
    iVar3 = 4;
    *(undefined4 *)(param_1 + 0x40) = 0;
    piVar4 = piVar1;
    do {
      piVar4[-1] = 0;
      *piVar4 = 1;
      piVar4 = piVar4 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (param_4 == (undefined4 *)0x0) {
      *piVar1 = param_2[1];
      iVar3 = param_2[2];
    }
    else {
      *(undefined4 *)(param_1 + 0x48) = *param_4;
      *(undefined4 *)(param_1 + 0x50) = param_4[1];
      *piVar1 = param_4[2];
      iVar3 = param_4[3];
    }
    *(int *)(param_1 + 0x54) = iVar3;
    iVar3 = FUN_011352b0((undefined4 *)(param_1 + 0x40),&local_10);
    if (iVar3 < 0) {
      return iVar3;
    }
    iVar3 = _SfDibCopy_36(*(undefined4 *)(param_1 + 0x30),0,0,0,param_2,param_3,param_4,0,3);
    *(undefined4 *)(param_1 + 0x94) = 1;
    return iVar3;
  }
  piVar1 = (int *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x40) = 0;
  iVar3 = 4;
  piVar4 = piVar1;
  do {
    piVar4[-1] = 0;
    *piVar4 = 1;
    piVar4 = piVar4 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (param_4 == (undefined4 *)0x0) {
    *piVar1 = param_2[1];
    *(int *)(param_1 + 0x54) = param_2[2];
  }
  else {
    *(undefined4 *)(param_1 + 0x48) = *param_4;
    *(undefined4 *)(param_1 + 0x50) = param_4[1];
    *piVar1 = param_4[2];
    *(undefined4 *)(param_1 + 0x54) = param_4[3];
  }
  *(int **)(param_1 + 0x30) = param_2;
  if (param_3 != (int *)0x0) goto LAB_01135576;
  if (param_2[4] == 0) {
    if (((param_2[8] != 0) || (uVar2 = *(ushort *)((int)param_2 + 0xe), uVar2 == 0)) || (8 < uVar2))
    goto LAB_0113556c;
    iVar3 = *param_2 + (1 << ((byte)uVar2 & 0x1f)) * 4;
  }
  else {
    if (param_2[4] == 3) {
      param_3 = param_2 + 0xd;
      goto LAB_01135576;
    }
LAB_0113556c:
    iVar3 = *param_2 + param_2[8] * 4;
  }
  param_3 = (int *)(iVar3 + (int)param_2);
LAB_01135576:
  *(int **)(param_1 + 0x34) = param_3;
  *(undefined4 *)(param_1 + 0x94) = 0;
  return 0;
}


