/* Module: gifplug.dll
   Function: FUN_5f6f30c0
   Address: 5f6f30c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6f30c0(uchar *param_1,uchar *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int local_18;
  LPCRITICAL_SECTION local_14;
  undefined1 local_10 [4];
  uchar *local_c;
  
  piVar2 = DAT_5f70c150;
  local_14 = (LPCRITICAL_SECTION)(DAT_5f70c150 + 3);
  EnterCriticalSection(local_14);
  local_c = param_1;
  local_18 = FUN_5f6f7bd0(piVar2,local_10,(undefined4 *)0x0,-1,&LAB_5f6f30a0);
  if (-1 < local_18) {
    FUN_5f6f7610(piVar2,local_18,1,0);
  }
  local_18 = FUN_5f6f7e20(piVar2,local_10,0,(undefined4 *)0xffffffff,&LAB_5f6f30a0);
  if (param_1 == (uchar *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = lstrlenA((LPCSTR)param_1);
    iVar4 = iVar4 + 1;
  }
  if (param_2 == (uchar *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = lstrlenA((LPCSTR)param_2);
    iVar3 = iVar3 + 1;
  }
  iVar4 = FUN_5f6f8620(piVar2,(int *)0x0,iVar3 + 0x14 + iVar4,local_18,&local_18);
  if (iVar4 == 0) {
    puVar1 = *(undefined4 **)(piVar2[2] + local_18 * 4);
    puVar1[1] = puVar1 + 4;
    if (param_1 == (uchar *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = lstrlenA((LPCSTR)param_1);
      iVar4 = iVar4 + 1;
    }
    puVar1[3] = (uchar *)puVar1[1] + (iVar4 + 3U & 0xfffffffc);
    *puVar1 = 0;
    _mbscpy((uchar *)puVar1[1],param_1);
    iVar4 = lstrlenA((LPCSTR)param_2);
    puVar1[2] = iVar4;
    _mbscpy((uchar *)puVar1[3],param_2);
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  LeaveCriticalSection(local_14);
  return uVar5;
}


