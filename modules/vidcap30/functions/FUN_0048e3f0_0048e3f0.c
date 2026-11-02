/* Module: vidcap30.exe
   Function: FUN_0048e3f0
   Address: 0048e3f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0048e899) */
/* WARNING: Removing unreachable block (ram,0x0048e8c3) */
/* WARNING: Removing unreachable block (ram,0x0048e8cd) */
/* WARNING: Removing unreachable block (ram,0x0048e8d4) */
/* WARNING: Removing unreachable block (ram,0x0048e8ed) */
/* WARNING: Removing unreachable block (ram,0x0048e8fa) */
/* WARNING: Removing unreachable block (ram,0x0048e913) */
/* WARNING: Removing unreachable block (ram,0x0048e91f) */
/* WARNING: Removing unreachable block (ram,0x0048e937) */
/* WARNING: Removing unreachable block (ram,0x0048e94f) */
/* WARNING: Removing unreachable block (ram,0x0048e9a8) */
/* WARNING: Removing unreachable block (ram,0x0048e9b2) */
/* WARNING: Removing unreachable block (ram,0x0048e9ce) */
/* WARNING: Removing unreachable block (ram,0x0048e9fe) */
/* WARNING: Removing unreachable block (ram,0x0048ea0a) */
/* WARNING: Removing unreachable block (ram,0x0048ea14) */
/* WARNING: Removing unreachable block (ram,0x0048ea1c) */
/* WARNING: Removing unreachable block (ram,0x0048ea2c) */
/* WARNING: Removing unreachable block (ram,0x0048ea62) */
/* WARNING: Removing unreachable block (ram,0x0048ea76) */
/* WARNING: Removing unreachable block (ram,0x0048ea84) */
/* WARNING: Removing unreachable block (ram,0x0048e628) */
/* WARNING: Removing unreachable block (ram,0x0048e632) */
/* WARNING: Removing unreachable block (ram,0x0048e639) */
/* WARNING: Removing unreachable block (ram,0x0048e652) */
/* WARNING: Removing unreachable block (ram,0x0048e65f) */
/* WARNING: Removing unreachable block (ram,0x0048e678) */
/* WARNING: Removing unreachable block (ram,0x0048e54c) */
/* WARNING: Removing unreachable block (ram,0x0048e553) */
/* WARNING: Removing unreachable block (ram,0x0048e56c) */
/* WARNING: Removing unreachable block (ram,0x0048e596) */
/* WARNING: Removing unreachable block (ram,0x0048e5a2) */
/* WARNING: Removing unreachable block (ram,0x0048e5fb) */
/* WARNING: Removing unreachable block (ram,0x0048e60c) */
/* WARNING: Removing unreachable block (ram,0x0048ea97) */
/* WARNING: Removing unreachable block (ram,0x0048eaa5) */
/* WARNING: Removing unreachable block (ram,0x0048eac7) */
/* WARNING: Removing unreachable block (ram,0x0048eaab) */
/* WARNING: Removing unreachable block (ram,0x0048eacd) */
/* WARNING: Removing unreachable block (ram,0x0048eada) */
/* WARNING: Removing unreachable block (ram,0x0048eaef) */
/* WARNING: Removing unreachable block (ram,0x0048eaff) */
/* WARNING: Removing unreachable block (ram,0x0048eb17) */
/* WARNING: Removing unreachable block (ram,0x0048eb39) */

undefined4 FUN_0048e3f0(undefined4 param_1,int param_2,int *param_3)

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


