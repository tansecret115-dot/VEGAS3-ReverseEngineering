/* Module: wmfplug2.dll
   Function: FUN_00443650
   Address: 00443650
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00443af9) */
/* WARNING: Removing unreachable block (ram,0x00443b23) */
/* WARNING: Removing unreachable block (ram,0x00443b2d) */
/* WARNING: Removing unreachable block (ram,0x00443b34) */
/* WARNING: Removing unreachable block (ram,0x00443b4d) */
/* WARNING: Removing unreachable block (ram,0x00443b5a) */
/* WARNING: Removing unreachable block (ram,0x00443b73) */
/* WARNING: Removing unreachable block (ram,0x00443b7f) */
/* WARNING: Removing unreachable block (ram,0x00443b97) */
/* WARNING: Removing unreachable block (ram,0x00443baf) */
/* WARNING: Removing unreachable block (ram,0x00443c08) */
/* WARNING: Removing unreachable block (ram,0x00443c12) */
/* WARNING: Removing unreachable block (ram,0x00443c2e) */
/* WARNING: Removing unreachable block (ram,0x00443c5e) */
/* WARNING: Removing unreachable block (ram,0x00443c6a) */
/* WARNING: Removing unreachable block (ram,0x00443c74) */
/* WARNING: Removing unreachable block (ram,0x00443c7c) */
/* WARNING: Removing unreachable block (ram,0x00443c8c) */
/* WARNING: Removing unreachable block (ram,0x00443cc2) */
/* WARNING: Removing unreachable block (ram,0x00443cd6) */
/* WARNING: Removing unreachable block (ram,0x00443ce4) */
/* WARNING: Removing unreachable block (ram,0x00443888) */
/* WARNING: Removing unreachable block (ram,0x00443892) */
/* WARNING: Removing unreachable block (ram,0x00443899) */
/* WARNING: Removing unreachable block (ram,0x004438b2) */
/* WARNING: Removing unreachable block (ram,0x004438bf) */
/* WARNING: Removing unreachable block (ram,0x004438d8) */
/* WARNING: Removing unreachable block (ram,0x004437ac) */
/* WARNING: Removing unreachable block (ram,0x004437b3) */
/* WARNING: Removing unreachable block (ram,0x004437cc) */
/* WARNING: Removing unreachable block (ram,0x004437f6) */
/* WARNING: Removing unreachable block (ram,0x00443802) */
/* WARNING: Removing unreachable block (ram,0x0044385b) */
/* WARNING: Removing unreachable block (ram,0x0044386c) */
/* WARNING: Removing unreachable block (ram,0x00443cf7) */
/* WARNING: Removing unreachable block (ram,0x00443d05) */
/* WARNING: Removing unreachable block (ram,0x00443d27) */
/* WARNING: Removing unreachable block (ram,0x00443d0b) */
/* WARNING: Removing unreachable block (ram,0x00443d2d) */
/* WARNING: Removing unreachable block (ram,0x00443d3a) */
/* WARNING: Removing unreachable block (ram,0x00443d4f) */
/* WARNING: Removing unreachable block (ram,0x00443d5f) */
/* WARNING: Removing unreachable block (ram,0x00443d77) */
/* WARNING: Removing unreachable block (ram,0x00443d99) */

undefined4 FUN_00443650(undefined4 param_1,int param_2,int *param_3)

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


