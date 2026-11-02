/* Module: vidcap30.exe
   Function: FUN_00520f60
   Address: 00520f60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00520f60(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  HRESULT HVar3;
  undefined *puVar4;
  undefined4 local_14;
  IID local_10;
  
  iVar2 = FUN_00521d20(param_1);
  *(int *)(param_1 + 0x20) = iVar2;
  local_10.Data1 = 0x8856f961;
  local_10.Data2 = 0x340a;
  local_10.Data3 = 0x11d0;
  local_10.Data4[0] = 0xa9;
  local_10.Data4[1] = 'k';
  local_10.Data4[2] = '\0';
  local_10.Data4[3] = 0xc0;
  local_10.Data4[4] = 'O';
  local_10.Data4[5] = 0xd7;
  local_10.Data4[6] = '\x05';
  local_10.Data4[7] = 0xa2;
  HVar3 = OleCreate(&local_10,(IID *)&DAT_005a5bb8,1,(LPFORMATETC)0x0,
                    (LPOLECLIENTSITE)(iVar2 + 0x4c),*(LPSTORAGE *)(iVar2 + 0x28),
                    (LPVOID *)(iVar2 + 8));
  if (HVar3 != 0) {
    (**(code **)(**(int **)(param_1 + 0x20) + 8))(*(int **)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
    (**(code **)(**(int **)(param_1 + 4) + 0x28))(*(int **)(param_1 + 4));
    return;
  }
  FUN_00522500(1);
  local_14 = 0;
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x20) + 8);
  puVar4 = &DAT_005a5ba8;
  (**(code **)*puVar1)(puVar1,&DAT_005a5ba8,&local_14);
  if (puVar4 != (undefined *)0x0) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x24) + 0xc) + 0x20))
              (*(int *)(param_1 + 0x24) + 0xc,puVar4,&PTR_DAT_0059bbcc);
  }
  return;
}


