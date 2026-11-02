/* Module: wavplug.dll
   Function: FUN_5f3959c0
   Address: 5f3959c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f3959c0(void *this,uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int unaff_EBX;
  uint unaff_ESI;
  uint unaff_EDI;
  undefined8 uVar5;
  uint unaff_retaddr;
  undefined4 uVar6;
  undefined4 uVar7;
  uint local_8;
  int local_4;
  
  if (*(int *)((int)this + 0x8c) != 0) {
    uVar3 = *(uint *)((int)this + 0x98);
    iVar4 = *(int *)((int)this + 0x9c);
    iVar2 = iVar4 + (uint)CARRY4(*(uint *)((int)this + 0x90),uVar3);
    if (((param_2 <= iVar2) &&
        (((param_2 < iVar2 || (param_1 < *(uint *)((int)this + 0x90) + uVar3)) && (iVar4 <= param_2)
         ))) && ((iVar4 < param_2 || (uVar3 <= param_1)))) {
      *(uint *)((int)this + 8) = param_1;
      *(int *)((int)this + 0xc) = param_2;
      return 0;
    }
  }
  if (*(int *)((int)this + 0x88) == 0) {
    return 0x8000ffff;
  }
  local_8 = param_1;
  local_4 = param_2;
  uVar5 = FUN_5f3958a0(this,&local_8);
  *(uint *)((int)this + 8) = local_8;
  *(int *)((int)this + 0xc) = local_4;
  *(undefined8 *)((int)this + 0x28) = uVar5;
  (**(code **)(*(int *)this + 0xc))(uVar5,0);
  if ((unaff_ESI != local_8) || (unaff_EBX != param_2)) {
    *(undefined4 *)((int)this + 0x44) = *(undefined4 *)((int)this + 0x4c);
    if ((*(int *)((int)this + 0xc) <= param_2) &&
       ((*(int *)((int)this + 0xc) < param_2 || (*(uint *)((int)this + 8) < local_8)))) {
      while( true ) {
        uVar3 = (*(int *)((int)this + 0x20) - *(int *)((int)this + 0x28)) +
                *(int *)((int)this + 0x18);
        if (*(uint *)((int)this + 0x4c) <= uVar3) {
          uVar3 = *(uint *)((int)this + 0x4c);
        }
        if (((uVar3 == 0) ||
            (iVar4 = (**(code **)(*(int *)this + 4))
                               (*(undefined4 *)((int)this + 0x40),uVar3,&stack0xffffffe8,0),
            iVar4 < 0)) || (unaff_EDI == 0)) break;
        *(uint *)((int)this + 0x48) = unaff_EDI;
        *(uint *)((int)this + 0x44) = unaff_EDI;
        *(undefined4 *)((int)this + 0x58) = 0;
        if (unaff_EDI < unaff_retaddr) {
          uVar6 = *(undefined4 *)((int)this + 0x30);
          uVar7 = 0;
        }
        else {
          uVar6 = *(undefined4 *)((int)this + 0x30);
          uVar7 = 4;
        }
        iVar4 = acmStreamConvert(uVar6,(int)this + 0x34,uVar7);
        if (iVar4 != 0) {
          return 0x8004e01e;
        }
        if ((*(uint *)((int)this + 0x38) & 0x10000) == 0) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        FUN_5f395710(this,*(int **)((int)this + 8),*(int *)((int)this + 0xc),
                     *(int **)((int)this + 0x28),*(int *)((int)this + 0x2c));
        uVar3 = *(uint *)((int)this + 0x28);
        uVar1 = *(uint *)((int)this + 8);
        *(uint *)((int)this + 0x28) = uVar3 + *(uint *)((int)this + 0x48);
        *(uint *)((int)this + 0x2c) =
             *(int *)((int)this + 0x2c) + (uint)CARRY4(uVar3,*(uint *)((int)this + 0x48));
        uVar3 = *(uint *)((int)this + 0x58) / param_1;
        *(uint *)((int)this + 0x98) = uVar1;
        *(undefined4 *)((int)this + 0x8c) = 1;
        *(int *)((int)this + 0x9c) = *(int *)((int)this + 0xc);
        *(uint *)((int)this + 0x90) = uVar3;
        iVar4 = *(int *)((int)this + 0xc) + (uint)CARRY4(uVar3,uVar1);
        *(uint *)((int)this + 8) = uVar3 + uVar1;
        *(int *)((int)this + 0xc) = iVar4;
        if ((param_2 < iVar4) || ((param_2 <= iVar4 && (local_8 <= *(uint *)((int)this + 8)))))
        break;
      }
    }
    *(uint *)((int)this + 8) = local_8;
    *(int *)((int)this + 0xc) = param_2;
  }
  return 0;
}


