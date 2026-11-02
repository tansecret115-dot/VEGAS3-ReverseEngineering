/* Module: vegas30k.dll
   Function: FUN_0106c4d0
   Address: 0106c4d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0106c4d0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  DWORD local_478;
  int local_474;
  int local_470;
  undefined4 local_46c;
  undefined4 local_468;
  undefined4 local_464 [4];
  undefined4 local_454;
  undefined4 local_450;
  undefined4 local_44c;
  undefined4 local_448;
  undefined4 local_444;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined4 local_434;
  undefined4 local_430;
  undefined4 local_42c;
  undefined4 local_420;
  undefined4 local_418;
  undefined4 local_414;
  WCHAR local_410 [259];
  undefined2 local_20a;
  WCHAR local_208 [259];
  undefined2 local_2;
  
  local_470 = 0;
  if (*(int *)(param_1 + 0x24) == 2) {
    if (((*(int *)(param_1 + 0x40) != 0) && (*(int **)(param_1 + 0x10) != (int *)0x0)) &&
       (0 < **(int **)(param_1 + 0x10))) {
      local_470 = FUN_0106c1b0();
    }
  }
  else if (*(int *)(param_1 + 0x24) != 0) {
    return -0x7fffbffb;
  }
  local_468 = *(undefined4 *)(param_1 + 0x1c);
  local_46c = *(undefined4 *)(param_1 + 0x18);
  piVar4 = *(int **)(param_1 + 0x10);
  iVar3 = 1;
  if (piVar4 != (int *)0x0) {
    if (0 < *piVar4) {
      *(undefined4 *)(param_1 + 0x8a8) = 1;
      local_474 = 0;
      if (0 < *piVar4) {
        do {
          iVar1 = *(int *)(piVar4[2] + local_474 * 4);
          puVar5 = local_464;
          for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          local_464[0] = 0xb014d55;
          local_464[1] = *(undefined4 *)(iVar1 + 4);
          local_464[2] = *(undefined4 *)(iVar1 + 8);
          local_464[3] = *(undefined4 *)(iVar1 + 0xc);
          local_454 = *(undefined4 *)(iVar1 + 0x10);
          local_450 = *(undefined4 *)(iVar1 + 0x14);
          local_44c = *(undefined4 *)(iVar1 + 0x18);
          local_448 = *(undefined4 *)(iVar1 + 0x1c);
          local_444 = *(undefined4 *)(iVar1 + 0x20);
          local_440 = *(undefined4 *)(iVar1 + 0x24);
          local_43c = *(undefined4 *)(iVar1 + 0x28);
          local_438 = *(undefined4 *)(iVar1 + 0x2c);
          local_434 = *(undefined4 *)(iVar1 + 0x30);
          local_430 = *(undefined4 *)(iVar1 + 0x38);
          local_42c = *(undefined4 *)(iVar1 + 0x3c);
          local_418 = *(undefined4 *)(iVar1 + 0x40);
          local_414 = *(undefined4 *)(iVar1 + 0x44);
          local_420 = *(undefined4 *)(iVar1 + 0x34);
          local_478 = 0;
          iVar3 = WriteFile(*(HANDLE *)(param_1 + 0xc),local_464,0x54,&local_478,(LPOVERLAPPED)0x0);
          uVar2 = *(uint *)(param_1 + 0x18);
          *(uint *)(param_1 + 0x18) = uVar2 + local_478;
          *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + (uint)CARRY4(uVar2,local_478);
          if (iVar3 == 0) {
            return -0x7ffb1ff7;
          }
          if (0 < *(int *)(iVar1 + 0x38)) {
            MultiByteToWideChar(0,1,(LPCSTR)(iVar1 + 0x48),-1,local_410,0x104);
            local_20a = 0;
            iVar3 = WriteFile(*(HANDLE *)(param_1 + 0xc),local_410,*(int *)(iVar1 + 0x38) << 1,
                              &local_478,(LPOVERLAPPED)0x0);
            if (iVar3 == 0) {
              return -0x7ffb1ff7;
            }
            uVar2 = *(uint *)(param_1 + 0x18);
            *(uint *)(param_1 + 0x18) = uVar2 + local_478;
            *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + (uint)CARRY4(uVar2,local_478);
          }
          if (0 < *(int *)(iVar1 + 0x3c)) {
            MultiByteToWideChar(0,1,(LPCSTR)(iVar1 + 0x14c),-1,local_208,0x104);
            local_2 = 0;
            iVar3 = WriteFile(*(HANDLE *)(param_1 + 0xc),local_208,*(int *)(iVar1 + 0x3c) << 1,
                              &local_478,(LPOVERLAPPED)0x0);
            if (iVar3 != 0) {
              uVar2 = *(uint *)(param_1 + 0x18);
              *(uint *)(param_1 + 0x18) = uVar2 + local_478;
              *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + (uint)CARRY4(uVar2,local_478);
            }
          }
          piVar4 = *(int **)(param_1 + 0x10);
          local_474 = local_474 + 1;
        } while (local_474 < *piVar4);
      }
    }
    if (((-1 < local_470) && (iVar3 != 0)) && (*(int *)(param_1 + 0x8a8) != 0)) {
      iVar3 = FUN_0106c780(local_46c,local_468);
      return iVar3;
    }
    return local_470;
  }
  FUN_01070600(0xaaaaaaa3,"AddCentralDirectory",0);
  return -0x7ff8fff2;
}


