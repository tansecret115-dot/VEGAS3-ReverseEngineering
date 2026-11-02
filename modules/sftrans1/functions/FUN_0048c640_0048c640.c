/* Module: sftrans1.dll
   Function: FUN_0048c640
   Address: 0048c640
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0048c640(int param_1,int *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  iVar2 = FUN_0048c9a0(param_2);
  if (iVar2 == 0) {
    return 0;
  }
  piVar1 = (int *)(param_1 + 0x100);
  uVar3 = param_3 & 1;
  uVar5 = param_3 & 8;
  FUN_0048cb00(piVar1,param_2);
  if ((uVar5 == 0) || ((uVar3 == 0 && ((param_3 & 2) == 0)))) {
    *piVar1 = *param_2;
    *(int *)(param_1 + 0x104) = param_2[1];
  }
  iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0xa4) + 8) + *piVar1 * 4) + 0xc);
  FUN_0048c570(param_2);
  if ((param_3 & 2) == 0) {
    if (uVar3 == 0) {
      if ((uVar5 == 0) || (iVar2 == 0)) {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
      iVar2 = *piVar1;
      uVar6 = 1;
    }
    else {
      if (((param_3 & 4) == 0) || (uVar5 != 0)) goto LAB_0048c735;
      iVar2 = *piVar1;
      uVar6 = 0xffffffff;
      uVar4 = 0;
    }
    iVar2 = FUN_0048c830(iVar2,uVar6,uVar4);
    if (iVar2 != 0) {
      *(int *)(param_1 + 0xf8) = *piVar1;
    }
  }
  else if (uVar5 == 0) {
    FUN_0048c7c0(*(undefined4 *)(param_1 + 0xf8),*piVar1,1,uVar3 == 0);
  }
LAB_0048c735:
  InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)0x0,0);
  FUN_0048c310(3,0xffffffff,0);
  return 1;
}


