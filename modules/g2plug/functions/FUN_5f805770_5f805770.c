/* Module: g2plug.dll
   Function: FUN_5f805770
   Address: 5f805770
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f805770(int param_1,int param_2,LPCWSTR param_3,LPCWSTR param_4)

{
  LPSTR pCVar1;
  HGLOBAL pvVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  
  pvVar2 = GlobalAlloc(0x42,(*(int *)(param_1 + 0x423) + 1) * 0x328);
  puVar3 = GlobalLock(pvVar2);
  if (puVar3 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  if (*(undefined4 **)(param_1 + 0x41f) != (undefined4 *)0x0) {
    puVar6 = *(undefined4 **)(param_1 + 0x41f);
    puVar7 = puVar3;
    for (iVar5 = (*(int *)(param_1 + 0x423) * 0x65 & 0x1fffffffU) << 1; iVar5 != 0;
        iVar5 = iVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0x41f));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0x41f));
    GlobalFree(pvVar2);
  }
  *(undefined4 **)(param_1 + 0x41f) = puVar3;
  uVar8 = __alldiv(*(uint *)(param_2 + 4),*(uint *)(param_2 + 8),10000,0);
  puVar3[*(int *)(param_1 + 0x423) * 0xca] = (int)uVar8;
  if (param_3 != (LPCWSTR)0x0) {
    pCVar1 = (LPSTR)(puVar3 + *(int *)(param_1 + 0x423) * 0xca + 1);
    if (*param_3 == L'\0') {
      if (pCVar1 != (LPSTR)0x0) {
        *pCVar1 = '\0';
      }
    }
    else {
      WideCharToMultiByte(0,0,param_3,-1,pCVar1,0x20,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    pCVar1[0x1f] = '\0';
  }
  if (param_4 != (LPCWSTR)0x0) {
    iVar4 = FUN_5f806f90((LPCSTR)(puVar3 + *(int *)(param_1 + 0x423) * 0xca + 1),(undefined4 *)0x0);
    iVar5 = *(int *)(param_1 + 0x423);
    if (iVar4 == 0) {
      pCVar1 = (LPSTR)(puVar3 + iVar5 * 0xca + 9);
      if (*param_4 == L'\0') {
        if (pCVar1 != (LPSTR)0x0) {
          *pCVar1 = '\0';
        }
      }
      else {
        WideCharToMultiByte(0,0,param_4,-1,pCVar1,0x203,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      pCVar1[0x202] = '\0';
    }
    else {
      FUN_5f805920(param_4,*(SIZE_T *)(param_2 + 0x18),(uchar *)(puVar3 + iVar5 * 0xca + 9),
                   (uchar *)((int)puVar3 + iVar5 * 0x328 + 0x227));
      *(undefined4 *)(param_1 + 0x130) = 1;
    }
  }
  *(int *)(param_1 + 0x423) = *(int *)(param_1 + 0x423) + 1;
  return 0;
}


