/* Module: vegas30.exe
   Function: FUN_005da080
   Address: 005da080
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005da080(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_4;
  
  uVar2 = param_1;
  FUN_005b83b0(param_1,1);
  FUN_005c60f0(param_1,&LAB_005da060,2);
  if (param_2 == (int *)0x0) {
    param_1 = 0;
  }
  else {
    param_1 = *param_2;
  }
  local_4 = 0;
  if (0 < param_1) {
    do {
      iVar1 = *(int *)(param_2[2] + local_4 * 4);
      if (*(int *)(iVar1 + 0x38) != 0) {
        piVar3 = (int *)FUN_005d9be0(uVar2,0,iVar1);
        if (piVar3 == (int *)0x0) {
          *(undefined4 *)(iVar1 + 0x38) = 0;
        }
        else {
          iVar6 = 0;
          iVar1 = *(int *)*piVar3;
          if (0 < iVar1) {
            do {
              iVar5 = *(int *)(*piVar3 + 8);
              iVar4 = *(int *)(*piVar3 + 4) * iVar6;
              iVar5 = FUN_005d9aa0(uVar2,0,*(undefined4 *)(iVar4 + iVar5),
                                   *(undefined4 *)(iVar4 + 4 + iVar5));
              if (iVar5 != 0) {
                *(uint *)(iVar5 + 0x10) = *(uint *)(iVar5 + 0x10) | 0x80000000;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < iVar1);
          }
        }
      }
      local_4 = local_4 + 1;
    } while (local_4 < param_1);
  }
  FUN_005b84d0(uVar2,1);
  return;
}


