/* Module: sfpaplug.dll
   Function: FUN_00408e10
   Address: 00408e10
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00408e10(void *this,uint param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  undefined8 uVar7;
  int local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  int local_4;
  
  local_14 = 0;
  if (*(int *)((int)this + 0xd8) != 0) {
    local_4 = param_2;
    local_8 = param_1;
    uVar7 = FUN_00407c60(this,&local_8);
    uVar5 = local_8;
    *(uint *)((int)this + 0x28) = local_8;
    *(int *)((int)this + 0x2c) = local_4;
    puVar6 = (ushort *)(*(int *)((int)this + 0x50) + 0xc);
    *(undefined8 *)((int)this + 0x48) = uVar7;
    uVar7 = __alldiv((uint)uVar7,(uint)((ulonglong)uVar7 >> 0x20),(uint)*puVar6,0);
    *(undefined8 *)((int)this + 0xf0) = uVar7;
    if ((uVar5 != param_1) || (local_4 != param_2)) {
      *(undefined4 *)((int)this + 0x90) = *(undefined4 *)((int)this + 0x98);
      if ((local_4 <= param_2) && ((local_4 < param_2 || (uVar5 < param_1)))) {
        while( true ) {
          uVar5 = (*(int *)((int)this + 0x38) - *(int *)((int)this + 0x48)) +
                  *(int *)((int)this + 0x40);
          if (*(uint *)((int)this + 0x90) <= uVar5) {
            uVar5 = *(uint *)((int)this + 0x90);
          }
          if (uVar5 == 0) break;
          local_10 = uVar5 / *puVar6;
          local_14 = FUN_00408500(this,*(uint *)((int)this + 0xf0),*(uint *)((int)this + 0xf4),uVar5
                                  ,*(undefined4 **)((int)this + 0x8c),uVar5,(int *)&local_c,
                                  &local_10);
          if ((local_14 < 0) || (local_c == 0)) break;
          *(uint *)((int)this + 0x94) = local_c;
          *(uint *)((int)this + 0x90) = local_c;
          *(undefined4 *)((int)this + 0xa4) = 0;
          iVar4 = acmStreamConvert();
          if (iVar4 != 0) {
            return -0x7ffb1fe2;
          }
          if ((*(uint *)((int)this + 0x84) & 0x10000) == 0) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          FUN_00407b60(this,*(int **)((int)this + 0x28),*(int *)((int)this + 0x2c),
                       *(int *)((int)this + 0x48),*(int *)((int)this + 0x4c));
          uVar5 = *(uint *)((int)this + 0x94);
          uVar2 = *(uint *)((int)this + 0x48);
          uVar3 = *(uint *)((int)this + 0x28);
          *(uint *)((int)this + 0x48) = uVar2 + uVar5;
          *(uint *)((int)this + 0xe8) = uVar3;
          *(uint *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + (uint)CARRY4(uVar2,uVar5);
          puVar6 = (ushort *)(*(int *)((int)this + 0x50) + 0xc);
          *(undefined4 *)((int)this + 0xdc) = 1;
          *(int *)((int)this + 0xec) = *(int *)((int)this + 0x2c);
          uVar1 = *puVar6;
          uVar2 = *(uint *)((int)this + 0xf0);
          *(uint *)((int)this + 0xf0) = uVar2 + uVar5 / uVar1;
          *(uint *)((int)this + 0xf4) =
               *(int *)((int)this + 0xf4) + (uint)CARRY4(uVar2,uVar5 / uVar1);
          *(uint *)((int)this + 0xe0) = *(uint *)((int)this + 0xa4);
          uVar5 = *(uint *)((int)this + 0xa4) / (uint)*(ushort *)(*(int *)((int)this + 0x58) + 0xc);
          *(uint *)((int)this + 0xe0) = uVar5;
          iVar4 = *(int *)((int)this + 0x2c) + (uint)CARRY4(uVar5,uVar3);
          *(uint *)((int)this + 0x28) = uVar5 + uVar3;
          *(int *)((int)this + 0x2c) = iVar4;
          if ((param_2 < iVar4) || ((param_2 <= iVar4 && (param_1 <= *(uint *)((int)this + 0x28)))))
          break;
        }
      }
      *(uint *)((int)this + 0x28) = param_1;
      *(int *)((int)this + 0x2c) = param_2;
    }
  }
  return local_14;
}


