/* Module: vidcap30.exe
   Function: FUN_00537b00
   Address: 00537b00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00537b00(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int local_374;
  int local_370;
  DWORD local_36c;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360 [13];
  int local_32c;
  int local_328;
  undefined1 local_30c;
  undefined1 local_208;
  undefined1 local_104;
  
  puVar4 = local_360;
  for (iVar2 = 0xd8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_364 = *(undefined4 *)(param_1 + 0x1c);
  local_30c = 0;
  local_208 = 0;
  local_104 = 0;
  local_368 = *(undefined4 *)(param_1 + 0x18);
  iVar2 = FUN_00537440(local_360);
  if (iVar2 == 0) {
    local_370 = 0;
    do {
      piVar1 = *(int **)(*(int *)(param_2 + 8) + local_370);
      if (piVar1 == (int *)0x0) break;
      if (*piVar1 == 0) {
        uVar5 = (local_32c + 0x2a + local_328 * 2) * 2;
        iVar2 = FUN_00530220(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x670),
                             *(undefined4 *)(param_1 + 0x674),uVar5,0,*(undefined4 *)(param_1 + 0xc)
                             ,*(uint *)(param_1 + 0x890) + *(uint *)(param_1 + 0x18),
                             *(int *)(param_1 + 0x894) + *(int *)(param_1 + 0x1c) +
                             (uint)CARRY4(*(uint *)(param_1 + 0x890),*(uint *)(param_1 + 0x18)));
        if (iVar2 < 0) {
          return;
        }
        uVar3 = *(uint *)(param_1 + 0x890) + *(uint *)(param_1 + 0x18);
        local_374 = *(int *)(param_1 + 0x894) + *(int *)(param_1 + 0x1c) +
                    (uint)CARRY4(*(uint *)(param_1 + 0x890),*(uint *)(param_1 + 0x18)) +
                    (uint)(0xffffffb3 < uVar3);
        local_36c = 0;
        SetFilePointer(*(HANDLE *)(param_1 + 0xc),uVar3 + 0x4c,&local_374,0);
        WriteFile(*(HANDLE *)(param_1 + 0xc),piVar1 + 2,8,&local_36c,(LPOVERLAPPED)0x0);
        uVar3 = *(uint *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x18) = uVar3 + uVar5;
        iVar2 = *(int *)(param_1 + 0x1c) + (uint)CARRY4(uVar3,uVar5);
        *(int *)(param_1 + 0x1c) = iVar2;
        local_374 = *(int *)(param_1 + 0x894) + iVar2 +
                    (uint)CARRY4(*(uint *)(param_1 + 0x890),*(uint *)(param_1 + 0x18));
        SetFilePointer(*(HANDLE *)(param_1 + 0xc),
                       *(uint *)(param_1 + 0x890) + *(uint *)(param_1 + 0x18),&local_374,0);
      }
      iVar2 = FUN_00537500(local_360);
      local_370 = local_370 + 4;
    } while (iVar2 == 0);
  }
  if (-1 < iVar2) {
    FUN_00532ff0(local_368,local_364);
  }
  return;
}


