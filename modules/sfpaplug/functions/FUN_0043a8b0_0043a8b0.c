/* Module: sfpaplug.dll
   Function: FUN_0043a8b0
   Address: 0043a8b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0043ad59) */
/* WARNING: Removing unreachable block (ram,0x0043ad83) */
/* WARNING: Removing unreachable block (ram,0x0043ad8d) */
/* WARNING: Removing unreachable block (ram,0x0043ad94) */
/* WARNING: Removing unreachable block (ram,0x0043adad) */
/* WARNING: Removing unreachable block (ram,0x0043adba) */
/* WARNING: Removing unreachable block (ram,0x0043add3) */
/* WARNING: Removing unreachable block (ram,0x0043addf) */
/* WARNING: Removing unreachable block (ram,0x0043adf7) */
/* WARNING: Removing unreachable block (ram,0x0043ae0f) */
/* WARNING: Removing unreachable block (ram,0x0043ae68) */
/* WARNING: Removing unreachable block (ram,0x0043ae72) */
/* WARNING: Removing unreachable block (ram,0x0043ae8e) */
/* WARNING: Removing unreachable block (ram,0x0043aebe) */
/* WARNING: Removing unreachable block (ram,0x0043aeca) */
/* WARNING: Removing unreachable block (ram,0x0043aed4) */
/* WARNING: Removing unreachable block (ram,0x0043aedc) */
/* WARNING: Removing unreachable block (ram,0x0043aeec) */
/* WARNING: Removing unreachable block (ram,0x0043af22) */
/* WARNING: Removing unreachable block (ram,0x0043af36) */
/* WARNING: Removing unreachable block (ram,0x0043af44) */
/* WARNING: Removing unreachable block (ram,0x0043aae8) */
/* WARNING: Removing unreachable block (ram,0x0043aaf2) */
/* WARNING: Removing unreachable block (ram,0x0043aaf9) */
/* WARNING: Removing unreachable block (ram,0x0043ab12) */
/* WARNING: Removing unreachable block (ram,0x0043ab1f) */
/* WARNING: Removing unreachable block (ram,0x0043ab38) */
/* WARNING: Removing unreachable block (ram,0x0043aa0c) */
/* WARNING: Removing unreachable block (ram,0x0043aa13) */
/* WARNING: Removing unreachable block (ram,0x0043aa2c) */
/* WARNING: Removing unreachable block (ram,0x0043aa56) */
/* WARNING: Removing unreachable block (ram,0x0043aa62) */
/* WARNING: Removing unreachable block (ram,0x0043aabb) */
/* WARNING: Removing unreachable block (ram,0x0043aacc) */
/* WARNING: Removing unreachable block (ram,0x0043af57) */
/* WARNING: Removing unreachable block (ram,0x0043af65) */
/* WARNING: Removing unreachable block (ram,0x0043af87) */
/* WARNING: Removing unreachable block (ram,0x0043af6b) */
/* WARNING: Removing unreachable block (ram,0x0043af8d) */
/* WARNING: Removing unreachable block (ram,0x0043af9a) */
/* WARNING: Removing unreachable block (ram,0x0043afaf) */
/* WARNING: Removing unreachable block (ram,0x0043afbf) */
/* WARNING: Removing unreachable block (ram,0x0043afd7) */
/* WARNING: Removing unreachable block (ram,0x0043aff9) */

undefined4 FUN_0043a8b0(undefined4 param_1,int param_2,int *param_3)

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


