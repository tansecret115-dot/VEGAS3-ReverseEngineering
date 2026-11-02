/* Module: sfs4rw.dll
   Function: FUN_00481570
   Address: 00481570
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00481570(int *param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  
  puVar3 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x9d);
  *(undefined4 **)((int)param_1 + 0x1c9) = puVar3;
  *puVar3 = &LAB_00481770;
  puVar3[1] = &LAB_00481790;
  *(undefined1 *)(puVar3 + 2) = 0;
  if ((char)param_1[0x4e] != '\0') {
    *(undefined4 *)(*param_1 + 0x14) = 0x17;
    (**(code **)*param_1)(param_1);
  }
  if ((*(char *)((int)param_1 + 0x7f) == '\0') || (bVar2 = true, *(int *)((int)param_1 + 0x141) < 2)
     ) {
    bVar2 = false;
  }
  iVar10 = 0;
  if (0 < *(int *)((int)param_1 + 0x5d)) {
    piVar8 = (int *)(*(int *)((int)param_1 + 0xf6) + 0x24);
    puVar9 = (undefined4 *)((int)puVar3 + 0x31);
    do {
      iVar4 = (piVar8[-7] * *piVar8) / *(int *)((int)param_1 + 0x141);
      iVar5 = (piVar8[-6] * *piVar8) / *(int *)((int)param_1 + 0x141);
      iVar1 = *(int *)((int)param_1 + 0x13d);
      iVar6 = *(int *)((int)param_1 + 0x139);
      puVar9[0xc] = iVar5;
      if ((char)piVar8[3] == '\0') {
        *puVar9 = &LAB_004818a0;
      }
      else if ((iVar4 == iVar6) && (iVar5 == iVar1)) {
        *puVar9 = &LAB_00481890;
      }
      else {
        if (iVar4 * 2 == iVar6) {
          if (iVar5 == iVar1) {
            if ((bVar2) && (2 < (uint)piVar8[1])) {
              *puVar9 = &LAB_00481ad0;
            }
            else {
              *puVar9 = &LAB_004819d0;
            }
          }
          else {
            if ((iVar4 * 2 != iVar6) || (iVar5 * 2 != iVar1)) goto LAB_004816c1;
            if ((bVar2) && (2 < (uint)piVar8[1])) {
              *puVar9 = &LAB_00481ba0;
              *(undefined1 *)(puVar3 + 2) = 1;
            }
            else {
              *puVar9 = &LAB_00481a40;
            }
          }
        }
        else {
LAB_004816c1:
          if ((iVar6 % iVar4 == 0) && (iVar1 % iVar5 == 0)) {
            *puVar9 = &LAB_004818b0;
            *(char *)(iVar10 + 0x89 + (int)puVar3) = (char)(iVar6 / iVar4);
            *(char *)(iVar10 + 0x93 + (int)puVar3) = (char)(iVar1 / iVar5);
          }
          else {
            *(undefined4 *)(*param_1 + 0x14) = 0x25;
            (**(code **)*param_1)(param_1);
          }
        }
        uVar7 = *(undefined4 *)((int)param_1 + 0x13d);
        iVar1 = param_1[1];
        iVar6 = FUN_0047d710(*(int *)((int)param_1 + 0x8e),*(int *)((int)param_1 + 0x139));
        uVar7 = (**(code **)(iVar1 + 8))(param_1,1,iVar6,uVar7);
        puVar9[-10] = uVar7;
      }
      iVar10 = iVar10 + 1;
      puVar9 = puVar9 + 1;
      piVar8 = (int *)((int)piVar8 + 0x51);
    } while (iVar10 < *(int *)((int)param_1 + 0x5d));
  }
  return;
}


