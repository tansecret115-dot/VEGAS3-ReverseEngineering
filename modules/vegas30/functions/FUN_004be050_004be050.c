/* Module: vegas30.exe
   Function: FUN_004be050
   Address: 004be050
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_004be050(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6,uint param_7
            )

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  bool bVar6;
  
  piVar3 = *(int **)(param_2 + 0x3c);
  if (piVar3 == (int *)0x0) {
    piVar3 = *(int **)(param_1 + 0xc38);
  }
  if (piVar3 == (int *)0x0) {
    param_2 = 0;
  }
  else {
    param_2 = *piVar3;
  }
  if (param_3 != 0) {
    uVar2 = param_5 + param_7 + (uint)CARRY4(param_4,param_6);
    if (((int)uVar2 <= (int)param_5) &&
       (((int)uVar2 < (int)param_5 || (param_4 + param_6 <= param_4)))) {
      param_4 = param_4 + param_6;
      param_5 = uVar2;
    }
    if (((int)param_7 < 1) && ((int)param_7 < 0)) {
      bVar6 = param_6 != 0;
      param_6 = -param_6;
      param_7 = -(param_7 + bVar6);
    }
  }
  iVar5 = 0;
  if (0 < param_2) {
    puVar4 = (undefined4 *)piVar3[2];
    do {
      puVar1 = (uint *)*puVar4;
      if (param_3 == 0) {
        if ((((puVar1[8] & 1) == 0) && (param_4 == *puVar1)) && (param_5 == puVar1[1])) {
          return 1;
        }
      }
      else if ((((puVar1[8] & 1) != 0) && (param_4 == *puVar1)) &&
              ((param_5 == puVar1[1] && ((param_6 == puVar1[2] && (param_7 == puVar1[3])))))) {
        return 1;
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar5 < param_2);
  }
  return 0;
}


