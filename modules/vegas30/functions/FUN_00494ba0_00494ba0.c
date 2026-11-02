/* Module: vegas30.exe
   Function: FUN_00494ba0
   Address: 00494ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00494ba0(int param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = *(uint *)(param_1 + 400);
  uVar2 = *param_2;
  iVar5 = (param_2[1] - *(int *)(param_1 + 0x194)) - (uint)(uVar2 < uVar1);
  iVar4 = *(int *)(param_1 + 0x194) + param_2[1] + (uint)CARRY4(uVar1,uVar2);
  uVar7 = *(uint *)(param_3 + 0x1c);
  uVar3 = *(uint *)(param_3 + 0x18);
  if (((iVar5 <= (int)uVar7) &&
      (((iVar5 < (int)uVar7 || (uVar2 - uVar1 <= uVar3)) && ((int)uVar7 <= iVar4)))) &&
     (((int)uVar7 < iVar4 || (uVar3 <= uVar1 + uVar2)))) {
    *param_2 = uVar3;
    param_2[1] = uVar7;
    return 1;
  }
  uVar6 = uVar3 + DAT_00649988;
  uVar7 = uVar7 + DAT_0064998c + (uint)CARRY4(uVar3,DAT_00649988);
  if (((DAT_0064998c <= *(int *)(param_3 + 0x24)) &&
      ((DAT_0064998c < *(int *)(param_3 + 0x24) || (DAT_00649988 < *(uint *)(param_3 + 0x20))))) &&
     ((iVar5 <= (int)uVar7 &&
      ((((iVar5 < (int)uVar7 || (uVar2 - uVar1 <= uVar6)) && ((int)uVar7 <= iVar4)) &&
       (((int)uVar7 < iVar4 || (uVar6 <= uVar1 + uVar2)))))))) {
    *param_2 = uVar6;
    param_2[1] = uVar7;
    return 1;
  }
  return 0;
}


