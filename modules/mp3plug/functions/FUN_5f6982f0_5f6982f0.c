/* Module: mp3plug.dll
   Function: FUN_5f6982f0
   Address: 5f6982f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f6982f0(void *this,int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  char cVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  DWORD *pDVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *local_8;
  
  if (*param_2 == 0) {
    pvVar3 = GlobalAlloc(0x42,0x1000);
    pvVar4 = GlobalLock(pvVar3);
    *param_2 = (int)pvVar4;
    if (param_2 == (int *)0x0) {
      return (undefined4 *)0x8007000e;
    }
    *param_3 = 0x1000;
  }
  local_8 = (undefined4 *)0x0;
  uVar8 = 0;
  do {
    if (param_1[3] == 0) {
      piVar1 = (int *)((int)this + 0x7c);
      FUN_5f697b30(*(int *)((int)this + 0x24));
      pDVar9 = (DWORD *)((int)this + 0x80);
      *piVar1 = 0;
      *pDVar9 = 0;
      local_8 = FUN_5f697990(*(void **)((int)this + 0x24),piVar1,pDVar9);
      if ((int)local_8 < 0) {
        if (*(char *)*param_2 == '\0') {
          return (undefined4 *)0x8004e008;
        }
        ((char *)*param_2)[uVar8] = '\0';
        return local_8;
      }
      *param_1 = *piVar1;
      if ((int)*pDVar9 < 1) {
        return (undefined4 *)0x1;
      }
      param_1[2] = 0;
      param_1[3] = *pDVar9;
    }
    cVar2 = *(char *)(*param_1 + param_1[2]);
    if (cVar2 == 0xff) {
      *(undefined1 *)(*param_2 + uVar8) = 0;
      return (undefined4 *)0x0;
    }
    uVar11 = uVar8;
    if ((cVar2 == '\n') || (cVar2 == '\0')) {
      param_1[2] = param_1[2] + 1;
      param_1[3] = param_1[3] + -1;
      if (uVar8 != 0) {
        *(undefined1 *)(*param_2 + uVar8) = 0;
        return (undefined4 *)0x0;
      }
    }
    else {
      iVar5 = iscntrl((int)cVar2);
      if (iVar5 == 0) {
        uVar11 = uVar8 + 1;
        *(undefined1 *)(*param_2 + -1 + uVar11) = *(undefined1 *)(*param_1 + param_1[2]);
        if (*param_3 <= (int)uVar11) {
          pvVar3 = GlobalAlloc(0x42,*param_3 * 2);
          puVar6 = GlobalLock(pvVar3);
          if (puVar6 == (undefined4 *)0x0) {
            return (undefined4 *)0x8007000e;
          }
          puVar10 = (undefined4 *)*param_2;
          puVar12 = puVar6;
          for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar12 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar12 = puVar12 + 1;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
            puVar10 = (undefined4 *)((int)puVar10 + 1);
            puVar12 = (undefined4 *)((int)puVar12 + 1);
          }
          pvVar3 = GlobalHandle((LPCVOID)*param_2);
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle((LPCVOID)*param_2);
          GlobalFree(pvVar3);
          *param_2 = (int)puVar6;
          *param_3 = *param_3 << 1;
        }
      }
    }
    if (0 < param_1[3]) {
      param_1[2] = param_1[2] + 1;
      param_1[3] = param_1[3] + -1;
    }
    uVar8 = uVar11;
  } while (-1 < (int)local_8);
  return local_8;
}


