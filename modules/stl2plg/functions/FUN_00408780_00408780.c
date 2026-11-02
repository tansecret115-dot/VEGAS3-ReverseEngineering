/* Module: stl2plg.dll
   Function: FUN_00408780
   Address: 00408780
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00408780(int *param_1)

{
  int iVar1;
  int iVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int unaff_retaddr;
  
  iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
  if (-1 < iVar2) {
    pvVar3 = GlobalAlloc(0x42,unaff_retaddr * 0x38);
    pvVar4 = GlobalLock(pvVar3);
    param_1[0x90] = (int)pvVar4;
    if (pvVar4 == (LPVOID)0x0) {
      return -0x7ff8fff2;
    }
    iVar2 = FUN_004083e0((int)param_1);
    if (-1 < iVar2) {
      *(undefined4 *)param_1[0x90] = 2;
      *(undefined4 *)(param_1[0x90] + 4) = 0;
      iVar5 = param_1[0x90];
      *(undefined4 *)(iVar5 + 0x28) = 0;
      *(undefined4 *)(iVar5 + 0x2c) = 0;
      iVar5 = param_1[0x90];
      *(undefined4 *)(iVar5 + 0x20) = 0;
      *(undefined4 *)(iVar5 + 0x24) = 0x3ff00000;
      iVar5 = param_1[0x90];
      *(undefined4 *)(iVar5 + 8) = 1;
      *(undefined4 *)(iVar5 + 0xc) = 0;
      iVar5 = param_1[0x90];
      *(undefined4 *)(iVar5 + 0x10) = 0;
      *(undefined4 *)(iVar5 + 0x14) = 0;
      piVar7 = (int *)param_1[6];
      if (piVar7[4] == 3) {
        iVar5 = 0xc;
      }
      else {
        iVar5 = piVar7[8] << 2;
      }
      pvVar3 = GlobalAlloc(0x42,iVar5 + *piVar7);
      pvVar4 = GlobalLock(pvVar3);
      *(LPVOID *)(param_1[0x90] + 0x18) = pvVar4;
      if (*(int **)(param_1[0x90] + 0x18) != (int *)0x0) {
        piVar7 = (int *)param_1[6];
        if (piVar7[4] == 3) {
          iVar5 = 0xc;
        }
        else {
          iVar5 = piVar7[8] << 2;
        }
        iVar1 = *piVar7;
        piVar8 = *(int **)(param_1[0x90] + 0x18);
        for (uVar6 = (uint)(iVar5 + iVar1) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *piVar8 = *piVar7;
          piVar7 = piVar7 + 1;
          piVar8 = piVar8 + 1;
        }
        for (uVar6 = iVar5 + iVar1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(char *)piVar8 = (char)*piVar7;
          piVar7 = (int *)((int)piVar7 + 1);
          piVar8 = (int *)((int)piVar8 + 1);
        }
        return iVar2;
      }
      iVar2 = -0x7ff8fff2;
    }
  }
  return iVar2;
}


