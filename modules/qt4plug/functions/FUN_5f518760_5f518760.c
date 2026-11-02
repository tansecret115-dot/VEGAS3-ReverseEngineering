/* Module: qt4plug.dll
   Function: FUN_5f518760
   Address: 5f518760
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5f518b47) */
/* WARNING: Removing unreachable block (ram,0x5f518b7a) */
/* WARNING: Removing unreachable block (ram,0x5f518b91) */
/* WARNING: Removing unreachable block (ram,0x5f518bba) */
/* WARNING: Removing unreachable block (ram,0x5f518bd1) */
/* WARNING: Removing unreachable block (ram,0x5f518bfc) */
/* WARNING: Removing unreachable block (ram,0x5f518c13) */
/* WARNING: Removing unreachable block (ram,0x5f518c5d) */
/* WARNING: Removing unreachable block (ram,0x5f518c7a) */
/* WARNING: Removing unreachable block (ram,0x5f518cf3) */
/* WARNING: Removing unreachable block (ram,0x5f518cee) */
/* WARNING: Removing unreachable block (ram,0x5f518cf7) */
/* WARNING: Removing unreachable block (ram,0x5f518d07) */
/* WARNING: Removing unreachable block (ram,0x5f518d0c) */
/* WARNING: Removing unreachable block (ram,0x5f518d10) */
/* WARNING: Removing unreachable block (ram,0x5f518cfc) */
/* WARNING: Removing unreachable block (ram,0x5f518d00) */
/* WARNING: Removing unreachable block (ram,0x5f518d15) */
/* WARNING: Removing unreachable block (ram,0x5f518d1c) */
/* WARNING: Removing unreachable block (ram,0x5f518d20) */
/* WARNING: Removing unreachable block (ram,0x5f518d28) */
/* WARNING: Removing unreachable block (ram,0x5f518d65) */
/* WARNING: Removing unreachable block (ram,0x5f518d72) */

undefined4 FUN_5f518760(int param_1,undefined4 *param_2,int *param_3)

{
  short sVar1;
  int iVar2;
  HGLOBAL hMem;
  LPVOID pvVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iStack_28;
  uint uStack_24;
  undefined4 local_1c;
  undefined1 uStack_c;
  undefined1 uStack_b;
  
  local_1c = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x424) == 0) {
    return 0;
  }
  FUN_5f5781f0();
  iVar2 = FUN_5f5782f0();
  if ((((iVar2 == 0) || (sVar1 = FUN_5f5781b0(), sVar1 != 0)) || ((char)param_2 == '\0')) ||
     (iVar2 = FUN_5f5782f0(), iVar2 == 0)) {
    if (*(int *)(param_1 + 0x428) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x428) + 4) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x428) + 0x4c) = 0;
    }
  }
  else {
    iStack_28 = 0x1b;
    iVar2 = FUN_5f5782f0();
    if ((iVar2 != 0) && (sVar1 = FUN_5f5781b0(), sVar1 == 0)) {
      if (CONCAT11(uStack_c,uStack_b) == 0x20) {
        iStack_28 = 0x1c;
      }
    }
    if (*(int *)(param_1 + 0x428) == 0) {
      hMem = GlobalAlloc(0x42,0x98);
      pvVar3 = GlobalLock(hMem);
      *(LPVOID *)(param_1 + 0x428) = pvVar3;
    }
    iVar2 = FUN_5f5782f0();
    iVar4 = FUN_5f5782f0();
    if ((iVar2 == 0) || (iVar4 == 0)) {
      if (*(int *)(param_1 + 0x428) != 0) {
        puVar6 = *(undefined4 **)(*(int *)(param_1 + 0x428) + 0x48);
        if (puVar6 != (undefined4 *)0x0) {
          FUN_5f52ef30(puVar6,iStack_28,0,0,(uint *)0x0,0,(int *)0x0);
        }
        if ((undefined4 *)**(undefined4 **)(param_1 + 0x428) != (undefined4 *)0x0) {
          FUN_5f52ef30((undefined4 *)**(undefined4 **)(param_1 + 0x428),iStack_28,0,0,(uint *)0x0,0,
                       (int *)0x0);
        }
      }
    }
    else {
      FUN_5f5781b0();
      FUN_5f5781b0();
      if (*(int *)(param_1 + 0x428) == 0) {
        iVar2 = (**(code **)(*param_3 + 0x20))(param_3,0x42,0x98);
        *(int *)(param_1 + 0x428) = iVar2;
        if (iVar2 == 0) {
          FUN_5f578230();
          return 0x8007000e;
        }
      }
      puVar6 = *(undefined4 **)(*(int *)(param_1 + 0x428) + 0x48);
      if (puVar6 == (undefined4 *)0x0) {
        uVar5 = (**(code **)(*param_3 + 0x20))(param_3,0x42,0x28);
        *(undefined4 *)(*(int *)(param_1 + 0x428) + 0x48) = uVar5;
        puVar6 = *(undefined4 **)(*(int *)(param_1 + 0x428) + 0x48);
        if (puVar6 == (undefined4 *)0x0) {
          FUN_5f578230();
          return 0x8007000e;
        }
      }
      FUN_5f52ef30(puVar6,iStack_28,(uStack_24 & 0xff) << 8 | (uStack_24 & 0xffff) >> 8,
                   (uStack_24 & 0xff) << 8 | (uStack_24 & 0xffff) >> 8,(uint *)0x0,0,(int *)0x0);
      puVar6 = *(undefined4 **)(param_1 + 0x428);
      puVar9 = (undefined4 *)*puVar6;
      if (puVar9 == (undefined4 *)0x0) {
        uVar5 = (**(code **)(*param_3 + 0x20))(param_3,0x42,0x28);
        **(undefined4 **)(param_1 + 0x428) = uVar5;
        puVar6 = *(undefined4 **)(param_1 + 0x428);
        puVar9 = (undefined4 *)*puVar6;
        if (puVar9 == (undefined4 *)0x0) {
          FUN_5f578230();
          return 0x8007000e;
        }
      }
      puVar6 = (undefined4 *)puVar6[0x12];
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar9 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar9 = puVar9 + 1;
      }
    }
    if (*(int *)(param_1 + 0x428) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x428) + 4) = 1;
      *(undefined4 *)(*(int *)(param_1 + 0x428) + 0x4c) = 1;
      if (*(int *)(*(int *)(param_1 + 0x428) + 0x48) == 0) {
        uVar5 = (**(code **)(*param_3 + 0x20))(param_3,0x42,0x28);
        *(undefined4 *)(*(int *)(param_1 + 0x428) + 0x48) = uVar5;
        puVar6 = *(undefined4 **)(*(int *)(param_1 + 0x428) + 0x48);
        if (puVar6 == (undefined4 *)0x0) {
          FUN_5f578230();
          return 0x8007000e;
        }
        FUN_5f52ef30(puVar6,iStack_28,0,0,(uint *)0x0,0,(int *)0x0);
      }
      puVar6 = *(undefined4 **)(param_1 + 0x428);
      puVar9 = (undefined4 *)*puVar6;
      if (puVar9 == (undefined4 *)0x0) {
        uVar5 = (**(code **)(*param_3 + 0x20))(param_3,0x42,0x28);
        **(undefined4 **)(param_1 + 0x428) = uVar5;
        puVar6 = *(undefined4 **)(param_1 + 0x428);
        puVar9 = (undefined4 *)*puVar6;
        if (puVar9 == (undefined4 *)0x0) {
          FUN_5f578230();
          return 0x8007000e;
        }
      }
      puVar6 = (undefined4 *)puVar6[0x12];
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar9 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar9 = puVar9 + 1;
      }
    }
  }
  iVar2 = FUN_5f5782f0();
  if (iVar2 != 0) {
    FUN_5f5781b0();
  }
  *(undefined4 *)(*(int *)(param_1 + 0x424) + 0x12) = 0;
  uVar7 = FUN_5f57b3d0();
  if ((int)uVar7 < 1) goto LAB_5f518e1c;
  iVar2 = *(int *)(*(int *)(param_1 + 0x424) + 0x3e);
  if (iVar2 == 0) {
LAB_5f518dbc:
    iVar2 = (**(code **)(*param_3 + 0x20))(param_3,0x42,uVar7 + 0x14);
    if (iVar2 == 0) {
      local_1c = 0x8007000e;
      *(undefined4 *)(*(int *)(param_1 + 0x424) + 0x3e) = 0;
      goto LAB_5f518e1c;
    }
  }
  else {
    if (*(uint *)(iVar2 + 0x10) < uVar7) {
      (**(code **)(*param_3 + 0x24))(param_3,iVar2);
      goto LAB_5f518dbc;
    }
    if (iVar2 == 0) goto LAB_5f518e1c;
  }
  *(undefined4 *)(iVar2 + 0xc) = 1;
  *(uint *)(iVar2 + 0x10) = uVar7;
  puVar6 = (undefined4 *)*param_2;
  puVar9 = (undefined4 *)(iVar2 + 0x14);
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined1 *)puVar9 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  *(int *)(*(int *)(param_1 + 0x424) + 0x3e) = iVar2;
  *(uint *)(*(int *)(param_1 + 0x424) + 0x3a) = uVar7 + 0x14;
LAB_5f518e1c:
  FUN_5f578230();
  return local_1c;
}


