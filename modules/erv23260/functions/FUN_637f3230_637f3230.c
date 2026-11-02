/* Module: erv23260.dll
   Function: FUN_637f3230
   Address: 637f3230
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_637f3230(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 *param_5)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  piVar3 = param_1;
  if (param_1 != (int *)0x0) {
    if ((param_1[3] == param_2) && (param_1[4] == param_3)) {
      param_1[0x1e] = 0;
      param_1[0x1f] = 0;
      return param_1;
    }
    if (param_1 != (int *)0x0) {
      param_1 = (int *)param_1[8];
      goto LAB_637f327c;
    }
  }
  param_1 = (int *)0x0;
LAB_637f327c:
  uVar8 = param_2 + 0xfU & 0xfffffff0;
  uVar6 = param_3 + 0xfU & 0xfffffff0;
  uVar1 = uVar8 + 0x20;
  uVar4 = uVar6 + 0x20;
  iVar7 = uVar1 * uVar4;
  piVar2 = (int *)((uVar4 >> 1) * uVar1 + iVar7);
  if (param_1 < piVar2) {
    piVar3 = FUN_637f1030((uint)(piVar2 + 0x2d),0);
    if (piVar3 == (int *)0x0) {
      *param_5 = 2;
      return (int *)0x0;
    }
    piVar3[0x20] = 0;
    piVar3[8] = (int)piVar2;
    piVar3[0x22] = 0;
    piVar3[0x21] = 0;
    piVar3[0x23] = (int)piVar3;
    piVar3[0x24] = (int)piVar3;
  }
  uVar4 = (int)piVar3 + 0xb3U & 0xffffffe0;
  piVar3[6] = uVar6;
  iVar7 = iVar7 + uVar4;
  *piVar3 = (uVar8 + 0x21) * 0x10 + uVar4;
  iVar5 = (uVar8 + 0x21) * 8;
  piVar3[1] = iVar7 + iVar5;
  piVar3[5] = uVar8;
  piVar3[2] = (uVar1 >> 1) + iVar7 + iVar5;
  piVar3[3] = param_2;
  piVar3[4] = param_3;
  piVar3[7] = uVar1;
  FUN_637f3370(piVar3);
  piVar3[9] = 0;
  piVar3[0x1e] = 0;
  piVar3[0x1f] = 0;
  return piVar3;
}


