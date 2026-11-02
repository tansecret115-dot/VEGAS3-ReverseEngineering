/* Module: g2plug.dll
   Function: FUN_5f80b620
   Address: 5f80b620
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_5f80b620(int *param_1)

{
  LPSTR pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint *puVar8;
  int unaff_ESI;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  int *piStack_168;
  int *piStack_164;
  int *piStack_150;
  int local_144 [2];
  int iStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  CHAR aCStack_124 [268];
  int iStack_18;
  LPSTR pCStack_14;
  int iStack_10;
  
  if (DAT_5f87749c == (undefined4 *)0x0) {
    return 0x80004005;
  }
  if ((param_1[1] == 100) && (*param_1 == 0x10)) {
    piStack_164 = local_144;
    piStack_168 = (int *)&DAT_5f86a4c0;
    iVar2 = (**(code **)*DAT_5f87749c)(DAT_5f87749c);
    if (iVar2 != 0) {
      return 0x80004002;
    }
    iVar2 = (**(code **)(*piStack_150 + 0xc))(piStack_150,&DAT_5f86a4b0,0,&DAT_5f86a4a0);
    if (piStack_164 != (int *)0x0) {
      (**(code **)(*piStack_164 + 8))(piStack_164);
      piStack_164 = (int *)0x0;
    }
    if (iVar2 != 0) {
      return 0x80004002;
    }
    iVar2 = *param_1;
    puVar8 = (uint *)((int)param_1 + iVar2);
    if (iVar2 <= iStack_18) {
      uVar7 = 1;
      iVar11 = 0;
      while( true ) {
        if (0 < iVar11) {
          if (&stack0xfffffea4 != (undefined1 *)0x0) {
            (**(code **)(unaff_ESI + 8))(&stack0xfffffea4);
          }
          return uVar7;
        }
        uVar6 = *puVar8;
        if (iStack_18 < (int)(uVar6 + iVar2)) break;
        puVar9 = puVar8;
        puVar10 = (uint *)&stack0xfffffea4;
        for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar8 = (uint *)((int)puVar8 + uVar6);
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(char *)puVar10 = (char)*puVar9;
          puVar9 = (uint *)((int)puVar9 + 1);
          puVar10 = (uint *)((int)puVar10 + 1);
        }
        if ((iStack_13c != 0) &&
           (iVar3 = (**(code **)(unaff_ESI + 0x14))
                              (&stack0xfffffea4,uStack_138,uStack_134,&piStack_168), iVar3 == 0)) {
          iVar4 = (**(code **)(*piStack_168 + 0x10))(piStack_168,aCStack_124,0x104);
          iVar3 = iStack_10;
          pCVar1 = pCStack_14;
          if (iVar4 == 0) {
            lstrcpynA(pCStack_14,aCStack_124,iStack_10);
            pCVar1[iVar3 + -1] = '\0';
            uVar7 = 0;
          }
          if (piStack_168 != (int *)0x0) {
            (**(code **)(*piStack_168 + 8))(piStack_168);
            piStack_168 = (int *)0x0;
          }
        }
        iVar11 = iVar11 + 1;
      }
    }
    if (&stack0xfffffea4 != (undefined1 *)0x0) {
      (**(code **)(unaff_ESI + 8))(&stack0xfffffea4);
    }
  }
  return 0x80070057;
}


