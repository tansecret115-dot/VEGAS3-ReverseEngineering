/* Module: sfpublish.dll
   Function: FUN_00410280
   Address: 00410280
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004105c3) */
/* WARNING: Removing unreachable block (ram,0x00410556) */
/* WARNING: Removing unreachable block (ram,0x004103dc) */
/* WARNING: Removing unreachable block (ram,0x00410482) */
/* WARNING: Removing unreachable block (ram,0x00410349) */
/* WARNING: Removing unreachable block (ram,0x00410385) */
/* WARNING: Removing unreachable block (ram,0x0041049e) */
/* WARNING: Removing unreachable block (ram,0x0041039f) */
/* WARNING: Removing unreachable block (ram,0x004103a7) */
/* WARNING: Removing unreachable block (ram,0x004103ad) */
/* WARNING: Removing unreachable block (ram,0x004103b1) */
/* WARNING: Removing unreachable block (ram,0x00410361) */
/* WARNING: Removing unreachable block (ram,0x00410369) */
/* WARNING: Removing unreachable block (ram,0x0041036f) */
/* WARNING: Removing unreachable block (ram,0x00410373) */
/* WARNING: Removing unreachable block (ram,0x004103b7) */
/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x0041041e */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

int __thiscall FUN_00410280(void *this,undefined4 param_1,int param_2,undefined4 param_3)

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
  
  if ((((*(int *)PTR_DAT_0043f36c == DAT_0043c9a0) &&
       (*(int *)(PTR_DAT_0043f36c + 4) == DAT_0043c9a4)) &&
      (*(int *)(PTR_DAT_0043f36c + 8) == DAT_0043c9a8)) &&
     (*(int *)(PTR_DAT_0043f36c + 0xc) == DAT_0043c9ac)) {
    PTR_DAT_0043f36c = (undefined *)((int)this + 4);
    PTR_DAT_0043f368 = (undefined *)((int)this + 0x14);
    DAT_0043f370 = *(undefined2 *)((int)this + 0x24);
    DAT_0043f372 = *(undefined2 *)((int)this + 0x26);
  }
  if (DAT_0043f374 == (int *)0x0) {
    piStack_24 = (int *)0x410304;
    iVar1 = FUN_00406860(&PTR_DAT_0043f368,param_3);
    if (DAT_0043f374 != (int *)0x0) goto LAB_00410310;
    piVar6 = DAT_0043f374;
    if (iVar1 < 0) goto LAB_004103e2;
  }
  else {
LAB_00410310:
    piVar6 = DAT_0043f374;
    piStack_24 = (int *)0x410316;
    (**(code **)(*DAT_0043f374 + 4))();
  }
  if (piVar6 != (int *)0x0) {
    piStack_24 = (int *)&DAT_0043cb60;
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
            piStack_24 = (int *)0x410492;
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
    iVar1 = 0x41044b;
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
                  FUN_004109b0((int *)0x0,piStack_24[0xf]);
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
LAB_004103e2:
  if (piVar6 != (int *)0x0) {
    piStack_24 = (int *)0x4103ec;
    (**(code **)(*piVar6 + 8))();
  }
  return iVar1;
}


