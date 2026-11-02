/* Module: vegas30.exe
   Function: FUN_0058f580
   Address: 0058f580
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0058f580(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  DWORD local_c;
  int local_8;
  LONG local_4;
  
  iVar2 = param_1;
  *(undefined4 *)(param_1 + 0x8bc) = 1;
  CoInitialize((LPVOID)0x0);
  local_8 = 0;
  do {
    *(undefined4 *)(iVar2 + 0x8bc) = 3;
    iVar3 = _SfQueueRemove_8(iVar2 + 0x890,0xffffffff);
    *(undefined4 *)(iVar2 + 0x8bc) = 4;
    if (*(int *)(iVar2 + 0x8c0) != 0) {
      while (iVar3 != 0) {
        iVar1 = *(int *)(iVar3 + 0xc);
        if (iVar1 == -1) {
          local_8 = 1;
        }
        else if (iVar1 != 0) {
          *(undefined4 *)(iVar1 + 0x48) = 0x8004e00c;
          *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + -1;
          *(undefined4 *)(iVar3 + 0x18) = 1;
          SetEvent(*(HANDLE *)(iVar3 + 8));
        }
        iVar3 = _SfQueueRemove_8(iVar2 + 0x890,0);
      }
      SetEvent(*(HANDLE *)(iVar2 + 0x8c4));
      iVar3 = 0;
    }
    if (iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + 0xc);
      if (iVar1 == -1) break;
      if (iVar1 != 0) {
        *(undefined4 *)(iVar2 + 0x8bc) = 5;
        if (*(HANDLE *)(iVar1 + 0xc0) == (HANDLE)0x0) {
          iVar5 = (**(code **)(**(int **)(iVar3 + 0x10) + 0x3c))
                            (*(int **)(iVar3 + 0x10),*(undefined4 *)(iVar1 + 0x28),
                             *(undefined4 *)(iVar1 + 0x2c),*(undefined4 *)(iVar1 + 0x20),
                             *(undefined4 *)(iVar1 + 0x34),&param_1);
          *(int *)(iVar1 + 0x48) = iVar5;
          if (((iVar5 == 1) || (iVar5 == -0x7ff5ffda)) &&
             (*(undefined4 *)(iVar1 + 0x48) = 0, param_1 == 0)) {
            uVar6 = (uint)*(ushort *)(*(int *)(*(int *)(iVar1 + 0x18) + 0x2c) + 0xc) *
                    *(int *)(iVar1 + 0x34);
            puVar8 = *(undefined4 **)(iVar1 + 0x20);
            for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *puVar8 = 0;
              puVar8 = puVar8 + 1;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined1 *)puVar8 = 0;
              puVar8 = (undefined4 *)((int)puVar8 + 1);
            }
            param_1 = *(int *)(iVar1 + 0x34);
          }
          *(int *)(iVar1 + 0x34) = param_1;
          *(uint *)(iVar1 + 0x30) =
               (uint)*(ushort *)(*(int *)(*(int *)(iVar1 + 0x18) + 0x2c) + 0xc) * param_1;
        }
        else {
          local_4 = *(LONG *)(iVar1 + 0xe4);
          local_c = *(int *)(iVar1 + 0x30) + 0x7ffU & 0xfffff800;
          SetFilePointer(*(HANDLE *)(iVar1 + 0xc0),*(LONG *)(iVar1 + 0xe0),&local_4,0);
          BVar4 = ReadFile(*(HANDLE *)(iVar1 + 0xc0),*(LPVOID *)(iVar1 + 8),local_c,&local_c,
                           (LPOVERLAPPED)0x0);
          if (BVar4 == 0) {
            GetLastError();
            *(undefined4 *)(iVar1 + 0x48) = 0x8004e008;
          }
          else {
            *(undefined4 *)(iVar1 + 0x48) = 0;
          }
        }
        *(undefined4 *)(iVar3 + 0x18) = 1;
        SetEvent(*(HANDLE *)(iVar3 + 8));
      }
    }
  } while (local_8 == 0);
  CoUninitialize();
  *(undefined4 *)(iVar2 + 0x8bc) = 2;
  return 0;
}


