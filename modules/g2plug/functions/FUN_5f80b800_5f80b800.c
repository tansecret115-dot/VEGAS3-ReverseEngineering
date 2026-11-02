/* Module: g2plug.dll
   Function: FUN_5f80b800
   Address: 5f80b800
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_5f80b800(int *param_1)

{
  LPSTR pCVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int unaff_ESI;
  uint *puVar7;
  int *unaff_EDI;
  uint *puVar8;
  int iVar9;
  int iVar10;
  int *piStack_16c;
  int *piStack_154;
  int local_148;
  int *local_144;
  undefined4 uStack_140;
  CHAR aCStack_124 [268];
  int iStack_18;
  LPSTR pCStack_14;
  int iStack_10;
  
  if (DAT_5f87749c == (undefined4 *)0x0) {
    return -0x7fffbffb;
  }
  local_144 = param_1;
  if ((param_1[1] == 100) && (*param_1 == 0x10)) {
    piStack_16c = &local_148;
    iVar2 = (**(code **)*DAT_5f87749c)(DAT_5f87749c,&DAT_5f86a4c0);
    if (iVar2 != 0) {
      return -0x7fffbffe;
    }
    iVar2 = (**(code **)(*piStack_154 + 0xc))(piStack_154,&DAT_5f86a4b0,0,&DAT_5f86a4a0);
    if (unaff_EDI != (int *)0x0) {
      (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    }
    if (iVar2 != 0) {
      return -0x7fffbffe;
    }
    iVar2 = *param_1;
    puVar6 = (uint *)((int)param_1 + iVar2);
    if (iVar2 <= iStack_18) {
      iVar9 = 1;
      iVar10 = 0;
      do {
        if (*(int *)(unaff_ESI + 8) <= iVar10) break;
        uVar5 = *puVar6;
        if (iStack_18 < (int)(uVar5 + iVar2)) goto LAB_5f80b9cb;
        puVar7 = puVar6;
        puVar8 = (uint *)&stack0xfffffea4;
        for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar6 = (uint *)((int)puVar6 + uVar5);
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(char *)puVar8 = (char)*puVar7;
          puVar7 = (uint *)((int)puVar7 + 1);
          puVar8 = (uint *)((int)puVar8 + 1);
        }
        if ((local_148 != 0) &&
           (iVar3 = (**(code **)(unaff_ESI + 0x14))
                              (&stack0xfffffe9c,local_144,uStack_140,&piStack_16c), iVar3 == 0)) {
          iVar3 = (**(code **)(*piStack_16c + 0x10))(piStack_16c,aCStack_124,0x104);
          pCVar1 = pCStack_14;
          if (iVar3 == 0) {
            lstrcpynA(pCStack_14,aCStack_124,iStack_10);
            pCVar1[iStack_10 + -1] = '\0';
            iVar9 = 0;
          }
          if (piStack_16c != (int *)0x0) {
            (**(code **)(*piStack_16c + 8))(piStack_16c);
            piStack_16c = (int *)0x0;
          }
        }
        iVar10 = iVar10 + 1;
      } while (-1 < iVar9);
      if (&stack0xfffffe9c != (undefined1 *)0x0) {
        (**(code **)(unaff_ESI + 8))(&stack0xfffffe9c);
      }
      return iVar9;
    }
LAB_5f80b9cb:
    if (&stack0xfffffe9c != (undefined1 *)0x0) {
      (**(code **)(unaff_ESI + 8))(&stack0xfffffe9c);
    }
  }
  return -0x7ff8ffa9;
}


