/* Module: qt4plug.dll
   Function: FUN_5f51e910
   Address: 5f51e910
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5f51e9a6) */

int FUN_5f51e910(int *param_1,undefined4 *param_2)

{
  short sVar1;
  int iVar2;
  HGLOBAL pvVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar2 = 0;
  iVar5 = -0x7ff8fff2;
  if (((param_2 == (undefined4 *)0x0) || (param_1 == (int *)0x0)) || (*param_1 == 0)) {
    return -0x7fffbffd;
  }
  if (*(short *)(*param_1 + 0x54) != -1) {
    sVar1 = FUN_5f580d80();
    if (sVar1 != 0) goto LAB_5f51e99e;
    iVar2 = (int)*(short *)(iRam00000000 + 6);
    if (0xff < iVar2) {
      iVar5 = -0x7fffbfff;
      goto LAB_5f51e99e;
    }
  }
  pvVar3 = GlobalAlloc(0x42,iVar2 * 4 + 0x2c);
  puVar4 = GlobalLock(pvVar3);
  *param_2 = puVar4;
  if (puVar4 != (undefined4 *)0x0) {
    iVar5 = FUN_5f51e3e0(param_1,0,puVar4);
  }
LAB_5f51e99e:
  if ((iVar5 < 0) && ((LPCVOID)*param_2 != (LPCVOID)0x0)) {
    pvVar3 = GlobalHandle((LPCVOID)*param_2);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle((LPCVOID)*param_2);
    GlobalFree(pvVar3);
    *param_2 = 0;
  }
  return iVar5;
}


