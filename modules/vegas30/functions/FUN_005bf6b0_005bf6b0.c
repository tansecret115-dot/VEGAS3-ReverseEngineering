/* Module: vegas30.exe
   Function: FUN_005bf6b0
   Address: 005bf6b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_005bf6b0(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_18;
  uint local_10;
  int local_c;
  uint local_8;
  int local_4;
  
  FUN_005b83b0(*(undefined4 *)(param_1 + 8),1);
  iVar5 = 0;
  local_18 = 0;
  iVar2 = FUN_005be910(param_2,param_3);
  if (0 < iVar2 + -1) {
    do {
      iVar1 = iVar5 + 1;
      for (iVar4 = iVar1; iVar4 < iVar2; iVar4 = iVar4 + 1) {
        iVar3 = FUN_005bec40(param_2,iVar5,param_3,0,&local_8,0,0,0);
        if ((((iVar3 != 0) &&
             (iVar3 = FUN_005bec40(param_2,iVar4,param_3,0,&local_10,0,0,0), iVar3 != 0)) &&
            (local_c <= local_4)) && ((local_c < local_4 || (local_10 < local_8)))) {
          FUN_005bf7c0(param_2,iVar5,iVar4,param_3);
          local_18 = 1;
          if (param_4 != (int *)0x0) {
            if (iVar5 == *param_4) {
              *param_4 = iVar4;
            }
            else if (iVar4 == *param_4) {
              *param_4 = iVar5;
            }
          }
        }
      }
      iVar5 = iVar1;
    } while (iVar1 < iVar2 + -1);
  }
  FUN_005b84d0(*(undefined4 *)(param_1 + 8),1);
  return local_18;
}


