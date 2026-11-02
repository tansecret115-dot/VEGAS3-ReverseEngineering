/* Module: aviplug.dll
   Function: FUN_5f940d10
   Address: 5f940d10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f940d10(SIZE_T param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  SIZE_T SVar7;
  BOOL BVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  LONG local_4;
  
  puVar5 = param_2;
  if ((param_1 == 0) || (param_2 == (undefined4 *)0x0)) {
    return -0x7fffbffd;
  }
  piVar1 = param_2 + 3;
  if ((((int *)*piVar1 != (int *)0x0) && (*(int *)(param_1 + 0x94) != -1)) &&
     (*(int *)(param_1 + 8) == 0)) {
    param_2 = (undefined4 *)0x0;
    iVar3 = *(int *)*piVar1;
    if ((iVar3 == 0) || (puVar5[2] == 0)) {
      param_1 = 1;
      SVar7 = param_1;
    }
    else {
      uVar9 = *(uint *)(puVar5[2] + 4);
      puVar2 = (undefined4 *)((uVar9 & 1) + 8 + uVar9);
      uVar9 = *(int *)(*(int *)(param_1 + 0x34) + 4) + iVar3 * 0x10 + 0x18 + (int)puVar2;
      iVar6 = *(int *)(param_1 + 0x7c) + (uint)CARRY4(uVar9,*(uint *)(param_1 + 0x78));
      if ((*(int *)(param_1 + 0x8c) < iVar6) ||
         ((*(int *)(param_1 + 0x8c) <= iVar6 &&
          (*(uint *)(param_1 + 0x88) <= uVar9 + *(uint *)(param_1 + 0x78))))) {
        return -0x7ffb1fc6;
      }
      SVar7 = FUN_5f93ffa0(param_1,iVar3 + 1);
      if (-1 < (int)SVar7) {
        local_4 = *(LONG *)(param_1 + 0x7c);
        SetFilePointer(*(HANDLE *)(param_1 + 0x94),*(LONG *)(param_1 + 0x78),&local_4,0);
        BVar8 = WriteFile(*(HANDLE *)(param_1 + 0x94),(LPCVOID)*puVar5,(DWORD)puVar2,
                          (LPDWORD)&param_2,(LPOVERLAPPED)0x0);
        if ((BVar8 != 0) && (puVar2 <= param_2)) {
          *(int *)(*(int *)(param_1 + 0x30) + 4) =
               *(int *)(*(int *)(param_1 + 0x30) + 4) + (int)param_2;
          iVar6 = 0;
          *(int *)(*(int *)(param_1 + 0x28) + 4) =
               *(int *)(*(int *)(param_1 + 0x28) + 4) + (int)param_2;
          FUN_5f940130(param_1,0x20636572,*(undefined4 *)(puVar5[2] + 4),0,1);
          uVar9 = *(uint *)(param_1 + 0x78);
          *(uint *)(param_1 + 0x78) = uVar9 + 0xc;
          *(uint *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + (uint)(0xfffffff3 < uVar9);
          if (0 < iVar3) {
            do {
              iVar4 = *(int *)(puVar5[3] + 8);
              iVar11 = *(int *)(puVar5[3] + 4) * iVar6;
              puVar2 = *(undefined4 **)(iVar11 + 0xc + iVar4);
              piVar12 = (int *)(iVar11 + iVar4);
              FUN_5f940130(param_1,*puVar2,puVar2[1],*(int *)(iVar11 + 8 + iVar4),0);
              uVar9 = *(uint *)(param_1 + 0x78);
              *(uint *)(param_1 + 0x78) = uVar9 + 8;
              *(uint *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + (uint)(0xfffffff7 < uVar9);
              uVar10 = (*(uint *)(piVar12[3] + 4) & 1) + *(uint *)(piVar12[3] + 4);
              uVar9 = *(uint *)(param_1 + 0x78);
              *(uint *)(param_1 + 0x78) = uVar9 + uVar10;
              *(uint *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + (uint)CARRY4(uVar9,uVar10);
              piVar12[4] = *(int *)(param_1 + 0x78);
              piVar12[5] = *(int *)(param_1 + 0x7c);
              iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 8);
              iVar11 = *(int *)(*(int *)(param_1 + 0x40) + 4) * *piVar12;
              piVar1 = (int *)(*(int *)(iVar11 + iVar4) + 0x28);
              *piVar1 = *piVar1 + piVar12[1];
              iVar4 = *(int *)(iVar11 + iVar4);
              uVar9 = (*(uint *)(piVar12[3] + 4) & 1) + 8 + *(uint *)(piVar12[3] + 4);
              uVar10 = *(uint *)(iVar4 + 0x2c);
              if (uVar9 < uVar10) {
                uVar9 = uVar10;
              }
              *(uint *)(iVar4 + 0x2c) = uVar9;
              if (*piVar12 == *(int *)(param_1 + 0x44)) {
                *(int *)(*(int *)(param_1 + 0x1c) + 0x18) =
                     *(int *)(*(int *)(param_1 + 0x1c) + 0x18) + piVar12[1];
                *(uint *)(*(int *)(param_1 + 0x1c) + 0x24) = uVar9;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < iVar3);
          }
          *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) | 1;
          return SVar7;
        }
        if (param_2 != (undefined4 *)0x0) {
          local_4 = *(LONG *)(param_1 + 0x7c);
          SetFilePointer(*(HANDLE *)(param_1 + 0x94),*(LONG *)(param_1 + 0x78),&local_4,0);
          SetEndOfFile(*(HANDLE *)(param_1 + 0x94));
        }
        return -0x7ffb1ff7;
      }
    }
    param_1 = SVar7;
    return param_1;
  }
  return -0x7fff0001;
}


