/* Module: g2plug.dll
   Function: FUN_5f83a2a0
   Address: 5f83a2a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5f83a749) */
/* WARNING: Removing unreachable block (ram,0x5f83a773) */
/* WARNING: Removing unreachable block (ram,0x5f83a77d) */
/* WARNING: Removing unreachable block (ram,0x5f83a784) */
/* WARNING: Removing unreachable block (ram,0x5f83a79d) */
/* WARNING: Removing unreachable block (ram,0x5f83a7aa) */
/* WARNING: Removing unreachable block (ram,0x5f83a7c3) */
/* WARNING: Removing unreachable block (ram,0x5f83a7cf) */
/* WARNING: Removing unreachable block (ram,0x5f83a7e7) */
/* WARNING: Removing unreachable block (ram,0x5f83a7ff) */
/* WARNING: Removing unreachable block (ram,0x5f83a858) */
/* WARNING: Removing unreachable block (ram,0x5f83a862) */
/* WARNING: Removing unreachable block (ram,0x5f83a87e) */
/* WARNING: Removing unreachable block (ram,0x5f83a8ae) */
/* WARNING: Removing unreachable block (ram,0x5f83a8ba) */
/* WARNING: Removing unreachable block (ram,0x5f83a8c4) */
/* WARNING: Removing unreachable block (ram,0x5f83a8cc) */
/* WARNING: Removing unreachable block (ram,0x5f83a8dc) */
/* WARNING: Removing unreachable block (ram,0x5f83a912) */
/* WARNING: Removing unreachable block (ram,0x5f83a926) */
/* WARNING: Removing unreachable block (ram,0x5f83a934) */
/* WARNING: Removing unreachable block (ram,0x5f83a4d8) */
/* WARNING: Removing unreachable block (ram,0x5f83a4e2) */
/* WARNING: Removing unreachable block (ram,0x5f83a4e9) */
/* WARNING: Removing unreachable block (ram,0x5f83a502) */
/* WARNING: Removing unreachable block (ram,0x5f83a50f) */
/* WARNING: Removing unreachable block (ram,0x5f83a528) */
/* WARNING: Removing unreachable block (ram,0x5f83a3fc) */
/* WARNING: Removing unreachable block (ram,0x5f83a403) */
/* WARNING: Removing unreachable block (ram,0x5f83a41c) */
/* WARNING: Removing unreachable block (ram,0x5f83a446) */
/* WARNING: Removing unreachable block (ram,0x5f83a452) */
/* WARNING: Removing unreachable block (ram,0x5f83a4ab) */
/* WARNING: Removing unreachable block (ram,0x5f83a4bc) */
/* WARNING: Removing unreachable block (ram,0x5f83a947) */
/* WARNING: Removing unreachable block (ram,0x5f83a955) */
/* WARNING: Removing unreachable block (ram,0x5f83a977) */
/* WARNING: Removing unreachable block (ram,0x5f83a95b) */
/* WARNING: Removing unreachable block (ram,0x5f83a97d) */
/* WARNING: Removing unreachable block (ram,0x5f83a98a) */
/* WARNING: Removing unreachable block (ram,0x5f83a99f) */
/* WARNING: Removing unreachable block (ram,0x5f83a9af) */
/* WARNING: Removing unreachable block (ram,0x5f83a9c7) */
/* WARNING: Removing unreachable block (ram,0x5f83a9e9) */

undefined4 FUN_5f83a2a0(undefined4 param_1,int param_2,int *param_3)

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


