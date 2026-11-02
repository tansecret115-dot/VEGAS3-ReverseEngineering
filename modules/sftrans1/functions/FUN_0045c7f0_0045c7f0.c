/* Module: sftrans1.dll
   Function: FUN_0045c7f0
   Address: 0045c7f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

int __fastcall FUN_0045c7f0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *unaff_ESI;
  uint *puVar9;
  undefined4 *puVar10;
  uint local_a0;
  int *piStack_9c;
  uint uStack_98;
  uint auStack_94 [18];
  int aiStack_4c [19];
  
  iVar8 = 0;
  if (1 < *(uint *)(param_1 + 0x7c)) {
    auStack_94[1] = 0;
    puVar9 = auStack_94 + 3;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    aiStack_4c[1] = 0;
    local_a0 = 0;
    iVar6 = 0;
    do {
      if (*(uint *)(param_1 + 0x7c) <= local_a0) break;
      piVar1 = *(int **)(*(int *)(param_1 + 0xa0) + 4 + iVar6);
      if (piVar1 != (int *)0x0) {
        iVar8 = (**(code **)(*piVar1 + 0x1c))(piVar1,aiStack_4c + 1);
        iVar4 = 0xc;
        do {
          iVar7 = *(int *)((int)auStack_94 + iVar4);
          if (*(int *)((int)aiStack_4c + iVar4) <= *(int *)((int)auStack_94 + iVar4)) {
            iVar7 = *(int *)((int)aiStack_4c + iVar4);
          }
          iVar2 = *(int *)((int)aiStack_4c + iVar4 + 4U);
          *(int *)((int)auStack_94 + iVar4) = iVar7;
          iVar7 = *(int *)((int)auStack_94 + iVar4 + 4);
          if (iVar7 <= iVar2) {
            iVar7 = iVar2;
          }
          *(int *)((int)auStack_94 + iVar4 + 4) = iVar7;
          iVar4 = iVar4 + 8;
        } while (iVar4 < 0x2c);
      }
      iVar6 = iVar6 + 0x18;
      local_a0 = local_a0 + 1;
    } while (-1 < iVar8);
    local_a0 = 0;
    if (-1 < iVar8) {
      iVar6 = 0;
      do {
        if (*(uint *)(param_1 + 0x7c) <= local_a0) {
          return iVar8;
        }
        piVar1 = *(int **)(iVar6 + 4 + *(int *)(param_1 + 0xa0));
        if ((piVar1 != (int *)0x0) &&
           (iVar8 = (**(code **)(*piVar1 + 0x1c))(piVar1,aiStack_4c + 1), -1 < iVar8)) {
          uVar5 = 0xc;
          do {
            if ((*(int *)((int)aiStack_4c + uVar5) != *(int *)((int)auStack_94 + uVar5)) ||
               (*(int *)((int)aiStack_4c + uVar5 + 4) != *(int *)((int)auStack_94 + uVar5 + 4))) {
              iVar8 = CoCreateInstance((IID *)&DAT_00554970,(LPUNKNOWN)0x0,3,(IID *)&DAT_005547b0,
                                       &piStack_9c);
              if (-1 < iVar8) {
                auStack_94[0] = 0;
                uStack_98 = 0;
                if ((*(byte *)(param_1 + 0x88) & 8) != 0) {
                  uStack_98 = ((aiStack_4c[3] - auStack_94[3]) - aiStack_4c[4]) + auStack_94[4] >> 1
                  ;
                  auStack_94[0] =
                       ((aiStack_4c[5] - auStack_94[5]) - aiStack_4c[6]) + auStack_94[6] >> 1;
                }
                puVar10 = (undefined4 *)0x0;
                (**(code **)(*piStack_9c + 0x28))
                          (piStack_9c,*(undefined4 *)(iVar6 + 4 + *(int *)(param_1 + 0xa0)),0,
                           &uStack_98);
                (**(code **)(*unaff_ESI + 0x14))(unaff_ESI,&local_a0);
                piVar1 = *(int **)(iVar6 + 4 + *(int *)(param_1 + 0xa0));
                (**(code **)(*piVar1 + 8))(piVar1);
                piVar1 = (int *)(iVar6 + 4 + *(int *)(param_1 + 0xa0));
                (**(code **)*puVar10)(puVar10,&DAT_005547c0);
                piVar3 = *(int **)(iVar6 + 4 + *(int *)(param_1 + 0xa0));
                (**(code **)(*piVar3 + 0x18))(piVar3,0,iVar6 + *(int *)(param_1 + 0xa0) + 0x10);
                (**(code **)(*piVar1 + 8))(piVar1);
              }
              break;
            }
            uVar5 = uVar5 + 8;
          } while (uVar5 < 0x2c);
        }
        iVar6 = iVar6 + 0x18;
        local_a0 = local_a0 + 1;
      } while (-1 < iVar8);
    }
  }
  return iVar8;
}


