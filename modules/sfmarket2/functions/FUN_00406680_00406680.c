/* Module: sfmarket2.dll
   Function: FUN_00406680
   Address: 00406680
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004069c3) */
/* WARNING: Removing unreachable block (ram,0x00406956) */
/* WARNING: Removing unreachable block (ram,0x004067dc) */
/* WARNING: Removing unreachable block (ram,0x00406882) */
/* WARNING: Removing unreachable block (ram,0x00406749) */
/* WARNING: Removing unreachable block (ram,0x00406785) */
/* WARNING: Removing unreachable block (ram,0x0040689e) */
/* WARNING: Removing unreachable block (ram,0x0040679f) */
/* WARNING: Removing unreachable block (ram,0x004067a7) */
/* WARNING: Removing unreachable block (ram,0x004067ad) */
/* WARNING: Removing unreachable block (ram,0x004067b1) */
/* WARNING: Removing unreachable block (ram,0x00406761) */
/* WARNING: Removing unreachable block (ram,0x00406769) */
/* WARNING: Removing unreachable block (ram,0x0040676f) */
/* WARNING: Removing unreachable block (ram,0x00406773) */
/* WARNING: Removing unreachable block (ram,0x004067b7) */
/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x0040681e */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

int __thiscall FUN_00406680(void *this,undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *unaff_EBX;
  ushort *puVar3;
  ushort uVar4;
  ushort uVar5;
  int *unaff_ESI;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piStack_24;
  int iStack_8;
  
  if ((((*(int *)PTR_DAT_004a711c == DAT_004a40d0) &&
       (*(int *)(PTR_DAT_004a711c + 4) == DAT_004a40d4)) &&
      (*(int *)(PTR_DAT_004a711c + 8) == DAT_004a40d8)) &&
     (*(int *)(PTR_DAT_004a711c + 0xc) == DAT_004a40dc)) {
    PTR_DAT_004a711c = (undefined *)((int)this + 4);
    PTR_DAT_004a7118 = (undefined *)((int)this + 0x14);
    DAT_004a7120 = *(undefined2 *)((int)this + 0x24);
    DAT_004a7122 = *(undefined2 *)((int)this + 0x26);
  }
  if (DAT_004a7124 == (int *)0x0) {
    piStack_24 = (int *)0x406704;
    iVar1 = FUN_00407220(&PTR_DAT_004a7118,param_3);
    if (DAT_004a7124 != (int *)0x0) goto LAB_00406710;
    piVar6 = DAT_004a7124;
    if (iVar1 < 0) goto LAB_004067e2;
  }
  else {
LAB_00406710:
    piVar6 = DAT_004a7124;
    piStack_24 = (int *)0x406716;
    (**(code **)(*DAT_004a7124 + 4))();
  }
  if (piVar6 != (int *)0x0) {
    piStack_24 = (int *)&DAT_004a40c0;
    (**(code **)*piVar6)(piVar6);
  }
  piStack_24 = piVar6;
  iVar1 = (**(code **)(*piVar6 + 0xc))();
  if (-1 < iVar1) {
    piVar7 = (int *)0x0;
    if (*(short *)(iStack_8 + 0x2c) != 0) {
      do {
        piStack_24 = piVar7;
        iVar1 = (**(code **)(*piVar6 + 0x14))(piVar6);
        if (iVar1 < 0) {
          if (piVar6 != (int *)0x0) {
            piStack_24 = (int *)0x406892;
            (**(code **)(*piVar6 + 8))();
          }
          return iVar1;
        }
        if (iRam00000000 == param_2) break;
        piStack_24 = piVar6;
        (**(code **)(*piVar6 + 0x50))();
        piVar7 = (int *)((int)piVar7 + 1);
      } while ((int)piVar7 < (int)(uint)*(ushort *)(iStack_8 + 0x2c));
    }
    iVar1 = 0x40684b;
    piStack_24 = piVar6;
    (**(code **)(*piVar6 + 0x4c))();
    if (iVar1 == 0) {
      if (unaff_EBX != (int *)0x0) {
        (**(code **)(*unaff_EBX + 8))(unaff_EBX);
      }
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 8))(piVar6);
      }
      return -0x7fffbffb;
    }
    if (*(short *)(iVar1 + 0x18) < 9) {
      iVar2 = (int)*(short *)(iVar1 + 0x18);
      iVar8 = 0;
      if (0 < iVar2) {
        puVar3 = (ushort *)0x8;
        iVar9 = iVar1;
        do {
          uVar4 = *(ushort *)((iVar2 - iVar8) * 0x10 + -0xc + *(int *)(iVar1 + 8));
          *puVar3 = uVar4;
          if (uVar4 == 0x1a) {
            *puVar3 = *(ushort *)
                       (*(int *)(((*(short *)(iVar1 + 0x18) - iVar8) + -1) * 0x10 +
                                *(int *)(iVar1 + 8)) + 4) | 0x4000;
          }
          if (*puVar3 == 0x1d) {
            uVar4 = 0x1d;
            iVar1 = (**(code **)(*piVar6 + 0x38))
                              (piVar6,*(undefined4 *)
                                       (((*(short *)(iVar1 + 0x18) - iVar8) + -1) * 0x10 +
                                       *(int *)(iVar1 + 8)),&stack0xffffffec);
            if (iVar1 < 0) {
              uVar5 = 0x1d;
              iVar1 = iVar9;
            }
            else {
              piStack_24 = (int *)0x0;
              (**(code **)(iRam00000000 + 0xc))(0,&piStack_24);
              uVar5 = uVar4;
              iVar1 = iVar9;
              if (piStack_24 != (int *)0x0) {
                if ((piStack_24[10] == 6) && (uVar5 = *(ushort *)(piStack_24 + 0x10), uVar5 == 0x1d)
                   ) {
                  FUN_00406f40((int *)0x0,piStack_24[0xf]);
                  uVar5 = uVar4;
                }
                iVar1 = iVar9;
                if (piStack_24 != (int *)0x0) {
                  (**(code **)(iRam00000000 + 0x4c))(0,piStack_24);
                  iVar1 = iVar9;
                }
              }
            }
            *puVar3 = uVar5;
            iVar9 = iVar1;
          }
          iVar2 = (int)*(short *)(iVar1 + 0x18);
          iVar8 = iVar8 + 1;
          puVar3 = puVar3 + 1;
        } while (iVar8 < iVar2);
      }
      uRam00000004 = *(undefined2 *)(iVar1 + 0x24);
      switch(uRam00000004) {
      case 0x16:
        uRam00000004 = 3;
        break;
      case 0x17:
        uRam00000004 = 0x13;
        break;
      case 0x18:
        uRam00000004 = 0;
        break;
      case 0x19:
        uRam00000004 = 10;
      }
      iRam00000000 = *(undefined4 *)(iVar1 + 0x14);
      uRam00000006 = *(undefined2 *)(iVar1 + 0x18);
      (**(code **)(*piVar6 + 0x50))(piVar6,iVar1);
      if (unaff_ESI != (int *)0x0) {
        (**(code **)(*unaff_ESI + 8))(unaff_ESI);
      }
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 8))(piVar6);
      }
      return 0;
    }
    if (unaff_EBX != (int *)0x0) {
      (**(code **)(*unaff_EBX + 8))(unaff_EBX);
    }
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))(piVar6);
    }
    return -0x7fffbffb;
  }
LAB_004067e2:
  if (piVar6 != (int *)0x0) {
    piStack_24 = (int *)0x4067ec;
    (**(code **)(*piVar6 + 8))();
  }
  return iVar1;
}


