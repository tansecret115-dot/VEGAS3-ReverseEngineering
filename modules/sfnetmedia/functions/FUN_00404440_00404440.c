/* Module: sfnetmedia.dll
   Function: FUN_00404440
   Address: 00404440
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00404783) */
/* WARNING: Removing unreachable block (ram,0x00404716) */
/* WARNING: Removing unreachable block (ram,0x0040459c) */
/* WARNING: Removing unreachable block (ram,0x00404642) */
/* WARNING: Removing unreachable block (ram,0x00404509) */
/* WARNING: Removing unreachable block (ram,0x00404545) */
/* WARNING: Removing unreachable block (ram,0x0040465e) */
/* WARNING: Removing unreachable block (ram,0x0040455f) */
/* WARNING: Removing unreachable block (ram,0x00404567) */
/* WARNING: Removing unreachable block (ram,0x0040456d) */
/* WARNING: Removing unreachable block (ram,0x00404571) */
/* WARNING: Removing unreachable block (ram,0x00404521) */
/* WARNING: Removing unreachable block (ram,0x00404529) */
/* WARNING: Removing unreachable block (ram,0x0040452f) */
/* WARNING: Removing unreachable block (ram,0x00404533) */
/* WARNING: Removing unreachable block (ram,0x00404577) */
/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x004045de */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

int __thiscall FUN_00404440(void *this,undefined4 param_1,int param_2,undefined4 param_3)

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
  
  if ((((*(int *)PTR_DAT_0043f0fc == DAT_0043c7b0) &&
       (*(int *)(PTR_DAT_0043f0fc + 4) == DAT_0043c7b4)) &&
      (*(int *)(PTR_DAT_0043f0fc + 8) == DAT_0043c7b8)) &&
     (*(int *)(PTR_DAT_0043f0fc + 0xc) == DAT_0043c7bc)) {
    PTR_DAT_0043f0fc = (undefined *)((int)this + 4);
    PTR_DAT_0043f0f8 = (undefined *)((int)this + 0x14);
    DAT_0043f100 = *(undefined2 *)((int)this + 0x24);
    DAT_0043f102 = *(undefined2 *)((int)this + 0x26);
  }
  if (DAT_0043f104 == (int *)0x0) {
    piStack_24 = (int *)0x4044c4;
    iVar1 = FUN_00405290(&PTR_DAT_0043f0f8,param_3);
    if (DAT_0043f104 != (int *)0x0) goto LAB_004044d0;
    piVar6 = DAT_0043f104;
    if (iVar1 < 0) goto LAB_004045a2;
  }
  else {
LAB_004044d0:
    piVar6 = DAT_0043f104;
    piStack_24 = (int *)0x4044d6;
    (**(code **)(*DAT_0043f104 + 4))();
  }
  if (piVar6 != (int *)0x0) {
    piStack_24 = (int *)&DAT_0043c7a0;
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
            piStack_24 = (int *)0x404652;
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
    iVar1 = 0x40460b;
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
                  FUN_00404fb0((int *)0x0,piStack_24[0xf]);
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
LAB_004045a2:
  if (piVar6 != (int *)0x0) {
    piStack_24 = (int *)0x4045ac;
    (**(code **)(*piVar6 + 8))();
  }
  return iVar1;
}


