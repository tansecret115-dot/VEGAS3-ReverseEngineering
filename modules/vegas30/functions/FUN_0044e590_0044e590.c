/* Module: vegas30.exe
   Function: FUN_0044e590
   Address: 0044e590
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0044e590(undefined4 *param_1,int param_2,int param_3)

{
  SHORT SVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  tagRECT local_3c;
  undefined4 local_2c [7];
  undefined1 local_10 [16];
  
  if (DAT_0064762c == 0) {
    return false;
  }
  uVar2 = FUN_00446540(*param_1);
  iVar4 = *(int *)(DAT_0064762c + 0xa0);
  if (iVar4 == 0) {
    puVar5 = local_2c;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    local_2c[0] = 0x2c;
    local_2c[2] = 1;
    GetWindowRect(DAT_00647624,&local_3c);
    FUN_00468fb0(local_10,&local_3c,0x226,0x1c2);
    iVar4 = FUN_00411360(1,0,&PTR_FUN_0063dec0,&DAT_0060f98c,local_2c,400,0,0x3f0,0);
    if (iVar4 == 0) goto LAB_0044e6f0;
    if ((param_3 != 0) && (DAT_0064aef4 == 0)) {
      FUN_00468f50(*(undefined4 *)(iVar4 + 8),uVar2,param_3);
    }
    FUN_00446020(iVar4,param_1);
  }
  else {
    if ((param_3 != 0) && (DAT_0064aef4 == 0)) {
      FUN_00468f50(*(undefined4 *)(iVar4 + 8),uVar2,param_3);
    }
    FUN_00445080(iVar4,0);
    FUN_00446020(iVar4,param_1);
    FUN_0040d4a0(iVar4);
    iVar4 = *(int *)(DAT_0064762c + 0xa0);
  }
  if (iVar4 != 0) {
    if ((param_2 == 0) && (*(int *)(iVar4 + 0xb4) != 0)) {
      SVar1 = GetAsyncKeyState(0x10);
      if (-1 < SVar1) goto LAB_0044e6f0;
    }
    iVar3 = FUN_00445380(iVar4,0x23b,0,0);
    if (-1 < iVar3) {
      FUN_00445590(iVar4);
      iVar3 = FUN_00446f20(iVar4);
      FUN_004457c0(iVar4,iVar3 == 0);
    }
  }
LAB_0044e6f0:
  return iVar4 != 0;
}


