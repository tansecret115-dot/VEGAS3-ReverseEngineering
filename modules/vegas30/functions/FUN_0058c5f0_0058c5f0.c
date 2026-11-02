/* Module: vegas30.exe
   Function: FUN_0058c5f0
   Address: 0058c5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0058c5f0(int param_1,uint param_2,int param_3,uint param_4,int param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  uchar *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int local_10;
  int local_8;
  
  if ((param_5 < 1) && (param_5 < 0)) {
    iVar2 = -1;
    local_8 = -1;
  }
  else {
    local_8 = param_4 - param_2;
    iVar2 = (param_5 - param_3) - (uint)(param_4 < param_2);
  }
  FUN_005b83b0(param_1,1);
  param_4 = 0;
  iVar4 = **(int **)(param_1 + 0x1dc);
  local_10 = 0;
  iVar7 = 0;
  if (0 < iVar4) {
    do {
      iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 0x1dc) + 8) + local_10 * 4);
      if ((*(int *)(iVar7 + 4) == 2) && ((*(byte *)(iVar7 + 0x10) & 0x80) != 0)) {
        *(uint *)(iVar7 + 0x3a8) = param_2;
        *(int *)(iVar7 + 0x3b0) = local_8;
        *(int *)(iVar7 + 0x248) = iVar7;
        *(int *)(iVar7 + 0x3ac) = param_3;
        *(int *)(iVar7 + 0x3b4) = iVar2;
        if (param_6 != 0) {
          iVar6 = *(int *)(DAT_0065a06c + 0xc4) + *(int *)(DAT_0065a06c + 0xb4) +
                  (uint)CARRY4(*(uint *)(DAT_0065a06c + 0xc0),*(uint *)(DAT_0065a06c + 0xb0));
          if ((iVar6 <= param_3) &&
             ((iVar6 < param_3 ||
              (*(uint *)(DAT_0065a06c + 0xc0) + *(uint *)(DAT_0065a06c + 0xb0) < param_2)))) {
            param_6 = 0;
          }
        }
        *(int *)(iVar7 + 0x3b8) = param_6;
        puVar3 = (uchar *)FUN_005c6890(iVar7);
        puVar3 = _mbsstr((uchar *)(iVar7 + 0x250),puVar3);
        if (puVar3 == (uchar *)0x0) {
          FUN_0058bbd0(iVar7);
          FUN_0058a670((int *)(iVar7 + 0x248));
          FUN_0058b9e0(iVar7);
        }
        if (*(int *)(iVar7 + 0x36c) == 0) {
          *(undefined4 *)(DAT_0065a068 + 0x748) = 1;
        }
        else {
          param_4 = param_4 + 1;
        }
      }
      local_10 = local_10 + 1;
      iVar7 = param_4;
    } while (local_10 < iVar4);
  }
  DAT_0064b56c = 0;
  if (DAT_0064a510 == 1) {
    if (iVar7 == 1) {
LAB_0058c76c:
      DAT_0064b56c = 1;
    }
  }
  else if (DAT_0064a510 == 2) goto LAB_0058c76c;
  if (param_6 != 0) {
    uVar1 = *(uint *)(DAT_0065a06c + 0xb0);
    iVar4 = *(int *)(DAT_0065a06c + 0xb4) + (uint)(0xfffffffe < uVar1);
    if ((iVar4 <= param_3) && ((iVar4 < param_3 || (uVar1 + 1 <= param_2)))) {
      iVar6 = *(uint *)(DAT_0065a06c + 0xc0) + uVar1;
      iVar4 = (*(int *)(DAT_0065a06c + 0xc4) + *(int *)(DAT_0065a06c + 0xb4) +
              (uint)CARRY4(*(uint *)(DAT_0065a06c + 0xc0),uVar1)) - (uint)(iVar6 == 0);
      if ((param_3 <= iVar4) && ((param_3 < iVar4 || (param_2 < iVar6 - 1U)))) {
        uVar5 = 1;
        goto LAB_0058c7ca;
      }
    }
  }
  uVar5 = 0;
LAB_0058c7ca:
  _DAT_0064b568 = iVar7;
  FUN_0058bc00(param_1,param_2,param_3,local_8,iVar2,uVar5);
  FUN_005b84d0(param_1,1);
  return 0;
}


