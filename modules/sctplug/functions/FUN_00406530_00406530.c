/* Module: sctplug.dll
   Function: FUN_00406530
   Address: 00406530
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_00406530(void *this,uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  undefined8 uVar6;
  uint local_14;
  uint local_10;
  DWORD local_c;
  uint local_8;
  int local_4;
  
  local_14 = 0;
  if (*(int *)((int)this + 0xd8) != 0) {
    local_4 = param_2;
    local_8 = param_1;
    uVar6 = FUN_00406340(this,&local_8);
    uVar4 = local_8;
    *(uint *)((int)this + 0x28) = local_8;
    *(int *)((int)this + 0x2c) = local_4;
    puVar5 = (ushort *)(*(int *)((int)this + 0x50) + 0xc);
    *(undefined8 *)((int)this + 0x48) = uVar6;
    uVar6 = __alldiv((uint)uVar6,(uint)((ulonglong)uVar6 >> 0x20),(uint)*puVar5,0);
    *(int *)((int)this + 0xf0) = (int)uVar6;
    if ((uVar4 != param_1) || (local_4 != param_2)) {
      *(undefined4 *)((int)this + 0x90) = *(undefined4 *)((int)this + 0x98);
      if ((local_4 <= param_2) && ((local_4 < param_2 || (uVar4 < param_1)))) {
        while( true ) {
          uVar4 = (*(int *)((int)this + 0x38) - *(int *)((int)this + 0x48)) +
                  *(int *)((int)this + 0x40);
          if (*(uint *)((int)this + 0x90) <= uVar4) {
            uVar4 = *(uint *)((int)this + 0x90);
          }
          if (uVar4 == 0) break;
          local_10 = uVar4 / *puVar5;
          local_14 = FUN_00406460(this,*(DWORD *)((int)this + 0xf0),uVar4,
                                  *(LPVOID *)((int)this + 0x8c),uVar4,&local_c,(int *)&local_10);
          if (((int)local_14 < 0) || (local_c == 0)) break;
          *(DWORD *)((int)this + 0x94) = local_c;
          *(DWORD *)((int)this + 0x90) = local_c;
          *(undefined4 *)((int)this + 0xa4) = 0;
          iVar3 = acmStreamConvert();
          if (iVar3 != 0) {
            return 0x8004e01e;
          }
          if ((*(uint *)((int)this + 0x84) & 0x10000) == 0) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          FUN_00406240(this,*(int **)((int)this + 0x28),*(int *)((int)this + 0x2c),
                       *(int *)((int)this + 0x48),*(int *)((int)this + 0x4c));
          uVar4 = *(uint *)((int)this + 0x94);
          uVar1 = *(uint *)((int)this + 0x48);
          uVar2 = *(uint *)((int)this + 0x28);
          *(uint *)((int)this + 0x48) = uVar1 + uVar4;
          *(uint *)((int)this + 0xe8) = uVar2;
          *(uint *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + (uint)CARRY4(uVar1,uVar4);
          puVar5 = (ushort *)(*(int *)((int)this + 0x50) + 0xc);
          *(undefined4 *)((int)this + 0xdc) = 1;
          *(int *)((int)this + 0xec) = *(int *)((int)this + 0x2c);
          *(uint *)((int)this + 0xf0) = *(int *)((int)this + 0xf0) + uVar4 / *puVar5;
          *(uint *)((int)this + 0xe0) = *(uint *)((int)this + 0xa4);
          uVar4 = *(uint *)((int)this + 0xa4) / (uint)*(ushort *)(*(int *)((int)this + 0x58) + 0xc);
          *(uint *)((int)this + 0xe0) = uVar4;
          iVar3 = *(int *)((int)this + 0x2c) + (uint)CARRY4(uVar4,uVar2);
          *(uint *)((int)this + 0x28) = uVar4 + uVar2;
          *(int *)((int)this + 0x2c) = iVar3;
          if ((param_2 < iVar3) || ((param_2 <= iVar3 && (param_1 <= *(uint *)((int)this + 0x28)))))
          break;
        }
      }
      *(uint *)((int)this + 0x28) = param_1;
      *(int *)((int)this + 0x2c) = param_2;
    }
  }
  return local_14;
}


