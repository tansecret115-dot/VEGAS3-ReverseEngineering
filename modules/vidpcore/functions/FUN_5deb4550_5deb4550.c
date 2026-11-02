/* Module: vidpcore.dll
   Function: FUN_5deb4550
   Address: 5deb4550
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5deb4550(uchar *param_1,uchar *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int local_18;
  LPCRITICAL_SECTION local_14;
  undefined1 local_10 [4];
  uchar *local_c;
  
  iVar3 = DAT_5df43138;
  local_14 = (LPCRITICAL_SECTION)(DAT_5df43138 + 0xc);
  EnterCriticalSection(local_14);
  local_c = param_1;
  local_18 = FUN_5ded53c0(iVar3,local_10,0,0xffffffff,&LAB_5deb4530);
  if (-1 < local_18) {
    FUN_5ded4e00(iVar3,local_18,1,0);
  }
  local_18 = FUN_5ded5610(iVar3,local_10,0,0xffffffff,&LAB_5deb4530);
  if (param_1 == (uchar *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = lstrlenA((LPCSTR)param_1);
    iVar4 = iVar4 + 1;
  }
  if (param_2 == (uchar *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = lstrlenA((LPCSTR)param_2);
    iVar2 = iVar2 + 1;
  }
  iVar4 = FUN_5ded5e10(iVar3,0,iVar2 + 0x14 + iVar4,local_18,&local_18);
  if (iVar4 == 0) {
    puVar1 = *(undefined4 **)(*(int *)(iVar3 + 8) + local_18 * 4);
    puVar1[1] = puVar1 + 4;
    if (param_1 == (uchar *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = lstrlenA((LPCSTR)param_1);
      iVar3 = iVar3 + 1;
    }
    puVar1[3] = (uchar *)puVar1[1] + (iVar3 + 3U & 0xfffffffc);
    *puVar1 = 0;
    _mbscpy((uchar *)puVar1[1],param_1);
    iVar3 = lstrlenA((LPCSTR)param_2);
    puVar1[2] = iVar3;
    _mbscpy((uchar *)puVar1[3],param_2);
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  LeaveCriticalSection(local_14);
  return uVar5;
}


