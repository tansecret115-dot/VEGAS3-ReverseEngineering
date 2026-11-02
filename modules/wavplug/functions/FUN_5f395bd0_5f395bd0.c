/* Module: wavplug.dll
   Function: FUN_5f395bd0
   Address: 5f395bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5f395d0a) */
/* WARNING: Removing unreachable block (ram,0x5f395d2d) */
/* WARNING: Removing unreachable block (ram,0x5f395d21) */
/* WARNING: Removing unreachable block (ram,0x5f395d36) */
/* WARNING: Removing unreachable block (ram,0x5f395e1f) */
/* WARNING: Removing unreachable block (ram,0x5f395d43) */
/* WARNING: Removing unreachable block (ram,0x5f395e1d) */
/* WARNING: Removing unreachable block (ram,0x5f395d50) */
/* WARNING: Removing unreachable block (ram,0x5f395d59) */
/* WARNING: Removing unreachable block (ram,0x5f395db3) */
/* WARNING: Removing unreachable block (ram,0x5f395db5) */
/* WARNING: Removing unreachable block (ram,0x5f395dde) */
/* WARNING: Removing unreachable block (ram,0x5f395de0) */
/* WARNING: Removing unreachable block (ram,0x5f395de5) */
/* WARNING: Removing unreachable block (ram,0x5f395de7) */
/* WARNING: Removing unreachable block (ram,0x5f395df3) */
/* WARNING: Removing unreachable block (ram,0x5f395e0e) */
/* WARNING: Removing unreachable block (ram,0x5f395e18) */

uint __thiscall
FUN_5f395bd0(void *this,int param_1,int param_2,undefined4 *param_3,uint param_4,uint *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *local_8;
  uint local_4;
  
  local_8 = param_3;
  uVar6 = 0;
  if (*(int *)((int)this + 0x8c) != 0) {
    uVar3 = *(uint *)((int)this + 0x98);
    iVar5 = *(int *)((int)this + 0x9c);
    iVar1 = *(int *)((int)this + 0xc);
    iVar2 = iVar5 + (uint)CARRY4(*(uint *)((int)this + 0x90),uVar3);
    if (((iVar1 <= iVar2) &&
        (((iVar1 < iVar2 || (*(uint *)((int)this + 8) < *(uint *)((int)this + 0x90) + uVar3)) &&
         (iVar5 <= iVar1)))) && ((iVar5 < iVar1 || (uVar3 <= *(uint *)((int)this + 8))))) {
      iVar5 = (*(int *)((int)this + 8) - *(int *)((int)this + 0x98)) *
              (uint)*(ushort *)(param_2 + 0xc);
      uVar3 = *(ushort *)(param_2 + 0xc) * param_4;
      uVar6 = *(int *)((int)this + 0x54) - iVar5;
      if (uVar3 <= uVar6) {
        uVar6 = uVar3;
      }
      if (uVar6 != 0) {
        puVar7 = (undefined4 *)(*(int *)((int)this + 0x50) + iVar5);
        puVar8 = param_3;
        for (uVar3 = uVar6 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar3 = uVar6 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        local_8 = (undefined4 *)(uVar6 + (int)param_3);
      }
      uVar6 = uVar6 / *(ushort *)(param_2 + 0xc);
      uVar3 = *(uint *)((int)this + 8);
      *(uint *)((int)this + 8) = uVar3 + uVar6;
      *(uint *)((int)this + 0xc) = *(int *)((int)this + 0xc) + (uint)CARRY4(uVar3,uVar6);
    }
  }
  if (uVar6 < param_4) {
    uVar3 = (*(int *)((int)this + 0x18) - *(int *)((int)this + 0x28)) + *(int *)((int)this + 0x20);
    if (*(uint *)((int)this + 0x4c) <= uVar3) {
      uVar3 = *(uint *)((int)this + 0x4c);
    }
    if (uVar3 != 0) {
      (**(code **)(*(int *)this + 0xc))
                (*(undefined4 *)((int)this + 0x28),*(undefined4 *)((int)this + 0x2c),0);
      *(undefined4 *)((int)this + 0x8c) = 0;
      (**(code **)(*(int *)this + 4))(*(undefined4 *)((int)this + 0x40),uVar3,&stack0x00000000,0);
    }
    *(undefined4 *)((int)this + 0x48) = 0;
    *(undefined4 *)((int)this + 0x58) = 0;
    iVar5 = acmStreamConvert(*(undefined4 *)((int)this + 0x30),(int)this + 0x34,0x20);
    if (iVar5 == 0) {
      if ((*(uint *)((int)this + 0x38) & 0x10000) == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar3 = *(uint *)((int)this + 0x58);
      if (uVar3 != 0) {
        uVar4 = *(uint *)((int)this + 0x98);
        *(undefined4 *)((int)this + 0x8c) = 1;
        *(uint *)((int)this + 0x98) = uVar4 + *(uint *)((int)this + 0x90);
        *(uint *)((int)this + 0x9c) =
             *(int *)((int)this + 0x9c) + (uint)CARRY4(uVar4,*(uint *)((int)this + 0x90));
        *(uint *)((int)this + 0x90) = uVar3;
        uVar3 = uVar3 / *(ushort *)(param_2 + 0xc);
        *(uint *)((int)this + 0x90) = uVar3;
        if (param_4 - uVar6 < uVar3) {
          uVar3 = param_4 - uVar6;
        }
        uVar4 = *(uint *)((int)this + 8);
        uVar6 = uVar6 + uVar3;
        *(uint *)((int)this + 8) = uVar4 + uVar3;
        *(uint *)((int)this + 0xc) = *(int *)((int)this + 0xc) + (uint)CARRY4(uVar4,uVar3);
        uVar3 = *(ushort *)(param_2 + 0xc) * uVar3;
        puVar7 = *(undefined4 **)((int)this + 0x50);
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *local_8 = *puVar7;
          puVar7 = puVar7 + 1;
          local_8 = local_8 + 1;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined1 *)local_8 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          local_8 = (undefined4 *)((int)local_8 + 1);
        }
      }
    }
  }
  local_4 = (uint)(uVar6 == 0);
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar6;
  }
  return local_4;
}


