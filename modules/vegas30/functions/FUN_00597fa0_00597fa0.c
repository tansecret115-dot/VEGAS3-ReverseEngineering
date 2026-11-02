/* Module: vegas30.exe
   Function: FUN_00597fa0
   Address: 00597fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00597fa0(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined4 local_3c;
  int local_34;
  
  piVar4 = (int *)FUN_005b87b0(*(undefined4 *)(param_1 + 0x68));
  iVar1 = *piVar4;
  uVar9 = 0;
  local_3c = 0;
  local_34 = 0;
  if (iVar1 < 1) {
    return 0;
  }
  do {
    iVar2 = *(int *)(piVar4[2] + local_34 * 4);
    if (*(int *)(iVar2 + 4) == 2) {
      FUN_00595760(param_1,iVar2);
      if (param_4 == 0) {
        for (iVar6 = **(int **)(iVar2 + 0x5d0); iVar6 != 0; iVar6 = iVar6 + -1) {
          iVar3 = **(int **)(*(int *)(iVar2 + 0x5d0) + 8);
          uVar10 = __allmul(DAT_0065a078,DAT_0065a07c,3,0);
          __alldiv(uVar10,2,0);
          uVar10 = ftol();
          if (*(int *)(iVar3 + 0x30) < 1) {
            uVar5 = *(uint *)(iVar3 + 0x28);
          }
          else {
            uVar5 = *(uint *)(iVar3 + 0x2c);
          }
          iVar8 = *(int *)(iVar3 + 0x1c) + ((int)uVar5 >> 0x1f) +
                  (uint)CARRY4(*(uint *)(iVar3 + 0x18),uVar5);
          iVar7 = (param_3 - (int)((ulonglong)uVar10 >> 0x20)) - (uint)(param_2 < (uint)uVar10);
          if ((iVar7 < iVar8) ||
             ((iVar7 <= iVar8 && (param_2 - (uint)uVar10 <= *(uint *)(iVar3 + 0x18) + uVar5))))
          break;
          FUN_00595ba0(param_1,iVar3);
          _SfList_DeleteList_16(*(undefined4 *)(iVar2 + 0x5d0),0,1,0);
          local_3c = 1;
        }
      }
      else {
        iVar6 = **(int **)(iVar2 + 0x5d0);
        while (iVar6 = iVar6 + -1, -1 < iVar6) {
          iVar3 = *(int *)(*(int *)(*(int *)(iVar2 + 0x5d0) + 8) + iVar6 * 4);
          uVar10 = __allmul(DAT_0065a078,DAT_0065a07c,3,0);
          __alldiv(uVar10,2,0);
          lVar11 = ftol();
          lVar11 = lVar11 + CONCAT44(param_3,param_2);
          iVar8 = (int)((ulonglong)lVar11 >> 0x20);
          if ((*(int *)(iVar3 + 0x1c) < iVar8) ||
             ((*(int *)(iVar3 + 0x1c) <= iVar8 && (*(uint *)(iVar3 + 0x18) <= (uint)lVar11))))
          break;
          FUN_00595ba0(param_1,iVar3);
          _SfList_DeleteList_16(*(undefined4 *)(iVar2 + 0x5d0),iVar6,1,0);
          local_3c = 1;
        }
      }
      FUN_00595790(param_1,iVar2);
      uVar9 = local_3c;
    }
    local_34 = local_34 + 1;
    if (iVar1 <= local_34) {
      return uVar9;
    }
  } while( true );
}


