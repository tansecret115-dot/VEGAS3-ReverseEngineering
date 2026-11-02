/* Module: vegas30.exe
   Function: FUN_0047db60
   Address: 0047db60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0047db60(int param_1,uint *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  
  iVar1 = **(int **)(param_1 + 0x30);
  if (0 < iVar1) {
    puVar6 = (uint *)(*(int **)(param_1 + 0x30))[2];
    param_1 = 0;
    do {
      uVar2 = *puVar6;
      uVar3 = puVar6[1];
      if (((int)param_2[1] <= (int)uVar3) && (((int)param_2[1] < (int)uVar3 || (*param_2 <= uVar2)))
         ) {
        for (; 1 < param_3; param_3 = param_3 + -1) {
          iVar7 = param_2[3] + param_2[1] + (uint)CARRY4(param_2[2],*param_2);
          if (((int)uVar3 < iVar7) || (((int)uVar3 <= iVar7 && (uVar2 < param_2[2] + *param_2))))
          break;
          param_2 = param_2 + 4;
        }
        uVar4 = param_2[1];
        uVar5 = *param_2;
        if (((int)uVar4 <= (int)uVar3) && (((int)uVar4 < (int)uVar3 || (uVar5 <= uVar2)))) {
          iVar7 = param_2[3] + uVar4 + (uint)CARRY4(param_2[2],uVar5);
          if (((int)uVar3 < iVar7) || (((int)uVar3 <= iVar7 && (uVar2 < param_2[2] + uVar5)))) {
            return 1;
          }
        }
      }
      param_1 = param_1 + 1;
      puVar6 = puVar6 + 4;
    } while (param_1 < iVar1);
  }
  return 0;
}


