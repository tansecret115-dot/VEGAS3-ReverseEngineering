/* Module: vidcap30.exe
   Function: FUN_00470ec0
   Address: 00470ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00470ec0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((*(byte *)(param_1 + 0x124) & 1) != 0) {
    return -0x7ffb1f56;
  }
  iVar1 = FUN_00471100();
  if (iVar1 < 0) {
    FUN_00471310(0,1);
    *(uint *)(param_1 + 0x124) = *(uint *)(param_1 + 0x124) & 0xfffff7ff | 0x480;
  }
  else {
    iVar3 = 0;
    if ((iVar1 == 0) || (param_2 != (int *)0x0)) {
      iVar3 = 1;
    }
    if (*(int *)(param_1 + 0x134) == 0) {
      iVar1 = FUN_004713e0(&param_2);
      if (iVar1 < 0) goto LAB_00470fe2;
      (**(code **)(*param_2 + 8))(param_2);
    }
    FUN_00471310(0,iVar3);
    if (iVar3 != 0) {
      *(uint *)(param_1 + 0x124) = *(uint *)(param_1 + 0x124) & 0xfffff7ff | 0x480;
    }
    iVar1 = (**(code **)(**(int **)(param_1 + 0x134) + 0x28))(*(int **)(param_1 + 0x134));
    if (iVar1 < 0) goto LAB_00470fe2;
    if (iVar1 == 1) {
      uVar2 = 0xc;
      if ((DAT_005ba290 != 0) || (DAT_005bb7d4 != 0)) {
        uVar2 = 4;
      }
      iVar1 = (**(code **)(**(int **)(param_1 + 0x134) + 0x2c))
                        (*(int **)(param_1 + 0x134),uVar2,0x20);
    }
    if (iVar1 < 0) goto LAB_00470fe2;
    *(uint *)(param_1 + 0x124) = *(uint *)(param_1 + 0x124) & 0xffffffdd | 0x10;
    if (iVar3 != 0) {
      iVar1 = FUN_004719b0();
    }
  }
  if (-1 < iVar1) {
    FUN_00472c40(iVar1,0);
    return iVar1;
  }
LAB_00470fe2:
  if (iVar1 == -0x7ffb1ff6) {
    iVar3 = 0xc567;
  }
  else {
    iVar3 = (iVar1 != -0x7ffb1ff5) + 0xc568;
  }
  uVar2 = _SfGetString_8(DAT_005ba2a0,iVar3);
  FUN_00472c40(iVar1,uVar2);
  return iVar1;
}


