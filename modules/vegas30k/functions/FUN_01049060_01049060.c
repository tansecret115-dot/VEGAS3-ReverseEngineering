/* Module: vegas30k.dll
   Function: FUN_01049060
   Address: 01049060
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x01049509) */
/* WARNING: Removing unreachable block (ram,0x01049533) */
/* WARNING: Removing unreachable block (ram,0x0104953d) */
/* WARNING: Removing unreachable block (ram,0x01049544) */
/* WARNING: Removing unreachable block (ram,0x0104955d) */
/* WARNING: Removing unreachable block (ram,0x0104956a) */
/* WARNING: Removing unreachable block (ram,0x01049583) */
/* WARNING: Removing unreachable block (ram,0x0104958f) */
/* WARNING: Removing unreachable block (ram,0x010495a7) */
/* WARNING: Removing unreachable block (ram,0x010495bf) */
/* WARNING: Removing unreachable block (ram,0x01049618) */
/* WARNING: Removing unreachable block (ram,0x01049622) */
/* WARNING: Removing unreachable block (ram,0x0104963e) */
/* WARNING: Removing unreachable block (ram,0x0104966e) */
/* WARNING: Removing unreachable block (ram,0x0104967a) */
/* WARNING: Removing unreachable block (ram,0x01049684) */
/* WARNING: Removing unreachable block (ram,0x0104968c) */
/* WARNING: Removing unreachable block (ram,0x0104969c) */
/* WARNING: Removing unreachable block (ram,0x010496d2) */
/* WARNING: Removing unreachable block (ram,0x010496e6) */
/* WARNING: Removing unreachable block (ram,0x010496f4) */
/* WARNING: Removing unreachable block (ram,0x01049298) */
/* WARNING: Removing unreachable block (ram,0x010492a2) */
/* WARNING: Removing unreachable block (ram,0x010492a9) */
/* WARNING: Removing unreachable block (ram,0x010492c2) */
/* WARNING: Removing unreachable block (ram,0x010492cf) */
/* WARNING: Removing unreachable block (ram,0x010492e8) */
/* WARNING: Removing unreachable block (ram,0x010491bc) */
/* WARNING: Removing unreachable block (ram,0x010491c3) */
/* WARNING: Removing unreachable block (ram,0x010491dc) */
/* WARNING: Removing unreachable block (ram,0x01049206) */
/* WARNING: Removing unreachable block (ram,0x01049212) */
/* WARNING: Removing unreachable block (ram,0x0104926b) */
/* WARNING: Removing unreachable block (ram,0x0104927c) */
/* WARNING: Removing unreachable block (ram,0x01049707) */
/* WARNING: Removing unreachable block (ram,0x01049715) */
/* WARNING: Removing unreachable block (ram,0x01049737) */
/* WARNING: Removing unreachable block (ram,0x0104971b) */
/* WARNING: Removing unreachable block (ram,0x0104973d) */
/* WARNING: Removing unreachable block (ram,0x0104974a) */
/* WARNING: Removing unreachable block (ram,0x0104975f) */
/* WARNING: Removing unreachable block (ram,0x0104976f) */
/* WARNING: Removing unreachable block (ram,0x01049787) */
/* WARNING: Removing unreachable block (ram,0x010497a9) */

undefined4 FUN_01049060(undefined4 param_1,int param_2,int *param_3)

{
  LPCVOID pvVar1;
  uint uVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  uint unaff_EDI;
  SIZE_T dwBytes;
  
  (**(code **)(*param_3 + 0xc))();
  (**(code **)(*param_3 + 0xc))();
  uVar2 = *(uint *)(param_2 + 4) & 0xff000000;
  if (((unaff_EDI & 0xff000000) < uVar2) || (0x1000000 < uVar2)) {
    return 0x8004e00b;
  }
  (**(code **)(*param_3 + 0xc))();
  (**(code **)(*param_3 + 0xc))();
  (**(code **)(*param_3 + 0xc))();
  (**(code **)(*param_3 + 0xc))();
  (**(code **)(*param_3 + 0xc))();
  (**(code **)(*param_3 + 0xc))();
  if (param_3 == (int *)0x0) {
    *(undefined4 *)(*(int *)(param_2 + 0x424) + 0x16) = 0;
  }
  else {
    pvVar3 = GlobalAlloc(0x42,(SIZE_T)param_3);
    pvVar4 = GlobalLock(pvVar3);
    *(LPVOID *)(*(int *)(param_2 + 0x424) + 0x16) = pvVar4;
    if (*(int *)(*(int *)(param_2 + 0x424) + 0x16) == 0) {
      return 0x8007000e;
    }
    (**(code **)(*param_3 + 0xc))();
  }
  (**(code **)(*param_3 + 0xc))();
  (**(code **)(*param_3 + 0xc))();
  pvVar1 = *(LPCVOID *)(*(int *)(param_2 + 0x424) + 0x3e);
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(*(LPCVOID *)(*(int *)(param_2 + 0x424) + 0x3e));
    GlobalFree(pvVar3);
    *(undefined4 *)(*(int *)(param_2 + 0x424) + 0x3e) = 0;
    *(undefined4 *)(*(int *)(param_2 + 0x424) + 0x3a) = 0;
  }
  dwBytes = 0;
  (**(code **)(*param_3 + 0xc))();
  (**(code **)(*param_3 + 0xc))();
  if (dwBytes == 0) {
    if (*(int *)(param_2 + 0x424) != 0) {
      pvVar1 = *(LPCVOID *)(*(int *)(param_2 + 0x424) + 0x16);
      if (pvVar1 != (LPCVOID)0x0) {
        pvVar3 = GlobalHandle(pvVar1);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(*(LPCVOID *)(*(int *)(param_2 + 0x424) + 0x16));
        GlobalFree(pvVar3);
      }
      pvVar1 = *(LPCVOID *)(*(int *)(param_2 + 0x424) + 0x3e);
      if (pvVar1 != (LPCVOID)0x0) {
        pvVar3 = GlobalHandle(pvVar1);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(*(LPCVOID *)(*(int *)(param_2 + 0x424) + 0x3e));
        GlobalFree(pvVar3);
      }
    }
    return 0x8000ffff;
  }
  pvVar3 = GlobalAlloc(0x42,dwBytes);
  pvVar4 = GlobalLock(pvVar3);
  **(undefined4 **)(param_2 + 0x428) = pvVar4;
  if (**(int **)(param_2 + 0x428) == 0) {
    if (*(int *)(param_2 + 0x424) != 0) {
      pvVar1 = *(LPCVOID *)(*(int *)(param_2 + 0x424) + 0x16);
      if (pvVar1 != (LPCVOID)0x0) {
        pvVar3 = GlobalHandle(pvVar1);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(*(LPCVOID *)(*(int *)(param_2 + 0x424) + 0x16));
        GlobalFree(pvVar3);
      }
      pvVar1 = *(LPCVOID *)(*(int *)(param_2 + 0x424) + 0x3e);
      if (pvVar1 != (LPCVOID)0x0) {
        pvVar3 = GlobalHandle(pvVar1);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(*(LPCVOID *)(*(int *)(param_2 + 0x424) + 0x3e));
        GlobalFree(pvVar3);
      }
    }
    return 0x8007000e;
  }
  (**(code **)(*param_3 + 0xc))();
  (**(code **)(*param_3 + 0xc))();
  (**(code **)(*param_3 + 0xc))();
  (**(code **)(*param_3 + 0xc))();
  if (*(int *)(param_2 + 0x424) != 0) {
    pvVar1 = *(LPCVOID *)(*(int *)(param_2 + 0x424) + 0x16);
    if (pvVar1 != (LPCVOID)0x0) {
      pvVar3 = GlobalHandle(pvVar1);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(*(LPCVOID *)(*(int *)(param_2 + 0x424) + 0x16));
      GlobalFree(pvVar3);
    }
    pvVar1 = *(LPCVOID *)(*(int *)(param_2 + 0x424) + 0x3e);
    if (pvVar1 != (LPCVOID)0x0) {
      pvVar3 = GlobalHandle(pvVar1);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(*(LPCVOID *)(*(int *)(param_2 + 0x424) + 0x3e));
      GlobalFree(pvVar3);
    }
  }
  if ((LPCVOID)**(undefined4 **)(param_2 + 0x428) != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle((LPCVOID)**(undefined4 **)(param_2 + 0x428));
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle((LPCVOID)**(undefined4 **)(param_2 + 0x428));
    GlobalFree(pvVar3);
  }
  **(undefined4 **)(param_2 + 0x428) = 0;
  return 0x8000ffff;
}


