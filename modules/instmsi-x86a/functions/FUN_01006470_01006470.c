/* Module: InstMsi-x86a.exe
   Function: FUN_01006470
   Address: 01006470
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_01006470(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  
  uVar4 = param_1[0x1d];
  if (uVar4 == 0) {
LAB_0100651c:
    puVar1 = param_1 + 0x1ef;
    param_1[0x1f0] = param_1 + 0x2d;
    param_1[500] = param_1[0x23];
    *(undefined2 *)(param_1 + 0x1f5) = *(undefined2 *)((int)param_1 + 0x7e);
    *(undefined2 *)((int)param_1 + 0x7d6) = *(undefined2 *)(param_1 + 0x20);
    *(undefined2 *)(param_1 + 0x1f6) = *(undefined2 *)((int)param_1 + 0x82);
    param_1[499] = param_1[0xe];
    *(undefined2 *)((int)param_1 + 0x7de) = *(undefined2 *)(param_1 + 0x1f);
    *puVar1 = 0;
    if ((*(byte *)(param_1 + 0x1f6) & 0x40) != 0) {
      *puVar1 = 1;
      *(ushort *)(param_1 + 0x1f6) = *(ushort *)(param_1 + 0x1f6) & 0xffbf;
    }
    iVar2 = (*(code *)param_1[9])(3,puVar1);
    if (iVar2 != -1) {
      param_1[0x23] = 0xffffffff;
      if (iVar2 == 0) {
        FUN_01007480((undefined4 *)*param_1,8,0);
        return 0;
      }
      return 1;
    }
    uVar7 = 0xb;
LAB_0100658a:
    FUN_01007480((undefined4 *)*param_1,uVar7,0);
  }
  else {
    uVar6 = param_1[0x1e];
    if (uVar6 < (uint)param_1[0xc]) {
      param_1[0x24] = 0xffff;
    }
    iVar2 = FUN_01006920(param_1,(uint)*(ushort *)(param_1 + 0x1f));
    while (iVar2 != 0) {
      if (uVar6 < (uint)*(ushort *)(param_1[0x12] + 6) + param_1[0xc]) goto LAB_010064cf;
      iVar2 = FUN_010065f0(param_1);
    }
  }
  goto LAB_01006595;
  while( true ) {
    uVar5 = (uint)*(ushort *)(param_1[0x12] + 6) - (uVar6 - param_1[0xc]);
    if (uVar4 < uVar5) {
      uVar5 = uVar4;
    }
    uVar3 = (*(code *)param_1[5])(param_1[0x23],param_1[0x10] + (uVar6 - param_1[0xc]),uVar5);
    if (uVar3 != uVar5) {
      uVar7 = 8;
      goto LAB_0100658a;
    }
    uVar6 = uVar6 + uVar5;
    uVar4 = uVar4 - uVar5;
    if ((uVar4 != 0) && (iVar2 = FUN_010065f0(param_1), iVar2 == 0)) break;
LAB_010064cf:
    if (uVar4 == 0) goto LAB_0100651c;
  }
LAB_01006595:
  if (param_1[0x23] != -1) {
    (*(code *)param_1[6])(param_1[0x23]);
    param_1[0x23] = 0xffffffff;
  }
  return 0;
}


