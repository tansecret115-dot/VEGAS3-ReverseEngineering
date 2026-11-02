/* Module: vegas30.exe
   Function: FUN_0047da70
   Address: 0047da70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0047da70(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar6 = 0;
  if ((*(int **)(param_1 + 0x18) != (int *)0x0) && (param_2 != 0 || param_3 != 0)) {
    if (param_4 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *param_4;
    }
    if ((iVar4 + -1 < 0) || (puVar5 = (undefined4 *)param_4[2], puVar5 == (undefined4 *)0x0)) {
      local_10 = 0;
      local_c = 0;
      local_8 = 0xffffffff;
      local_4 = 0x7fffffff;
      puVar5 = &local_10;
      iVar4 = 1;
    }
    iVar1 = **(int **)(param_1 + 0x18);
    if (0 < iVar1) {
      do {
        piVar2 = *(int **)(param_1 + 0x18);
        if (piVar2 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *piVar2;
        }
        if ((iVar6 < 0) || (iVar3 + -1 < iVar6)) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(piVar2[2] + iVar6 * 4);
        }
        if ((iVar3 != 0) && ((param_5 < 0 || (param_5 == *(int *)(iVar3 + 0x10))))) {
          if (DAT_00647790 == 0) {
            FUN_0047cf70(iVar3,param_2,param_3,puVar5,iVar4);
          }
          else {
            FUN_0047d3e0(iVar3,iVar3,param_2,param_3,puVar5,iVar4);
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar1);
    }
    return 0;
  }
  return 0;
}


