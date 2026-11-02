/* Module: vegas30.exe
   Function: FUN_00494ca0
   Address: 00494ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00494ca0(int param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  uVar1 = *(uint *)(param_1 + 400);
  uVar2 = *param_2;
  iVar9 = (param_2[1] - *(int *)(param_1 + 0x194)) - (uint)(uVar2 < uVar1);
  iVar7 = *(int *)(param_1 + 0x194) + param_2[1] + (uint)CARRY4(uVar1,uVar2);
  uVar3 = *(uint *)(param_3 + 0x20);
  iVar4 = *(int *)(param_3 + 0x24);
  uVar5 = *(uint *)(param_3 + 0x18) + uVar3;
  uVar8 = *(int *)(param_3 + 0x1c) + iVar4 + (uint)CARRY4(*(uint *)(param_3 + 0x18),uVar3);
  if (((iVar9 <= (int)uVar8) &&
      (((iVar9 < (int)uVar8 || (uVar2 - uVar1 <= uVar5)) && ((int)uVar8 <= iVar7)))) &&
     (((int)uVar8 < iVar7 || (uVar5 <= uVar1 + uVar2)))) {
    *param_2 = uVar5;
    param_2[1] = uVar8;
    return 1;
  }
  uVar6 = uVar5 - DAT_00649988;
  uVar5 = (uVar8 - DAT_0064998c) - (uint)(uVar5 < DAT_00649988);
  if (((DAT_0064998c <= iVar4) && ((DAT_0064998c < iVar4 || (DAT_00649988 < uVar3)))) &&
     ((iVar9 <= (int)uVar5 &&
      ((((iVar9 < (int)uVar5 || (uVar2 - uVar1 <= uVar6)) && ((int)uVar5 <= iVar7)) &&
       (((int)uVar5 < iVar7 || (uVar6 <= uVar1 + uVar2)))))))) {
    *param_2 = uVar6;
    param_2[1] = uVar5;
    return 1;
  }
  return 0;
}


