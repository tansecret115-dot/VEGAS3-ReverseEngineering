/* Module: vidcap30.exe
   Function: FUN_004171c0
   Address: 004171c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004171c0(LPCSTR param_1,undefined4 *param_2)

{
  bool bVar1;
  HANDLE hObject;
  int iVar2;
  HGLOBAL pvVar3;
  uint *pMem;
  int iVar4;
  uint *puVar5;
  bool bVar6;
  int unaff_EBX;
  int *unaff_EBP;
  int *piVar7;
  HANDLE unaff_ESI;
  int *unaff_EDI;
  int *piVar8;
  WCHAR *pWVar9;
  int iStack_228;
  undefined1 auStack_21c [4];
  HANDLE local_218;
  WCHAR local_208 [250];
  int *piStack_14;
  int iStack_10;
  undefined2 local_2;
  
  bVar6 = false;
  *param_2 = 1;
  hObject = CreateFileA(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hObject == (HANDLE)0xffffffff) {
    *param_2 = 0xb;
    return 0;
  }
  local_218 = hObject;
  iVar2 = FUN_0042e540(hObject);
  if (iVar2 != 0) {
    *param_2 = 6;
    CloseHandle(hObject);
    return 0;
  }
  iVar2 = FUN_004174b0();
  if (iVar2 != 0) {
    CloseHandle(hObject);
    iVar2 = _SfSelfRegister_IsSupported_4();
    if (-1 < iVar2) {
      *param_2 = 7;
    }
    return 0;
  }
  MultiByteToWideChar(0,1,param_1,-1,local_208,0x104);
  pWVar9 = local_208;
  local_2 = 0;
  piVar7 = DAT_005bba6c;
  iVar2 = (**(code **)(*DAT_005bba6c + 0x58))();
  if (iVar2 < 0) {
    CloseHandle(hObject);
    return iVar2;
  }
  (**(code **)(*unaff_EBP + 0x38))(unaff_EBP,auStack_21c);
  iVar2 = (**(code **)(*unaff_EDI + 0x3c))(unaff_EDI,&stack0xfffffdc4);
  if (-1 < iVar2) {
    iVar2 = 0;
    bVar1 = false;
    pvVar3 = GlobalAlloc(0x42,(int)piVar7 * 0x2c);
    pMem = GlobalLock(pvVar3);
    piVar8 = piVar7;
    if (pMem != (uint *)0x0) {
      iVar4 = (**(code **)(*(int *)pWVar9 + 0x44))(pWVar9,pMem,0,piVar7);
      piVar8 = piVar7;
      if (-1 < iVar4) {
        iVar4 = 0;
        puVar5 = pMem;
        if (0 < (int)piVar7) {
          do {
            if ((*puVar5 & 1) == 0) {
              if ((*puVar5 & 2) == 0) goto LAB_0041733e;
              iVar2 = 1;
LAB_00417346:
              if (bVar6) break;
            }
            else {
              bVar1 = true;
              bVar6 = true;
LAB_0041733e:
              if (iVar2 != 0) goto LAB_00417346;
            }
            iVar4 = iVar4 + 1;
            puVar5 = puVar5 + 0xb;
          } while (iVar4 < (int)piVar7);
        }
        *piStack_14 = 2;
        if (iVar2 == 0) {
          if (bVar6) {
            *piStack_14 = 3;
          }
        }
        else {
          *piStack_14 = bVar6 + 4;
        }
        iVar4 = 0;
        hObject = unaff_ESI;
        bVar6 = bVar1;
        if (0 < (int)piVar7) {
          puVar5 = pMem + 4;
          do {
            if ((LPCVOID)puVar5[-3] != (LPCVOID)0x0) {
              pvVar3 = GlobalHandle((LPCVOID)puVar5[-3]);
              GlobalUnlock(pvVar3);
              pvVar3 = GlobalHandle((LPCVOID)puVar5[-3]);
              piVar7 = piVar8;
              GlobalFree(pvVar3);
              piVar8 = piVar7;
            }
            if ((LPCVOID)*puVar5 != (LPCVOID)0x0) {
              pvVar3 = GlobalHandle((LPCVOID)*puVar5);
              GlobalUnlock(pvVar3);
              pvVar3 = GlobalHandle((LPCVOID)*puVar5);
              piVar7 = piVar8;
              GlobalFree(pvVar3);
              piVar8 = piVar7;
            }
            iVar4 = iVar4 + 1;
            puVar5 = puVar5 + 0xb;
          } while (iVar4 < (int)piVar7);
        }
      }
      pvVar3 = GlobalHandle(pMem);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(pMem);
      GlobalFree(pvVar3);
    }
    *(int **)(iStack_10 + 0x234) = piVar8;
    *(undefined4 *)(iStack_10 + 0x230) = 0xffffffff;
    *(undefined4 *)(iStack_10 + 0x238) = 0;
    if (iVar2 != 0) {
      *(undefined4 *)(iStack_10 + 0x238) = 2;
    }
    if (bVar6) {
      *(uint *)(iStack_10 + 0x238) = *(uint *)(iStack_10 + 0x238) | 1;
    }
    if ((((*(byte *)(iStack_10 + 0x218) & 8) == 0) && (-1 < iStack_228)) &&
       ((0 < iStack_228 || (unaff_EBX != 0)))) {
      *(int *)(iStack_10 + 0x228) = unaff_EBX;
      *(int *)(iStack_10 + 0x22c) = iStack_228;
    }
  }
  (**(code **)(*(int *)pWVar9 + 8))(pWVar9);
  CloseHandle(hObject);
  return 0;
}


