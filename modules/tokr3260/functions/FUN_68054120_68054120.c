/* Module: tokr3260.dll
   Function: FUN_68054120
   Address: 68054120
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_68054120(int param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint local_101c [1023];
  undefined4 uStackY_20;
  int iVar11;
  
  puVar9 = param_3;
  FUN_6805a6a0();
  puVar8 = *(uint **)(param_1 + 8);
  iVar7 = *(int *)(param_1 + 4);
  iVar1 = *(int *)(param_1 + 0x10);
  iVar3 = ((int)puVar8 + -1 + (int)param_3) / (int)puVar8;
  iVar4 = 0;
  if (0 < (int)param_3) {
    puVar10 = local_101c;
    do {
      iVar4 = iVar4 + (int)puVar8;
      puVar5 = param_3;
      if (iVar4 <= (int)puVar9) {
        puVar5 = puVar8;
      }
      uStackY_20 = 0x68054195;
      puVar8 = param_2;
      iVar11 = iVar7;
      uVar6 = FUN_68057660(param_2,(int)puVar5,iVar7);
      param_3 = (uint *)((int)param_3 + iVar11);
      *puVar10 = uVar6;
      param_2 = (uint *)((int)param_2 + (int)puVar5);
      puVar10 = puVar10 + 1;
    } while (iVar4 < (int)puVar9);
  }
  iVar7 = 0;
  if (iVar1 == 1) {
    if (0 < iVar3) {
      puVar8 = local_101c;
      do {
        uVar6 = *puVar8;
        puVar8 = puVar8 + 1;
        iVar7 = iVar7 + *(int *)(*(int *)(param_1 + 0x1c) + 4 + uVar6 * 8);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      return iVar7;
    }
  }
  else if (iVar1 < 2) {
    iVar7 = -999999;
  }
  else {
    param_3 = (uint *)0x0;
    if (0 < iVar3) {
      puVar8 = local_101c;
      do {
        bVar2 = false;
        iVar4 = 0;
        puVar9 = puVar8;
        if (0 < iVar1) {
          do {
            if (*puVar9 != 0) {
              bVar2 = true;
              break;
            }
            iVar4 = iVar4 + 1;
            puVar9 = puVar9 + 1;
          } while (iVar4 < iVar1);
        }
        if (bVar2) {
          iVar7 = iVar7 + 1;
          if (0 < iVar1) {
            puVar9 = puVar8;
            iVar4 = iVar1;
            do {
              uVar6 = *puVar9;
              puVar9 = puVar9 + 1;
              iVar7 = iVar7 + *(int *)(*(int *)(param_1 + 0x1c) + 4 + uVar6 * 8);
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
        }
        else {
          iVar7 = iVar7 + 1;
        }
        param_3 = (uint *)((int)param_3 + iVar1);
        puVar8 = puVar8 + iVar1;
        if (iVar3 <= (int)param_3) {
          return iVar7;
        }
      } while( true );
    }
  }
  return iVar7;
}


