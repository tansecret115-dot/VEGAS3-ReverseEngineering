/* Module: vegas30.exe
   Function: FUN_005e9a20
   Address: 005e9a20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005e9a20(undefined4 param_1,undefined4 param_2,int *param_3,uint param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar3 = param_3;
  iVar5 = 0;
  *param_5 = 0;
  iVar1 = *param_3;
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(param_3[2] + iVar4 * 4);
      iVar4 = iVar4 + 1;
      *(uint *)(iVar2 + 0x34) = *(uint *)(iVar2 + 0x34) | 8;
    } while (iVar4 < iVar1);
  }
  if (param_4 != 0) {
    uVar6 = 0;
    if (param_4 != 0) {
      do {
        iVar5 = FUN_005e99f0(param_1,param_2,piVar3,uVar6,&param_3);
        if (iVar5 < 0) {
          return iVar5;
        }
        uVar6 = uVar6 + 1;
        *param_5 = *param_5 + (int)param_3;
      } while (uVar6 < param_4);
      if (iVar5 < 0) {
        return iVar5;
      }
    }
    iVar1 = *piVar3;
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      iVar4 = *(int *)(piVar3[2] + iVar1 * 4);
      if ((*(uint *)(iVar4 + 0x34) & 8) != 0) {
        *(uint *)(iVar4 + 0x34) = *(uint *)(iVar4 + 0x34) & 0xfffffff7;
        FUN_00540ea0(param_2,iVar4,0);
      }
    }
  }
  return iVar5;
}


