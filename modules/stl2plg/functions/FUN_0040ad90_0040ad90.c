/* Module: stl2plg.dll
   Function: FUN_0040ad90
   Address: 0040ad90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0040ad90(int *param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int unaff_retaddr;
  
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  if (-1 < iVar1) {
    pvVar2 = GlobalAlloc(0x42,unaff_retaddr * 0x38);
    pvVar3 = GlobalLock(pvVar2);
    param_1[0x97] = (int)pvVar3;
    if (pvVar3 == (LPVOID)0x0) {
      return -0x7ff8fff2;
    }
    iVar1 = FUN_0040a980((int)param_1);
    if (-1 < iVar1) {
      *(undefined4 *)param_1[0x97] = 2;
      *(undefined4 *)(param_1[0x97] + 4) = 0;
      iVar4 = param_1[0x97];
      *(undefined4 *)(iVar4 + 0x28) = 0;
      *(undefined4 *)(iVar4 + 0x2c) = 0;
      iVar4 = param_1[0x97];
      *(undefined4 *)(iVar4 + 0x20) = 0;
      *(undefined4 *)(iVar4 + 0x24) = 0x3ff00000;
      iVar4 = param_1[0x97];
      *(undefined4 *)(iVar4 + 8) = 1;
      *(undefined4 *)(iVar4 + 0xc) = 0;
      iVar4 = param_1[0x97];
      *(undefined4 *)(iVar4 + 0x10) = 0;
      *(undefined4 *)(iVar4 + 0x14) = 0;
      if (param_1[9] == 3) {
        iVar4 = 0xc;
      }
      else {
        iVar4 = param_1[0xd] << 2;
      }
      pvVar2 = GlobalAlloc(0x42,param_1[5] + iVar4);
      pvVar3 = GlobalLock(pvVar2);
      *(LPVOID *)(param_1[0x97] + 0x18) = pvVar3;
      if (*(int **)(param_1[0x97] + 0x18) != (int *)0x0) {
        piVar5 = param_1 + 5;
        piVar6 = *(int **)(param_1[0x97] + 0x18);
        for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar6 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar6 = piVar6 + 1;
        }
        return iVar1;
      }
      iVar1 = -0x7ff8fff2;
    }
  }
  return iVar1;
}


