/* Module: vegas30.exe
   Function: FUN_0058b830
   Address: 0058b830
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0058b830(int *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  iVar4 = param_1[1];
  if ((HANDLE)param_1[0x49] == (HANDLE)0x0) {
    return 0x4e001;
  }
  param_1[0x5d] = 0;
  param_1[1] = 0;
  CloseHandle((HANDLE)param_1[0x49]);
  param_1[0x49] = 0;
  if ((param_1[0x53] < 0) || ((param_1[0x53] < 1 && ((uint)param_1[0x52] < 0x201)))) {
    if (param_2 != 0) {
      iVar2 = *param_1;
      if (iVar4 == 0) {
        piVar5 = *(int **)(iVar2 + 0x24);
        if (piVar5 == (int *)0x0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *piVar5;
        }
        iVar6 = 0;
        if (0 < iVar7) {
          piVar5 = (int *)piVar5[2];
          do {
            iVar4 = *piVar5;
            if ((*(uint *)(iVar4 + 0x10) & 0x100000) != 0) {
              if (iVar4 != 0) goto LAB_0058b984;
              break;
            }
            iVar6 = iVar6 + 1;
            piVar5 = piVar5 + 1;
          } while (iVar6 < iVar7);
        }
      }
      else {
LAB_0058b984:
        *(uint *)(iVar4 + 0x10) = *(uint *)(iVar4 + 0x10) & 0xffcfffff;
        FUN_005c6b30(*(undefined4 *)(iVar2 + 8),iVar4,*(undefined4 *)(iVar4 + 0x50));
        iVar7 = FUN_005c68e0(iVar4);
        if (iVar7 != 0) {
          FUN_005c86c0(*(undefined4 *)(iVar2 + 8),iVar4,0);
        }
        if (*(int *)(iVar2 + 0x354) != 0) {
          puVar1 = (uint *)(*(int *)(iVar2 + 0x354) + 0x134);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
      }
    }
    FUN_0058a5c0(param_1,param_2);
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*param_1 + 0x40);
    if (iVar4 == 0) {
      local_1c = param_1[0x44];
      local_18 = param_1[0x45];
      local_14 = param_1[0x46];
      local_10 = param_1[0x47];
      local_c = (undefined2)param_1[0x48];
    }
    else if ((0 < iVar4) && (iVar4 < 4)) {
      local_18 = param_1[0x45];
      local_1c = CONCAT22(1,(short)param_1[0x44]);
      uVar3 = *(ushort *)((int)param_1 + 0x11e) >> 3;
      local_10 = CONCAT22(*(ushort *)((int)param_1 + 0x11e),uVar3);
      local_14 = (uint)uVar3 * local_18;
      local_c = 0;
    }
    iVar4 = FUN_0058b4c0(param_1,&local_1c);
    if (-1 < iVar4) {
      FUN_0058b640(param_1);
      return 0;
    }
  }
  return iVar4;
}


