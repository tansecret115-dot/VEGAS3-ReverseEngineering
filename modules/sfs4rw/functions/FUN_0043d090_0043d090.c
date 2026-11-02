/* Module: sfs4rw.dll
   Function: FUN_0043d090
   Address: 0043d090
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0043d090(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int local_374;
  int local_370;
  DWORD local_36c;
  uint local_368;
  int local_364;
  int local_360 [13];
  int local_32c;
  int local_328;
  undefined1 local_30c;
  undefined1 local_208;
  undefined1 local_104;
  
  piVar3 = local_360;
  for (iVar1 = 0xd8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  local_364 = *(int *)((int)this + 0x1c);
  local_30c = 0;
  local_208 = 0;
  local_104 = 0;
  local_368 = *(uint *)((int)this + 0x18);
  iVar1 = FUN_0043c9d0(this,local_360);
  if (iVar1 == 0) {
    local_370 = 0;
    do {
      piVar3 = *(int **)(*(int *)(param_1 + 8) + local_370);
      if (piVar3 == (int *)0x0) break;
      if (*piVar3 == 0) {
        uVar4 = (local_32c + 0x2a + local_328 * 2) * 2;
        iVar1 = FUN_004357b0(*(HANDLE *)((int)this + 8),*(LONG *)((int)this + 0x670),
                             *(LONG *)((int)this + 0x674),uVar4,0,*(HANDLE *)((int)this + 0xc),
                             *(uint *)((int)this + 0x890) + *(uint *)((int)this + 0x18),
                             *(int *)((int)this + 0x894) + *(int *)((int)this + 0x1c) +
                             (uint)CARRY4(*(uint *)((int)this + 0x890),*(uint *)((int)this + 0x18)))
        ;
        if (iVar1 < 0) {
          return;
        }
        uVar2 = *(uint *)((int)this + 0x890) + *(uint *)((int)this + 0x18);
        local_374 = *(int *)((int)this + 0x894) + *(int *)((int)this + 0x1c) +
                    (uint)CARRY4(*(uint *)((int)this + 0x890),*(uint *)((int)this + 0x18)) +
                    (uint)(0xffffffb3 < uVar2);
        local_36c = 0;
        SetFilePointer(*(HANDLE *)((int)this + 0xc),uVar2 + 0x4c,&local_374,0);
        WriteFile(*(HANDLE *)((int)this + 0xc),piVar3 + 2,8,&local_36c,(LPOVERLAPPED)0x0);
        uVar2 = *(uint *)((int)this + 0x18);
        *(uint *)((int)this + 0x18) = uVar2 + uVar4;
        iVar1 = *(int *)((int)this + 0x1c) + (uint)CARRY4(uVar2,uVar4);
        *(int *)((int)this + 0x1c) = iVar1;
        local_374 = *(int *)((int)this + 0x894) + iVar1 +
                    (uint)CARRY4(*(uint *)((int)this + 0x890),*(uint *)((int)this + 0x18));
        SetFilePointer(*(HANDLE *)((int)this + 0xc),
                       *(uint *)((int)this + 0x890) + *(uint *)((int)this + 0x18),&local_374,0);
      }
      iVar1 = FUN_0043ca90(this,local_360);
      local_370 = local_370 + 4;
    } while (iVar1 == 0);
  }
  if (-1 < iVar1) {
    FUN_00438580(this,local_368,local_364);
  }
  return;
}


