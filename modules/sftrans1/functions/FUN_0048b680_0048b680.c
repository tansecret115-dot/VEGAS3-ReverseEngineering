/* Module: sftrans1.dll
   Function: FUN_0048b680
   Address: 0048b680
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0048b680(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  undefined4 *puVar1;
  wchar_t *pMem;
  HGLOBAL pvVar2;
  int iVar3;
  size_t sVar4;
  undefined4 uVar5;
  wchar_t *local_4;
  
  puVar1 = (undefined4 *)param_3;
  if (((param_3 == (wchar_t *)0x0) || (param_2 == (wchar_t *)0x0)) ||
     (*(int *)(param_1 + 0x94) != 0)) {
    return 0;
  }
  *(undefined4 *)param_3 = 0;
  *(undefined4 *)((int)param_3 + 4) = 0;
  *(undefined4 *)((int)param_3 + 8) = 0;
  *(undefined4 *)((int)param_3 + 0xc) = 0;
  local_4 = param_1;
  local_4 = (wchar_t *)wcslen(param_2);
  pvVar2 = GlobalAlloc(0x40,(int)local_4 * 2);
  param_3 = GlobalLock(pvVar2);
  if (param_3 == (wchar_t *)0x0) {
    return 0;
  }
  uVar5 = 0;
  iVar3 = FUN_0048bfc0(&param_2,local_4,param_3);
  if (iVar3 == 0) {
    *puVar1 = 0;
    uVar5 = FUN_004869f0(0);
    puVar1[1] = uVar5;
    FUN_004863e0(puVar1,0);
    sVar4 = wcslen(param_3);
    FUN_00486e50(puVar1[1],&param_3,sVar4);
    uVar5 = *(undefined4 *)puVar1[1];
  }
  else if (iVar3 == 1) {
    *puVar1 = 1;
    uVar5 = FUN_004869f0(1);
    puVar1[1] = uVar5;
    FUN_004863e0(puVar1,1);
    sVar4 = wcslen(param_3);
    FUN_00486e50(puVar1[1],&param_3,sVar4);
    uVar5 = *(undefined4 *)puVar1[1];
  }
  else {
    if (iVar3 != 2) goto LAB_0048b816;
    *puVar1 = 2;
    uVar5 = FUN_004869f0(2);
    puVar1[1] = uVar5;
    FUN_004863e0(puVar1,2);
    sVar4 = wcslen(param_3);
    FUN_00486e50(puVar1[1],&param_3,sVar4);
    FUN_00486350(*(undefined4 *)puVar1[1],9,0x20);
    local_4 = param_3 + sVar4 + 1;
    sVar4 = wcslen(local_4);
    FUN_00486e50(puVar1[1] + 4,&local_4,sVar4);
    uVar5 = *(undefined4 *)(puVar1[1] + 4);
  }
  FUN_00486350(uVar5,9,0x20);
  uVar5 = 1;
LAB_0048b816:
  pMem = param_3;
  pvVar2 = GlobalHandle(param_3);
  GlobalUnlock(pvVar2);
  pvVar2 = GlobalHandle(pMem);
  GlobalFree(pvVar2);
  return uVar5;
}


