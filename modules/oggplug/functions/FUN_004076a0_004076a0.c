/* Module: oggplug.dll
   Function: FUN_004076a0
   Address: 004076a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_004076a0(int *param_1)

{
  DWORD *pDVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  HGLOBAL hMem;
  undefined2 *puVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  undefined4 local_64;
  CHAR aCStack_60 [31];
  undefined1 uStack_41;
  WCHAR local_40 [32];
  
  if (param_1[3] != 0) {
    return (undefined4 *)0x0;
  }
  if (param_1[2] == 0) {
LAB_00407a73:
    puVar4 = (undefined4 *)0x8004e007;
  }
  else {
    pDVar1 = (DWORD *)(param_1 + 0xce);
    piVar3 = param_1 + 0xcd;
    param_1[0xd4] = 0;
    param_1[0xd2] = 1;
    param_1[0xd5] = 0;
    puVar4 = FUN_00409220((void *)param_1[9],piVar3,pDVar1);
    if (puVar4 == (undefined4 *)0x0) {
      if (*pDVar1 < 6) {
        FUN_004093c0(param_1[9]);
        *pDVar1 = 0;
        *piVar3 = 0;
        return (undefined4 *)0x8004e007;
      }
      if (*(int *)*piVar3 != DAT_00450158) {
        FUN_004093c0(param_1[9]);
        *pDVar1 = 0;
        *piVar3 = 0;
        return (undefined4 *)0x8004e007;
      }
      puVar5 = (undefined4 *)FUN_00441630(param_1 + 0x12,*pDVar1);
      uVar11 = *pDVar1;
      puVar4 = (undefined4 *)*piVar3;
      for (uVar10 = uVar11 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      FUN_004416b0((int)(param_1 + 0x12),param_1[0xce]);
      FUN_004093c0(param_1[9]);
      piVar2 = param_1 + 0x74;
      *piVar3 = 0;
      param_1[0xce] = 0;
      iVar6 = FUN_00441820(param_1 + 0x12,piVar2);
      if (iVar6 != 1) goto LAB_00407a73;
      piVar3 = param_1 + 0x1a;
      uVar7 = FUN_00440f10(piVar2);
      FUN_00440fa0(piVar3,uVar7);
      FUN_00430040(param_1 + 0x80);
      FUN_0042fc80(param_1 + 0x88);
      iVar6 = FUN_00441860(piVar3,piVar2);
      if (iVar6 < 0) {
        return (undefined4 *)0x8004e007;
      }
      iVar6 = FUN_00441bc0(piVar3,param_1 + 0x78);
      if (iVar6 != 1) {
        return (undefined4 *)0x8004e007;
      }
      iVar6 = FUN_004301e0((uint *)(param_1 + 0x80),param_1 + 0x88,param_1 + 0x78);
      if (iVar6 < 0) {
        return (undefined4 *)0x8004e007;
      }
      iVar6 = 0;
LAB_00407824:
      do {
        iVar8 = FUN_00441820(param_1 + 0x12,param_1 + 0x74);
        if (iVar8 != 0) {
          if (iVar8 == 1) {
            FUN_00441860(param_1 + 0x1a,param_1 + 0x74);
            do {
              iVar8 = FUN_00441bc0(param_1 + 0x1a,param_1 + 0x78);
              if (iVar8 == 0) goto LAB_00407885;
              if (iVar8 == -1) {
                return (undefined4 *)0x8004e007;
              }
              FUN_004301e0((uint *)(param_1 + 0x80),param_1 + 0x88,param_1 + 0x78);
              iVar6 = iVar6 + 1;
            } while (iVar6 < 2);
          }
          else {
LAB_00407885:
            if (iVar6 < 2) goto LAB_00407824;
          }
        }
        pDVar1 = (DWORD *)(param_1 + 0xce);
        puVar4 = FUN_00409220((void *)param_1[9],param_1 + 0xcd,pDVar1);
        if (puVar4 != (undefined4 *)0x0) {
          return (undefined4 *)0x8004e007;
        }
        puVar5 = (undefined4 *)FUN_00441630(param_1 + 0x12,*pDVar1);
        uVar11 = *pDVar1;
        puVar4 = (undefined4 *)param_1[0xcd];
        for (uVar10 = uVar11 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
        FUN_004416b0((int)(param_1 + 0x12),param_1[0xce]);
        FUN_004093c0(param_1[9]);
        param_1[0xcd] = 0;
        param_1[0xce] = 0;
      } while (iVar6 < 2);
      FUN_00431c30(param_1 + 0x8c,(int)(param_1 + 0x80));
      FUN_00430e80(param_1 + 0x8c,param_1 + 0xa8);
      hMem = GlobalAlloc(0x42,0x12);
      puVar9 = GlobalLock(hMem);
      param_1[6] = (int)puVar9;
      if (puVar9 == (undefined2 *)0x0) {
        return (undefined4 *)0x8007000e;
      }
      iVar6 = param_1[0x81];
      iVar8 = param_1[0x82];
      puVar9[1] = (short)iVar6;
      uVar11 = iVar6 * 2;
      puVar9[6] = (short)uVar11;
      *(uint *)(puVar9 + 4) = (uVar11 & 0xffff) * iVar8;
      *puVar9 = 1;
      *(int *)(puVar9 + 2) = iVar8;
      puVar9[7] = 0x10;
      puVar9[8] = 0;
      param_1[3] = 1;
      FUN_004075f0((int)param_1);
      param_1[0xd4] = 0;
      param_1[0xd5] = 0;
      local_64 = 0x20;
      puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x44))(param_1,0x4e454c54,local_40,&local_64);
      if ((int)puVar4 < 0) goto LAB_00407a2e;
      if ((&stack0x00000000 == (undefined1 *)0x40) || (local_40[0] != L'\0')) {
        WideCharToMultiByte(0,0,local_40,-1,aCStack_60,0x20,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      else if (&stack0x00000000 != (undefined1 *)0x60) {
        aCStack_60[0] = '\0';
      }
      uStack_41 = 0;
      uVar11 = FUN_0041a800(aCStack_60,0);
      lVar12 = __allmul(uVar11,0,10000,0);
      *(longlong *)(param_1 + 0xd4) = lVar12;
    }
    if (-1 < (int)puVar4) {
      return puVar4;
    }
  }
LAB_00407a2e:
  piVar3 = (int *)param_1[0xd7];
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))(piVar3,0x10,0,0);
  }
  return puVar4;
}


