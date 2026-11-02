/* Module: vegas30.exe
   Function: FUN_00523300
   Address: 00523300
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00523300(int param_1,uint param_2,int param_3,uint param_4,int param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_18;
  int local_10;
  int local_c;
  
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    local_c = 0;
    piVar3 = (int *)FUN_00522a00(0);
    while (piVar3 != (int *)0x0) {
      local_18 = *piVar3;
      local_10 = 0;
      if (0 < local_18) {
        do {
          iVar4 = piVar3[1] * local_10 + piVar3[2];
          if (param_6 == 0) {
            iVar1 = *(int *)(iVar4 + 8);
            if ((param_3 <= iVar1) && ((param_3 < iVar1 || (param_2 <= *(uint *)(iVar4 + 4))))) {
              iVar5 = param_3 + param_5 + (uint)CARRY4(param_2,param_4);
              if ((iVar1 <= iVar5) &&
                 ((iVar1 < iVar5 || (*(uint *)(iVar4 + 4) < param_2 + param_4)))) {
                _SfList_DeleteList_16(piVar3,local_10,1,0);
                local_10 = local_10 + -1;
                local_18 = local_18 + -1;
              }
            }
          }
          else if (param_6 == 1) {
            iVar1 = *(int *)(iVar4 + 8);
            uVar2 = *(uint *)(iVar4 + 4);
            if ((param_3 <= iVar1) && ((param_3 < iVar1 || (param_2 <= uVar2)))) {
              iVar5 = param_3 + param_5 + (uint)CARRY4(param_2,param_4);
              if ((iVar1 <= iVar5) && ((iVar1 < iVar5 || (uVar2 < param_2 + param_4)))) {
                _SfList_DeleteList_16(piVar3,local_10,1,0);
                local_10 = local_10 + -1;
                local_18 = local_18 + -1;
                goto LAB_0052345b;
              }
            }
            iVar5 = param_3 + param_5 + (uint)CARRY4(param_2,param_4);
            if ((iVar5 <= iVar1) && ((iVar5 < iVar1 || (param_2 + param_4 <= uVar2)))) {
              *(uint *)(iVar4 + 4) = uVar2 - param_4;
              *(uint *)(iVar4 + 8) = (iVar1 - param_5) - (uint)(uVar2 < param_4);
            }
          }
          else if (param_6 == 2) {
            iVar1 = *(int *)(iVar4 + 8);
            uVar2 = *(uint *)(iVar4 + 4);
            if ((param_3 <= iVar1) && ((param_3 < iVar1 || (param_2 <= uVar2)))) {
              *(uint *)(iVar4 + 4) = uVar2 + param_4;
              *(uint *)(iVar4 + 8) = iVar1 + param_5 + (uint)CARRY4(uVar2,param_4);
            }
          }
LAB_0052345b:
          local_10 = local_10 + 1;
        } while (local_10 < local_18);
      }
      if (*piVar3 == 0) {
        FUN_0050c870(param_1,0,0,local_c);
      }
      local_c = local_c + 1;
      piVar3 = (int *)FUN_00522a00(local_c);
    }
    FUN_00453250(DAT_00647630,0);
  }
  return 0;
}


