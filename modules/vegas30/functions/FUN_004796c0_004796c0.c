/* Module: vegas30.exe
   Function: FUN_004796c0
   Address: 004796c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004796c0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint local_10;
  int local_c;
  undefined4 local_4;
  
  iVar4 = **(int **)(param_2 + 0x30);
  FUN_00478480(param_1,param_2,param_3,param_4,&local_10);
  uVar5 = 0;
  if (0 < iVar4) {
    iVar1 = *(int *)(*(int *)(param_2 + 0x30) + 8);
    do {
      iVar3 = *(int *)(*(int *)(param_2 + 0x30) + 4) * uVar5;
      uVar2 = *(uint *)(iVar3 + iVar1);
      iVar3 = *(int *)(iVar3 + iVar1 + 4);
      if ((local_10 == uVar2) && (local_c == iVar3)) {
        return 0xffffffff;
      }
    } while ((iVar3 <= local_c) &&
            (((iVar3 < local_c || (uVar2 <= local_10)) && (uVar5 = uVar5 + 1, (int)uVar5 < iVar4))))
    ;
    if (0 < (int)uVar5) {
      iVar4 = *(int *)(param_2 + 0x30);
      local_4 = *(undefined4 *)(*(int *)(iVar4 + 4) * (uVar5 - 1) + 0xc + *(int *)(iVar4 + 8));
      iVar4 = _SfList_InsertList_16(iVar4,uVar5,&local_10,1);
      if (iVar4 < 0) {
        return 0xffffffff;
      }
      if (*(int *)(param_1 + 0x4c) != 0) {
        if (uVar5 <= *(uint *)(param_1 + 0x48)) {
          *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) + 1;
          return uVar5;
        }
        iVar4 = FUN_00478b00(uVar5,param_2,param_1);
        if (iVar4 != 0) {
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
        }
      }
      return uVar5;
    }
  }
  return 0xffffffff;
}


