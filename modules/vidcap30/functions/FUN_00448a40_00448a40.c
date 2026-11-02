/* Module: vidcap30.exe
   Function: FUN_00448a40
   Address: 00448a40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00448a40(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int local_720;
  int local_71c;
  undefined4 local_718;
  int local_714;
  int *local_710;
  int *local_70c;
  undefined1 local_300 [768];
  
  local_718 = 0;
  local_720 = 0;
  local_714 = DAT_005bb838;
  _SfList_CreateExZ_32(&local_720,4,0x10,0x10,0x40000002,0,0,0);
  if (local_720 != 0) {
    SendMessageA(*(HWND *)(param_1 + 0x88),0x602,0,(LPARAM)&local_710);
    SendMessageA(*(HWND *)(param_1 + 0x88),0x606,0,(LPARAM)local_300);
    local_71c = 0;
    iVar2 = FUN_004487f0(*(undefined4 *)(param_1 + 0x88),&local_71c);
    uVar3 = 0;
    if (local_71c != 0) {
      if (0 < iVar2) {
        iVar2 = FUN_0044d6e0(*(undefined4 *)(**(int **)(local_71c + 8) + 0x20c));
        puVar4 = &DAT_005b5bd8;
        do {
          _SfList_AllocAndInsertItem_20(local_720,puVar4,0x10,0xffffffff,0);
          puVar4 = puVar4 + 4;
        } while (puVar4 < &DAT_005b5d28);
        cVar1 = FUN_00464340(*(undefined4 *)(param_1 + 8),local_720,&DAT_005bc3dc + iVar2,
                             (&PTR_DAT_005b5bc0)[iVar2],(&DAT_005b5d28)[iVar2],local_300,&local_710,
                             iVar2);
        if (cVar1 != '\0') {
          SendMessageA(*(HWND *)(param_1 + 0x88),0x607,0,(LPARAM)local_300);
          (**(code **)(*local_70c + 4))(local_70c);
          SendMessageA(*(HWND *)(param_1 + 0x88),0x603,0,(LPARAM)&local_714);
          (**(code **)(*local_710 + 8))(local_710);
          local_718 = 1;
          **(uint **)(local_714 + 4) = **(uint **)(local_714 + 4) | 0x200;
        }
      }
      _SfList_Destroy_4(local_71c);
      uVar3 = local_718;
    }
    _SfList_Destroy_4(local_720);
    return uVar3;
  }
  return 0;
}


