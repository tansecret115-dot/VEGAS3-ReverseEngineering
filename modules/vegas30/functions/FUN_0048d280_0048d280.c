/* Module: vegas30.exe
   Function: FUN_0048d280
   Address: 0048d280
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0048d280(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = param_2;
  local_20 = (int *)0x0;
  local_1c = 0;
  iVar3 = _SfList_CreateExZ_32(&local_20,4,*(undefined4 *)(param_2 + 8),0x10,2,0,0,0);
  if ((-1 < iVar3) &&
     (iVar3 = _SfList_CreateExZ_32(&local_1c,4,*(undefined4 *)(iVar1 + 8),0x10,0,0,0,0), -1 < iVar3)
     ) {
    iVar4 = *(int *)(iVar1 + 0x2c);
    if (iVar4 < iVar4 + *(int *)(iVar1 + 8)) {
      do {
        param_2 = *(int *)(*(int *)(*(int *)(param_1 + 0x134) + 8) + iVar4 * 4);
        iVar3 = _SfList_InsertList_16(local_1c,0xffffffff,&param_2,1);
        if (iVar3 < 0) goto LAB_0048d405;
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(iVar1 + 8) + *(int *)(iVar1 + 0x2c));
    }
    iVar3 = FUN_00469d70(*(undefined4 *)(param_1 + 0x130),local_1c,local_20,0,0,0xffffffff,
                         0x7fffffff,0,0);
    if (-1 < iVar3) {
      FUN_004694a0(local_20,&local_10,&local_18,&local_8,&local_14,0,0);
      piVar2 = param_3;
      *(undefined4 *)(iVar1 + 4) = 0x31;
      *(undefined4 *)(iVar1 + 0x10) = local_14;
      *(undefined4 *)(iVar1 + 0xc) = local_18;
      *(undefined4 *)(iVar1 + 0x18) = local_10;
      *(undefined4 *)(iVar1 + 0x20) = local_8;
      *(undefined4 *)(iVar1 + 0x1c) = local_c;
      *(undefined4 *)(iVar1 + 0x24) = local_4;
      iVar3 = (**(code **)(*param_3 + 0x10))(param_3,iVar1,0x40,0);
      if (-1 < iVar3) {
        iVar1 = *local_20;
        do {
          iVar1 = iVar1 + -1;
          if (iVar1 < 0) {
            _SfList_Destroy_4(local_1c);
            FUN_004693b0(local_20);
            _SfList_Destroy_4(local_20);
            return 0;
          }
          iVar3 = FUN_00469780(piVar2);
        } while (-1 < iVar3);
      }
    }
  }
LAB_0048d405:
  if (local_20 != (int *)0x0) {
    FUN_004693b0(local_20);
    _SfList_Destroy_4(local_20);
  }
  if (local_1c != 0) {
    _SfList_Destroy_4(local_1c);
  }
  return iVar3;
}


