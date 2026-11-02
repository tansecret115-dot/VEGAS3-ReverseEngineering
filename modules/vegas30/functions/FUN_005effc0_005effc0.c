/* Module: vegas30.exe
   Function: FUN_005effc0
   Address: 005effc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005effc0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((*(byte *)(param_1 + 0x134) & 1) != 0) {
    return -0x7ffb1f56;
  }
  iVar1 = FUN_005f0290();
  if (iVar1 < 0) {
    FUN_005f1080(0,1);
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 0x80;
  }
  else {
    iVar3 = 0;
    if ((iVar1 == 0) || (param_2 != (int *)0x0)) {
      iVar3 = 1;
    }
    if (*(int *)(param_1 + 0x14c) == 0) {
      iVar1 = FUN_005f1150(&param_2);
      if (iVar1 < 0) goto LAB_005f00d4;
      (**(code **)(*param_2 + 8))(param_2);
    }
    FUN_005f1080(0,iVar3);
    if (iVar3 != 0) {
      *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 0x80;
    }
    iVar1 = (**(code **)(**(int **)(param_1 + 0x14c) + 0x28))(*(int **)(param_1 + 0x14c));
    if (iVar1 < 0) goto LAB_005f00d4;
    if (iVar1 == 1) {
      uVar2 = 0xc;
      if ((DAT_006471f0 != 0) || (DAT_006484f8 != 0)) {
        uVar2 = 4;
      }
      iVar1 = (**(code **)(**(int **)(param_1 + 0x14c) + 0x2c))
                        (*(int **)(param_1 + 0x14c),uVar2,0x20);
    }
    if (iVar1 < 0) goto LAB_005f00d4;
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) & 0xffffffdd | 0x10;
    if (iVar3 != 0) {
      iVar1 = FUN_005f1800();
    }
  }
  if (-1 < iVar1) {
    FUN_005f3030(iVar1,0);
    return iVar1;
  }
LAB_005f00d4:
  if (iVar1 == -0x7ffb1ff6) {
    iVar3 = 0x50fb;
  }
  else {
    iVar3 = (-(uint)(iVar1 != -0x7ffb1ff5) & 0xfffffff2) + 0x5107;
  }
  uVar2 = _SfGetString_8(DAT_00647204,iVar3);
  FUN_005f3030(iVar1,uVar2);
  return iVar1;
}


