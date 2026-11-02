/* Module: vegas30.exe
   Function: FUN_00546860
   Address: 00546860
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00546860(int param_1)

{
  HANDLE hHandle;
  int iVar1;
  int *piVar2;
  int local_48 [5];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  HANDLE local_28;
  undefined4 local_24;
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_0061aad8;
  puStack_10 = &DAT_0060ac70;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffa8;
  local_24 = 0;
  local_8 = 0;
  ExceptionList = &local_14;
  CoInitialize((LPVOID)0x0);
  piVar2 = local_48;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  local_48[0] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  hHandle = *(HANDLE *)(param_1 + 4);
  local_28 = hHandle;
  do {
    if (local_48[0] == 0) {
      WaitForSingleObject(hHandle,0xffffffff);
    }
    FUN_005447b0(local_48);
    switch(local_48[0]) {
    case 1:
    case 7:
      *(int *)(param_1 + 0x14) = local_48[0];
      FUN_005449d0();
      break;
    case 2:
      *(int *)(param_1 + 0x14) = local_48[0];
      FUN_00544d30(local_48[2],local_48[3],local_48[4],local_34,local_30,local_2c);
      break;
    case 3:
    case 8:
      FUN_00546820(local_48[2],local_48[3]);
      break;
    case 4:
      if (DAT_00649428 != 0) {
        Sleep(DAT_00649428);
      }
      FUN_00546820(local_48[2],local_48[3]);
      FUN_005463e0(local_48[2],local_48[3],0);
      break;
    case 5:
    case 9:
      *(int *)(param_1 + 0x14) = local_48[0];
      goto LAB_0054698d;
    case 6:
    case 10:
      *(int *)(param_1 + 0x14) = local_48[0];
      FUN_00546850();
      break;
    case 0xb:
      iVar1 = *(int *)(param_1 + 0x14);
      *(undefined4 *)(param_1 + 0x14) = 0xb;
      if ((iVar1 == 7) || (iVar1 == 1)) {
        *(int *)(param_1 + 0x18) = iVar1;
      }
      else {
        *(undefined4 *)(param_1 + 0x18) = 0;
      }
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0;
LAB_0054698d:
      FUN_00546840();
    }
    if (local_48[0] == 0xd) {
      CoUninitialize();
      ExceptionList = local_14;
      return local_24;
    }
  } while( true );
}


