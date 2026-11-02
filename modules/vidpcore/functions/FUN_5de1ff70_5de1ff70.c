/* Module: vidpcore.dll
   Function: FUN_5de1ff70
   Address: 5de1ff70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de1ff70(int param_1,undefined4 *param_2)

{
  int *piVar1;
  UINT UVar2;
  HRSRC hResInfo;
  HGLOBAL hResData;
  uint *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  LPCWSTR pWVar8;
  undefined4 *puVar9;
  CHAR local_12c [260];
  undefined1 local_28 [32];
  undefined4 local_8;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  hResInfo = FindResourceA(DAT_5df42788,&DAT_0000008f,&DAT_00000005);
  if (hResInfo != (HRSRC)0x0) {
    hResData = LoadResource(DAT_5df42788,hResInfo);
    puVar3 = LockResource(hResData);
    if (puVar3 != (uint *)0x0) {
      piVar1 = (int *)(param_1 + 0x10);
      if (*(short *)((int)puVar3 + 2) == -1) {
        uVar7 = puVar3[3];
      }
      else {
        uVar7 = *puVar3;
      }
      if ((uVar7 & 0x40) == 0) {
        FUN_5de0a5b0(puVar3,piVar1);
        uVar7 = GetDialogBaseUnits();
        iVar5 = MulDiv(*piVar1,uVar7 & 0xffff,4);
        *piVar1 = iVar5;
        iVar5 = MulDiv(*(int *)(param_1 + 0x14),uVar7 >> 0x10,8);
        *(int *)(param_1 + 0x14) = iVar5;
      }
      else {
        local_8 = 0;
        FUN_5de0a490(puVar3,local_28,&local_8);
        if (*(short *)((int)puVar3 + 2) == -1) {
          *piVar1 = (int)*(short *)((int)puVar3 + 0x16);
          *(int *)(param_1 + 0x14) = (int)(short)puVar3[6];
        }
        else {
          *piVar1 = (int)*(short *)((int)puVar3 + 0xe);
          *(int *)(param_1 + 0x14) = (int)(short)puVar3[4];
        }
        FUN_5de0a340(local_28,local_8,piVar1);
      }
      *param_2 = 0x1c;
      UVar2 = *(UINT *)(param_1 + 0x18);
      puVar4 = CoTaskMemAlloc(0x208);
      if (puVar4 != (undefined4 *)0x0) {
        *(undefined2 *)puVar4 = 0;
        iVar5 = LoadStringA(DAT_5df42788,UVar2,local_12c,0x104);
        if (iVar5 != 0) {
          if (&stack0x00000000 == &DAT_0000012c) {
            pWVar8 = (LPCWSTR)0x0;
          }
          else {
            pWVar8 = (LPCWSTR)&stack0xfffffec8;
            iVar5 = lstrlenA(local_12c);
            FUN_5df157d0();
            MultiByteToWideChar(0,0,local_12c,-1,(LPWSTR)&stack0xfffffec8,iVar5 + 1);
          }
          iVar5 = lstrlenW(pWVar8);
          uVar7 = iVar5 * 2 + 2;
          puVar9 = puVar4;
          for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar9 = *(undefined4 *)pWVar8;
            pWVar8 = pWVar8 + 2;
            puVar9 = puVar9 + 1;
          }
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(char *)puVar9 = (char)*pWVar8;
            pWVar8 = (LPCWSTR)((int)pWVar8 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
        }
      }
      param_2[1] = puVar4;
      param_2[2] = *(undefined4 *)(param_1 + 0x10);
      param_2[3] = *(undefined4 *)(param_1 + 0x14);
      UVar2 = *(UINT *)(param_1 + 0x1c);
      puVar4 = CoTaskMemAlloc(0x208);
      if (puVar4 != (undefined4 *)0x0) {
        *(undefined2 *)puVar4 = 0;
        iVar5 = LoadStringA(DAT_5df42788,UVar2,local_12c,0x104);
        if (iVar5 != 0) {
          if (&stack0x00000000 == &DAT_0000012c) {
            pWVar8 = (LPCWSTR)0x0;
          }
          else {
            pWVar8 = (LPCWSTR)&stack0xfffffec8;
            iVar5 = lstrlenA(local_12c);
            FUN_5df157d0();
            MultiByteToWideChar(0,0,local_12c,-1,(LPWSTR)&stack0xfffffec8,iVar5 + 1);
          }
          iVar5 = lstrlenW(pWVar8);
          uVar7 = iVar5 * 2 + 2;
          puVar9 = puVar4;
          for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar9 = *(undefined4 *)pWVar8;
            pWVar8 = pWVar8 + 2;
            puVar9 = puVar9 + 1;
          }
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(char *)puVar9 = (char)*pWVar8;
            pWVar8 = (LPCWSTR)((int)pWVar8 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
        }
      }
      param_2[5] = puVar4;
      UVar2 = *(UINT *)(param_1 + 0x20);
      puVar4 = CoTaskMemAlloc(0x208);
      if (puVar4 != (undefined4 *)0x0) {
        *(undefined2 *)puVar4 = 0;
        iVar5 = LoadStringA(DAT_5df42788,UVar2,local_12c,0x104);
        if (iVar5 != 0) {
          if (&stack0x00000000 == &DAT_0000012c) {
            pWVar8 = (LPCWSTR)0x0;
          }
          else {
            pWVar8 = (LPCWSTR)&stack0xfffffec8;
            iVar5 = lstrlenA(local_12c);
            FUN_5df157d0();
            MultiByteToWideChar(0,0,local_12c,-1,(LPWSTR)&stack0xfffffec8,iVar5 + 1);
          }
          iVar5 = lstrlenW(pWVar8);
          uVar7 = iVar5 * 2 + 2;
          puVar9 = puVar4;
          for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar9 = *(undefined4 *)pWVar8;
            pWVar8 = pWVar8 + 2;
            puVar9 = puVar9 + 1;
          }
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(char *)puVar9 = (char)*pWVar8;
            pWVar8 = (LPCWSTR)((int)pWVar8 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
        }
      }
      param_2[4] = puVar4;
      param_2[6] = *(undefined4 *)(param_1 + 0x24);
      return 0;
    }
    return 0x8000ffff;
  }
  return 0x8000ffff;
}


