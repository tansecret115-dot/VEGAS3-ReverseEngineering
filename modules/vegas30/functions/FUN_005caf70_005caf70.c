/* Module: vegas30.exe
   Function: FUN_005caf70
   Address: 005caf70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_005caf70(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  
  FUN_005b83b0(param_1,0);
  uVar5 = 0;
  iVar6 = 0;
  piVar7 = (int *)(param_2 + 0x24);
  param_2 = *(int *)*piVar7;
  if (0 < param_2) {
    piVar7 = (int *)((int *)*piVar7)[2];
    do {
      iVar1 = *piVar7;
      uVar2 = *(uint *)(iVar1 + 0x20);
      uVar4 = *(uint *)(iVar1 + 0x18) + uVar2;
      iVar3 = *(int *)(iVar1 + 0x1c) + *(int *)(iVar1 + 0x24) +
              (uint)CARRY4(*(uint *)(iVar1 + 0x18),uVar2);
      if ((((uVar2 != 0xffffffff) || (*(int *)(iVar1 + 0x24) != 0x1fffffff)) && (iVar6 <= iVar3)) &&
         ((iVar6 < iVar3 || (uVar5 <= uVar4)))) {
        uVar5 = uVar4;
        iVar6 = iVar3;
      }
      piVar7 = piVar7 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  FUN_005b84d0(param_1,0);
  return CONCAT44(iVar6,uVar5);
}


