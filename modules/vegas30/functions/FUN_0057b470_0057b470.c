/* Module: vegas30.exe
   Function: FUN_0057b470
   Address: 0057b470
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_0057b470(int *param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,LONG *param_7)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  tagRECT local_14;
  int local_4;
  
  piVar1 = param_3;
  *param_3 = 0;
  iVar2 = _SfList_IsListFast_4(param_1);
  if ((iVar2 == 0) &&
     (param_3 = param_1, iVar2 = _SfList_CreateExZ_32(&param_3,0x20,0xffffffff,0xffffffff,0xc,0,0,0)
     , iVar2 < 0)) {
    return iVar2;
  }
  local_20 = param_2;
  local_1c = *(undefined4 *)(param_2 + 0x164);
  local_18 = 0;
  local_4 = 0;
  SetRectEmpty(&local_14);
  iVar2 = _SfList_FindSortedItemRange_20(param_1,&local_20,0,0xffffffff,&LAB_0057b430);
  if (param_1 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *param_1;
  }
  if ((-1 < iVar2) && (iVar2 <= iVar4 + -1)) {
    iVar4 = *(int *)(param_1[1] * iVar2 + 0x1c + param_1[2]);
    iVar2 = param_1[1] * iVar2 + param_1[2];
    *(int *)(iVar2 + 8) = param_1[0x15];
    *piVar1 = iVar4;
    if (param_7 != (LONG *)0x0) {
      *param_7 = *(LONG *)(iVar2 + 0xc);
      param_7[1] = *(LONG *)(iVar2 + 0x10);
      param_7[2] = *(LONG *)(iVar2 + 0x14);
      param_7[3] = *(LONG *)(iVar2 + 0x18);
    }
    uVar3 = FUN_0057b350();
    _SfDibFree_8(uVar3,0);
    return 0;
  }
  if ((*(byte *)(param_2 + 0x134) & 0x20) != 0) {
    return -0x7fffbffb;
  }
  iVar2 = FUN_0057b350();
  *piVar1 = iVar2;
  if (iVar2 != 0) {
    uVar3 = FUN_0057b350();
    _SfDibFree_8(uVar3,0);
  }
  iVar4 = FUN_005c2b90(piVar1,param_4,param_5,param_6,&local_14);
  if (-1 < iVar4) {
    local_30 = 0x3f4ccccd;
    local_2c = 0x3f4ccccd;
    local_28 = 0x3f4ccccd;
    local_24 = 0x3f800000;
    local_40 = 0x3f19999a;
    local_3c = 0x3f19999a;
    local_38 = 0x3f19999a;
    local_34 = 0x3f800000;
    SfDibAlphaToCheckers
              ((tagBITMAPINFOHEADER *)*piVar1,(void *)0x0,&local_14,0,(tagBITMAPINFOHEADER *)0x0,
               (void *)0x0,0,8,8,(tSFDIBPIXEL *)&local_30,(tSFDIBPIXEL *)&local_40);
    local_18 = param_1[0x15];
    local_4 = *piVar1;
    uVar3 = _SfList_FindSortedInsertIndexRange_20(param_1,&local_20,0,0xffffffff,&LAB_0057b430);
    _SfList_InsertList_16(param_1,uVar3,&local_20,1);
    if (param_7 != (LONG *)0x0) {
      *param_7 = local_14.left;
      param_7[1] = local_14.top;
      param_7[2] = local_14.right;
      param_7[3] = local_14.bottom;
    }
    return 0;
  }
  _SfDibFree_8(iVar2,0);
  return iVar4;
}


