/* Module: g2plug.dll
   Function: FUN_5f834110
   Address: 5f834110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5f834110(uint param_1,uint param_2,uint param_3,short *param_4,uint param_5,uint param_6,
            undefined4 param_7,undefined4 param_8,int *param_9)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined3 extraout_var;
  int iVar7;
  int local_8;
  
  uVar2 = param_1;
  iVar7 = 0;
  piVar1 = (int *)(param_1 + 4);
  local_8 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    FUN_5f833a10();
    FUN_5f81e1d0((int *)*piVar1);
  }
  *(uint *)(uVar2 + 8) = param_2;
  FUN_5f81e2a0(piVar1,4,-1,-1,0x80000000);
  param_1 = 0;
  FUN_5f819800((int *)&param_1);
  piVar3 = param_9;
  param_2 = param_3 & 1;
  if (0 < *param_9) {
    do {
      uVar2 = *(uint *)(piVar3[2] + iVar7 * 4);
      if ((uVar2 != 0) &&
         (((*(undefined4 *)(uVar2 + 0x2a4) = 2, *(int *)(uVar2 + 0x340) != 2 ||
           (param_3 = (uint)(*(uint *)(uVar2 + 0x240) < param_1), param_3 == 0)) &&
          ((*(byte *)(uVar2 + 0x238) & 0x20) != 0)))) {
        iVar5 = FUN_5f833a50((short *)(uVar2 + 4),param_4,param_5,param_2);
        if (((iVar5 != 0) &&
            (uVar6 = FUN_5f833f00(0x20,*(uint *)(uVar2 + 0x23c),param_6), uVar6 != 0)) &&
           (bVar4 = FUN_5f833f30(piVar3,iVar7,(int *)(uVar2 + 4),0x20,1),
           CONCAT31(extraout_var,bVar4) == 0)) {
          *(int *)(uVar2 + 0x29c) = local_8;
          local_8 = local_8 + 1;
          *(undefined4 *)(uVar2 + 0x2a4) = 0;
          param_3 = uVar2;
          FUN_5f81cc70((int *)*piVar1,-1,(int *)&param_3,1);
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *piVar3);
  }
  return 0;
}


