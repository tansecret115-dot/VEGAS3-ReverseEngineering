/* Module: encn3260.dll
   Function: FUN_66495660
   Address: 66495660
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_66495660(void *this,undefined2 *param_1,void *param_2,undefined2 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6)

{
  bool bVar1;
  bool bVar2;
  undefined2 uVar3;
  uint uVar4;
  int *piVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  undefined4 unaff_ESI;
  uint local_20;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  if ((*(int *)((int)this + 0x46) == 0) && (*(int *)((int)this + 0x26) != 0)) {
    local_c = CONCAT22((short)((uint)unaff_ESI >> 0x10),*(undefined2 *)((int)this + 0x70));
    uVar4 = FUN_66495960(this,(uint)*(ushort *)((int)this + 0x6e),local_c);
    local_10 = FUN_66495960(this,(uint)*(ushort *)((int)this + 0x72),local_c);
    if (local_10 < 0x4001) {
      iVar7 = local_10;
      if (uVar4 != 0) {
LAB_664956e3:
        if (0x180 < local_10) {
          local_c = CONCAT22((short)((uint)iVar7 >> 0x10),*(undefined2 *)((int)this + 0x72));
          iVar7 = 0x180;
          do {
            local_c = local_c + 1;
            if ((local_c & 0xffff) == *(uint *)((int)this + 0x66)) {
              local_c = 0;
            }
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          uVar4 = FUN_66495960(this,(uint)*(ushort *)((int)this + 0x6e),local_c);
          local_10 = 0x180;
          *param_6 = 1;
        }
        bVar1 = 0x4000 < (int)uVar4;
        if (bVar1) {
          uVar4 = 0;
        }
        *param_3 = (short)local_10;
        bVar2 = false;
        *param_5 = 0;
        if (-1 < local_10) {
          param_3 = (undefined2 *)0x0;
          local_14 = local_10;
          do {
            if ((int)uVar4 < 0) {
              FUN_664c0190(param_2,(int)param_3 - 1);
              local_8 = uVar4;
            }
            else if ((uVar4 == 0) && (bVar1)) {
              local_8 = 0xffffffff;
              *param_1 = (undefined2)local_c;
              *param_4 = 1;
            }
            else {
              local_8 = uVar4 - 1;
              piVar5 = (int *)FUN_664c04a0(*(void **)((int)this + 10),uVar4);
              piVar5 = (int *)*piVar5;
              if (local_14 == local_10) {
                if (piVar5[7] == 0) {
                  *param_5 = 1;
                  *param_6 = 0;
                  if (piVar5[5] == 0) {
                    piVar5[5] = 1;
                    *(int *)((int)this + 0x17a) = *(int *)((int)this + 0x17a) + 1;
                  }
                }
                uVar3 = (**(code **)(*piVar5 + 0x14))();
                *param_1 = uVar3;
                *param_4 = 1;
              }
              else if (piVar5[7] == 0) {
                bVar2 = true;
                *param_6 = 0;
                uVar4 = (**(code **)(*piVar5 + 0x14))();
                local_20 = uVar4 & 0xffff;
                FUN_664c0190(param_2,(int)param_3 - 1U);
                FUN_664c0220(param_2,(int)param_3 - 1U);
                if (piVar5[5] == 0) {
                  piVar5[5] = 1;
                  *(int *)((int)this + 0x17a) = *(int *)((int)this + 0x17a) + 1;
                }
              }
              else {
                FUN_664c0190(param_2,(int)param_3 - 1);
              }
            }
            local_14 = local_14 + -1;
            param_3 = (undefined2 *)((int)param_3 + 1);
            uVar4 = local_8;
          } while (-1 < local_14);
        }
        if (bVar2) {
          iVar7 = FUN_66495960(this,(uint)*(ushort *)((int)this + 0x72),local_20);
        }
        else {
          iVar7 = FUN_66495960(this,(uint)*(ushort *)((int)this + 0x72),local_c);
          iVar7 = iVar7 + 1;
        }
        uVar4 = iVar7 + (uint)*(ushort *)((int)this + 0x72);
        if (((*(int *)((int)this + 0x36) == 0) &&
            (uVar6 = (ushort)uVar4, *(ushort *)((int)this + 0x72) <= uVar6)) &&
           ((uVar4 & 0xffff) < *(uint *)((int)this + 0x66))) {
          *(ushort *)((int)this + 0x72) = uVar6;
          return 0;
        }
        iVar8 = 0;
        if (0 < iVar7) {
          while ((*(int *)((int)this + 0x36) == 0 ||
                 (*(short *)((int)this + 0x72) != *(short *)((int)this + 0x74)))) {
            *(short *)((int)this + 0x72) = *(short *)((int)this + 0x72) + 1;
            if ((uint)*(ushort *)((int)this + 0x72) == *(uint *)((int)this + 0x66)) {
              *(undefined2 *)((int)this + 0x72) = 0;
            }
            iVar8 = iVar8 + 1;
            if (iVar7 <= iVar8) {
              return 0;
            }
          }
          *(undefined4 *)((int)this + 0x46) = 1;
        }
        return 0;
      }
      if (*(int *)((int)this + 0x3a) == 0) {
        piVar5 = (int *)FUN_664c04a0(*(void **)((int)this + 10),0);
        iVar7 = 0;
        if (*(int *)(*piVar5 + 0x30) == 0) goto LAB_664956e3;
      }
    }
  }
  return 0x40042;
}


