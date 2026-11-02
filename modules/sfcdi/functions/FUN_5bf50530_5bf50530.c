/* Module: sfcdi.dll
   Function: FUN_5bf50530
   Address: 5bf50530
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf50530(int param_1,LPVOID param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  HANDLE pvVar4;
  uint uVar5;
  BOOL BVar6;
  int iVar7;
  undefined4 *puVar8;
  DWORD local_8;
  undefined4 local_4;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  iVar3 = *(int *)(param_1 + 0x20);
  local_4 = 0;
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  if ((iVar3 < 0) || (iVar2 + -1 < iVar3)) {
    iVar3 = 0;
  }
  else {
    iVar3 = piVar1[1] * iVar3 + piVar1[2];
  }
  iVar7 = 0;
  iVar2 = *(int *)(*(int *)(*(int *)(iVar3 + 0x14) + 0x34c) + 8);
  if (iVar2 == 0) {
    *param_4 = 0;
    return 0;
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    pvVar4 = CreateFileA((LPCSTR)(*(int *)(iVar3 + 0x14) + 0x224),0x80000000,1,
                         (LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    *(HANDLE *)(param_1 + 0x38) = pvVar4;
    if (pvVar4 == (HANDLE)0xffffffff) {
      *param_4 = 0;
      return 0x8004e007;
    }
  }
  while( true ) {
    uVar5 = iVar2 - *(int *)(param_1 + 0x40);
    if (0x91b < uVar5) {
      uVar5 = 0x91c;
    }
    BVar6 = ReadFile(*(HANDLE *)(param_1 + 0x38),param_2,uVar5,&local_8,(LPOVERLAPPED)0x0);
    if ((BVar6 == 0) || (local_8 != uVar5)) break;
    iVar3 = *(int *)(param_1 + 0x40) + local_8;
    iVar7 = iVar7 + local_8;
    param_2 = (LPVOID)((int)param_2 + 0x91c);
    param_3 = param_3 + -0x91c;
    *(int *)(param_1 + 0x40) = iVar3;
    if ((param_3 == 0) || (iVar3 == iVar2)) goto LAB_5bf5061e;
  }
  local_4 = 0x8004e008;
LAB_5bf5061e:
  if (*(int *)(param_1 + 0x40) != iVar2) {
    *param_4 = iVar7;
    return 1;
  }
  if (local_8 != 0x91c) {
    puVar8 = (undefined4 *)(local_8 + (int)param_2);
    for (uVar5 = 0x91c - local_8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = 0x91c - local_8 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar8 = 0;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    iVar7 = iVar7 + (0x91c - local_8);
  }
  CloseHandle(*(HANDLE *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *param_4 = iVar7;
  return local_4;
}


