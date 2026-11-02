/* Module: oggplug.dll
   Function: FUN_00442850
   Address: 00442850
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_00442850(int *param_1,uint *param_2,int *param_3,undefined4 *param_4,int *param_5)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_30 [4];
  int local_20 [8];
  
  if (param_5 == (int *)0x0) {
    uVar2 = FUN_00442990(param_1,local_30,0x2134);
    if (uVar2 == 0xffffff80) {
      return -0x80;
    }
    if ((int)uVar2 < 0) {
      return -0x84;
    }
    param_5 = local_30;
  }
  if (param_4 != (undefined4 *)0x0) {
    uVar3 = FUN_00440f10(param_5);
    *param_4 = uVar3;
  }
  piVar1 = param_1 + 0x1e;
  uVar3 = FUN_00440f10(param_5);
  FUN_00440fa0(piVar1,uVar3);
  param_1[0x16] = 3;
  FUN_00430040(param_2);
  FUN_0042fc80(param_3);
  iVar5 = 0;
LAB_004428e7:
  FUN_00441860(piVar1,param_5);
  if (iVar5 < 3) {
    while (iVar4 = FUN_00441bc0(piVar1,local_20), iVar4 != 0) {
      if (iVar4 == -1) goto LAB_0044294f;
      iVar4 = FUN_004301e0(param_2,param_3,local_20);
      if (iVar4 != 0) goto LAB_00442954;
      iVar5 = iVar5 + 1;
      if (2 < iVar5) {
        return 0;
      }
    }
    if (iVar5 < 3) goto code_r0x00442937;
  }
  return 0;
code_r0x00442937:
  uVar2 = FUN_00442990(param_1,param_5,1);
  if ((int)uVar2 < 0) {
LAB_0044294f:
    iVar4 = -0x85;
LAB_00442954:
    FUN_00430070(param_2);
    FUN_0042ffd0(param_3);
    FUN_00441080(piVar1);
    return iVar4;
  }
  goto LAB_004428e7;
}


