/* Module: mp3rw.dll
   Function: FUN_00438350
   Address: 00438350
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_00438350(void *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  DWORD local_478;
  int local_474;
  uint local_470;
  uint local_46c;
  int local_468;
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
  if (*(int *)((int)param_1 + 0x24) == 2) {
    if (((*(int *)((int)param_1 + 0x40) != 0) && (*(int **)((int)param_1 + 0x10) != (int *)0x0)) &&
       (0 < **(int **)((int)param_1 + 0x10))) {
      local_470 = FUN_00438030(param_1);
    }
  }
  else if (*(int *)((int)param_1 + 0x24) != 0) {
    return 0x80004005;
  }
  local_468 = *(int *)((int)param_1 + 0x1c);
  local_46c = *(uint *)((int)param_1 + 0x18);
  piVar4 = *(int **)((int)param_1 + 0x10);
  iVar2 = 1;
  if (piVar4 != (int *)0x0) {
    if (0 < *piVar4) {
      *(undefined4 *)((int)param_1 + 0x8a8) = 1;
      local_474 = 0;
      if (0 < *piVar4) {
        do {
          iVar1 = *(int *)(piVar4[2] + local_474 * 4);
          puVar5 = local_464;
          for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
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
          iVar2 = WriteFile(*(HANDLE *)((int)param_1 + 0xc),local_464,0x54,&local_478,
                            (LPOVERLAPPED)0x0);
          uVar3 = *(uint *)((int)param_1 + 0x18);
          *(uint *)((int)param_1 + 0x18) = uVar3 + local_478;
          *(uint *)((int)param_1 + 0x1c) =
               *(int *)((int)param_1 + 0x1c) + (uint)CARRY4(uVar3,local_478);
          if (iVar2 == 0) {
            return 0x8004e009;
          }
          if (0 < *(int *)(iVar1 + 0x38)) {
            MultiByteToWideChar(0,1,(LPCSTR)(iVar1 + 0x48),-1,local_410,0x104);
            local_20a = 0;
            iVar2 = WriteFile(*(HANDLE *)((int)param_1 + 0xc),local_410,*(int *)(iVar1 + 0x38) << 1,
                              &local_478,(LPOVERLAPPED)0x0);
            if (iVar2 == 0) {
              return 0x8004e009;
            }
            uVar3 = *(uint *)((int)param_1 + 0x18);
            *(uint *)((int)param_1 + 0x18) = uVar3 + local_478;
            *(uint *)((int)param_1 + 0x1c) =
                 *(int *)((int)param_1 + 0x1c) + (uint)CARRY4(uVar3,local_478);
          }
          if (0 < *(int *)(iVar1 + 0x3c)) {
            MultiByteToWideChar(0,1,(LPCSTR)(iVar1 + 0x14c),-1,local_208,0x104);
            local_2 = 0;
            iVar2 = WriteFile(*(HANDLE *)((int)param_1 + 0xc),local_208,*(int *)(iVar1 + 0x3c) << 1,
                              &local_478,(LPOVERLAPPED)0x0);
            if (iVar2 != 0) {
              uVar3 = *(uint *)((int)param_1 + 0x18);
              *(uint *)((int)param_1 + 0x18) = uVar3 + local_478;
              *(uint *)((int)param_1 + 0x1c) =
                   *(int *)((int)param_1 + 0x1c) + (uint)CARRY4(uVar3,local_478);
            }
          }
          piVar4 = *(int **)((int)param_1 + 0x10);
          local_474 = local_474 + 1;
        } while (local_474 < *piVar4);
      }
    }
    if (((-1 < (int)local_470) && (iVar2 != 0)) && (*(int *)((int)param_1 + 0x8a8) != 0)) {
      uVar3 = FUN_00438600(param_1,local_46c,local_468);
      return uVar3;
    }
    return local_470;
  }
  FUN_0043c480(param_1,0xaaaaaaa3,(uchar *)"AddCentralDirectory",(uchar *)0x0);
  return 0x8007000e;
}


