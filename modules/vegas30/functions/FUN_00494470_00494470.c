/* Module: vegas30.exe
   Function: FUN_00494470
   Address: 00494470
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00494470(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar1 = *param_2;
  uVar2 = *(uint *)(param_1 + 400);
  iVar6 = (param_2[1] - *(int *)(param_1 + 0x194)) - (uint)(uVar1 < uVar2);
  iVar4 = *(int *)(param_1 + 0x194) + param_2[1] + (uint)CARRY4(uVar2,uVar1);
  if ((*(uint *)(param_1 + 0x18) & 0x100) != 0) {
    uVar7 = *(uint *)(param_1 + 0xb4c);
    uVar3 = *(uint *)(param_1 + 0xb48);
    if ((iVar6 <= (int)uVar7) &&
       ((((iVar6 < (int)uVar7 || (uVar1 - uVar2 <= uVar3)) && ((int)uVar7 <= iVar4)) &&
        (((int)uVar7 < iVar4 || (uVar3 <= uVar2 + uVar1)))))) {
      *param_2 = uVar3;
      param_2[1] = uVar7;
      return 1;
    }
    uVar5 = uVar3 + *(uint *)(param_1 + 0xb50);
    uVar7 = uVar7 + *(int *)(param_1 + 0xb54) + (uint)CARRY4(uVar3,*(uint *)(param_1 + 0xb50));
    if ((iVar6 <= (int)uVar7) &&
       (((iVar6 < (int)uVar7 || (uVar1 - uVar2 <= uVar5)) &&
        (((int)uVar7 <= iVar4 && (((int)uVar7 < iVar4 || (uVar5 <= uVar2 + uVar1)))))))) {
      *param_2 = uVar5;
      param_2[1] = uVar7;
      return 1;
    }
  }
  return 0;
}


