/* Module: vegas30.exe
   Function: FUN_0050b6c0
   Address: 0050b6c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0050b6c0(int param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,int param_7)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_10;
  int local_c;
  
  if (param_1 != 0) {
    local_c = 0;
    piVar2 = (int *)FUN_00522a00(0);
    if (piVar2 != (int *)0x0) {
      iVar3 = (param_7 - param_3) - (uint)(param_6 < param_2);
      do {
        if ((-0x80000000 <= param_5) && ((-0x80000000 < param_5 || (param_4 != 0)))) {
          FUN_0050c870(param_1,param_4 - param_2,(param_5 - param_3) - (uint)(param_4 < param_2),
                       local_c);
        }
        iVar4 = FUN_0050b670(piVar2,param_6 - param_2,iVar3);
        if ((iVar4 != 0) && ((param_7 < 0x7fffffff || (param_6 != 0xffffffff)))) {
          FUN_0050c870(param_1,param_6 - param_2,iVar3,local_c);
        }
        if (piVar2 == (int *)0x0) {
          local_10 = 0;
        }
        else {
          local_10 = *piVar2;
        }
        if ((param_2 != 0) || (param_3 != 0)) {
          iVar6 = -1;
          iVar7 = -1;
          iVar4 = local_10 + -1;
          if ((param_3 < 1) && (param_3 < 0)) {
            iVar4 = 0;
            iVar7 = 1;
            iVar6 = local_10;
          }
          for (; iVar4 != iVar6; iVar4 = iVar4 + iVar7) {
            uVar1 = *(uint *)(piVar2[1] * iVar4 + 4 + piVar2[2]);
            iVar5 = piVar2[1] * iVar4 + piVar2[2];
            FUN_0050b2e0(param_1,0,0,iVar5,piVar2,iVar4,uVar1 + param_2,
                         *(int *)(iVar5 + 8) + param_3 + (uint)CARRY4(uVar1,param_2),1,0,0);
          }
        }
        while (local_10 = local_10 + -1, local_10 != -1) {
          iVar4 = piVar2[1] * local_10 + piVar2[2];
          uVar1 = *(uint *)(iVar4 + 4);
          iVar4 = *(int *)(iVar4 + 8);
          if (((iVar4 < param_5) || ((iVar4 <= param_5 && (uVar1 < param_4)))) ||
             ((param_7 <= iVar4 && ((param_7 < iVar4 || (param_6 < uVar1)))))) {
            _SfList_DeleteList_16(piVar2,local_10,1,1);
          }
        }
        local_c = local_c + 1;
        piVar2 = (int *)FUN_00522a00(local_c);
      } while (piVar2 != (int *)0x0);
    }
    FUN_00453250(DAT_00647630,0);
    return 0;
  }
  return 0x80070057;
}


