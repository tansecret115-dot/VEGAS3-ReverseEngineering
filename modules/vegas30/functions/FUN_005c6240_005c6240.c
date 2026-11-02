/* Module: vegas30.exe
   Function: FUN_005c6240
   Address: 005c6240
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005c6240(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_114;
  CHAR local_104 [259];
  undefined1 local_1;
  
  iVar6 = 0;
  FUN_005b83b0(param_1,1);
  FUN_005bad20(param_1);
  iVar1 = **(int **)(param_1 + 0x1dc);
  local_114 = 0;
  if (0 < iVar1) {
    do {
      iVar5 = 0;
      iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x1dc) + 8) + local_114 * 4);
      iVar3 = **(int **)(iVar2 + 0x24);
      if (0 < iVar3) {
        do {
          iVar6 = *(int *)(*(int *)(*(int *)(iVar2 + 0x24) + 8) + iVar5 * 4);
          iVar4 = *(int *)(iVar6 + 0x50);
          if ((iVar4 == 0) || (iVar4 = *(int *)(iVar4 + 0x18), iVar4 == 0)) {
            local_104[0] = '\0';
          }
          else {
            lstrcpynA(local_104,(LPCSTR)(iVar4 + 0x170),0x104);
            local_1 = 0;
          }
          iVar6 = FUN_005d0100(param_1,iVar6,param_2);
          if (iVar6 < 0) goto LAB_005c6320;
          if (iVar6 != 0) {
            SfErrorHandler_DetailsAddString(iVar6,"%s could not be copied",local_104);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar3);
      }
      local_114 = local_114 + 1;
    } while (local_114 < iVar1);
  }
LAB_005c6320:
  FUN_005ebe40();
  FUN_005b84d0(param_1,1);
  return iVar6;
}


