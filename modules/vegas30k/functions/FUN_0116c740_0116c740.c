/* Module: vegas30k.dll
   Function: FUN_0116c740
   Address: 0116c740
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0116c740(int *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  
  puVar4 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x9d);
  *(undefined4 **)((int)param_1 + 0x1c9) = puVar4;
  *puVar4 = &LAB_0116c940;
  puVar4[1] = &LAB_0116c960;
  *(undefined1 *)(puVar4 + 2) = 0;
  if ((char)param_1[0x4e] != '\0') {
    *(undefined4 *)(*param_1 + 0x14) = 0x17;
    (**(code **)*param_1)(param_1);
  }
  if ((*(char *)((int)param_1 + 0x7f) == '\0') || (bVar3 = true, *(int *)((int)param_1 + 0x141) < 2)
     ) {
    bVar3 = false;
  }
  iVar11 = 0;
  if (0 < *(int *)((int)param_1 + 0x5d)) {
    piVar9 = (int *)(*(int *)((int)param_1 + 0xf6) + 0x24);
    puVar10 = (undefined4 *)((int)puVar4 + 0x31);
    do {
      iVar5 = (piVar9[-7] * *piVar9) / *(int *)((int)param_1 + 0x141);
      iVar6 = (piVar9[-6] * *piVar9) / *(int *)((int)param_1 + 0x141);
      iVar1 = *(int *)((int)param_1 + 0x13d);
      iVar2 = *(int *)((int)param_1 + 0x139);
      puVar10[0xc] = iVar6;
      if ((char)piVar9[3] == '\0') {
        *puVar10 = &LAB_0116ca70;
      }
      else if ((iVar5 == iVar2) && (iVar6 == iVar1)) {
        *puVar10 = &LAB_0116ca60;
      }
      else {
        if (iVar5 * 2 == iVar2) {
          if (iVar6 == iVar1) {
            if ((bVar3) && (2 < (uint)piVar9[1])) {
              *puVar10 = &LAB_0116cca0;
            }
            else {
              *puVar10 = &LAB_0116cba0;
            }
          }
          else {
            if ((iVar5 * 2 != iVar2) || (iVar6 * 2 != iVar1)) goto LAB_0116c891;
            if ((bVar3) && (2 < (uint)piVar9[1])) {
              *puVar10 = &LAB_0116cd70;
              *(undefined1 *)(puVar4 + 2) = 1;
            }
            else {
              *puVar10 = &LAB_0116cc10;
            }
          }
        }
        else {
LAB_0116c891:
          if ((iVar2 % iVar5 == 0) && (iVar1 % iVar6 == 0)) {
            *puVar10 = &LAB_0116ca80;
            *(char *)(iVar11 + 0x89 + (int)puVar4) = (char)(iVar2 / iVar5);
            *(char *)(iVar11 + 0x93 + (int)puVar4) = (char)(iVar1 / iVar6);
          }
          else {
            *(undefined4 *)(*param_1 + 0x14) = 0x25;
            (**(code **)*param_1)(param_1);
          }
        }
        uVar8 = *(undefined4 *)((int)param_1 + 0x13d);
        iVar1 = param_1[1];
        uVar7 = FUN_01167880(*(undefined4 *)((int)param_1 + 0x8e),
                             *(undefined4 *)((int)param_1 + 0x139));
        uVar8 = (**(code **)(iVar1 + 8))(param_1,1,uVar7,uVar8);
        puVar10[-10] = uVar8;
      }
      iVar11 = iVar11 + 1;
      puVar10 = puVar10 + 1;
      piVar9 = (int *)((int)piVar9 + 0x51);
    } while (iVar11 < *(int *)((int)param_1 + 0x5d));
  }
  return;
}


