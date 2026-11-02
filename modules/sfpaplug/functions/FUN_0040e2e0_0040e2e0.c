/* Module: sfpaplug.dll
   Function: FUN_0040e2e0
   Address: 0040e2e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_0040e2e0(void *this,uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  undefined8 uVar6;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  int local_4;
  
  local_10 = 0;
  if (*(int *)((int)this + 0xd8) != 0) {
    local_4 = param_2;
    local_8 = param_1;
    uVar6 = FUN_0040e0b0(this,&local_8);
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
          if (uVar4 == 0) goto LAB_0040e5d1;
          local_14 = uVar4 / *puVar5;
          local_10 = FUN_0040e1d0(this,*(uint *)((int)this + 0xf0),
                                  (int)*(uint *)((int)this + 0xf0) >> 0x1f,uVar4,
                                  *(LPVOID *)((int)this + 0x8c),uVar4,&local_c,(int *)&local_14);
          if ((int)local_10 < 0) break;
          if (local_c == 0) goto LAB_0040e5d1;
          *(uint *)((int)this + 0x94) = local_c;
          *(uint *)((int)this + 0x90) = local_c;
          *(undefined4 *)((int)this + 0xa4) = 0;
          iVar2 = acmStreamConvert();
          if (iVar2 != 0) {
            return 0x8004e01e;
          }
          if ((*(uint *)((int)this + 0x84) & 0x10000) == 0) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          FUN_0040dfb0(this,*(int **)((int)this + 0x28),*(int *)((int)this + 0x2c),
                       *(int *)((int)this + 0x48),*(int *)((int)this + 0x4c));
          uVar4 = *(uint *)((int)this + 0x94);
          uVar3 = *(uint *)((int)this + 0x48);
          uVar1 = *(uint *)((int)this + 0x28);
          *(uint *)((int)this + 0x48) = uVar3 + uVar4;
          *(uint *)((int)this + 0xe8) = uVar1;
          *(uint *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + (uint)CARRY4(uVar3,uVar4);
          puVar5 = (ushort *)(*(int *)((int)this + 0x50) + 0xc);
          *(undefined4 *)((int)this + 0xdc) = 1;
          *(int *)((int)this + 0xec) = *(int *)((int)this + 0x2c);
          *(uint *)((int)this + 0xf0) = *(int *)((int)this + 0xf0) + uVar4 / *puVar5;
          *(uint *)((int)this + 0xe0) = *(uint *)((int)this + 0xa4);
          uVar4 = *(uint *)((int)this + 0xa4) / (uint)*(ushort *)(*(int *)((int)this + 0x58) + 0xc);
          *(uint *)((int)this + 0xe0) = uVar4;
          iVar2 = *(int *)((int)this + 0x2c) + (uint)CARRY4(uVar4,uVar1);
          *(uint *)((int)this + 0x28) = uVar4 + uVar1;
          *(int *)((int)this + 0x2c) = iVar2;
          if ((param_2 < iVar2) || ((param_2 <= iVar2 && (param_1 <= *(uint *)((int)this + 0x28)))))
          goto LAB_0040e5d1;
        }
        *(undefined4 *)((int)this + 0x94) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
        iVar2 = acmStreamConvert();
        if (iVar2 == 0) {
          if ((*(uint *)((int)this + 0x84) & 0x10000) == 0) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          uVar4 = *(uint *)((int)this + 0xe8);
          uVar3 = *(uint *)((int)this + 0x48);
          *(uint *)((int)this + 0xe8) = uVar4 + *(uint *)((int)this + 0xe0);
          *(uint *)((int)this + 0x48) = uVar3 + *(uint *)((int)this + 0x94);
          *(uint *)((int)this + 0xec) =
               *(int *)((int)this + 0xec) + (uint)CARRY4(uVar4,*(uint *)((int)this + 0xe0));
          *(uint *)((int)this + 0x4c) =
               *(int *)((int)this + 0x4c) + (uint)CARRY4(uVar3,*(uint *)((int)this + 0x94));
          *(undefined4 *)((int)this + 0xdc) = 1;
          *(uint *)((int)this + 0xe0) = *(uint *)((int)this + 0xa4);
          uVar3 = *(uint *)((int)this + 0xa4) / (uint)*(ushort *)(*(int *)((int)this + 0x58) + 0xc);
          uVar4 = *(uint *)((int)this + 0x28);
          *(uint *)((int)this + 0xe0) = uVar3;
          *(uint *)((int)this + 0x28) = uVar4 + uVar3;
          *(uint *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + (uint)CARRY4(uVar4,uVar3);
          *(uint *)((int)this + 0xf0) = *(int *)((int)this + 0xf0) + local_14;
        }
      }
LAB_0040e5d1:
      *(uint *)((int)this + 0x28) = param_1;
      *(int *)((int)this + 0x2c) = param_2;
    }
  }
  return local_10;
}


