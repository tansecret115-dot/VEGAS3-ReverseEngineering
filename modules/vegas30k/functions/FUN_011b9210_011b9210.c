/* Module: vegas30k.dll
   Function: FUN_011b9210
   Address: 011b9210
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __thiscall FUN_011b9210(int param_1,undefined4 param_2,undefined4 *param_3)

{
  LPSTR lpMultiByteStr;
  undefined4 *puVar1;
  HGLOBAL hMem;
  LPVOID pvVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  int *piVar6;
  undefined4 *puVar7;
  undefined1 *puStack_5c0;
  undefined4 *puStack_5bc;
  undefined4 uStack_590;
  int local_580 [5];
  WCHAR aWStack_56c [2];
  undefined4 local_568;
  undefined4 local_564;
  undefined4 local_560;
  undefined4 local_55c;
  undefined4 auStack_268 [13];
  undefined4 local_234;
  undefined4 uStack_64;
  
  puVar1 = param_3 + 0x88;
  puVar3 = param_3;
  for (iVar5 = 0x8c; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *param_3 = 0x230;
  piVar6 = local_580;
  for (iVar5 = 0xd4; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  local_568 = DAT_011ef580;
  local_564 = DAT_011ef584;
  local_55c = DAT_011ef58c;
  local_234 = param_2;
  local_580[0] = 0x350;
  local_560 = DAT_011ef588;
  local_580[1] = 0x802;
  iVar5 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
  if (iVar5 < 0) {
    return iVar5;
  }
  puStack_5bc = (undefined4 *)0x11b92b4;
  hMem = GlobalAlloc(0x40,0x24);
  pvVar2 = GlobalLock(hMem);
  if ((pvVar2 == (LPVOID)0x0) ||
     (puVar3 = (undefined4 *)FUN_011c29e0(), puVar3 == (undefined4 *)0x0)) {
    (**(code **)(*(int *)*puVar1 + 8))();
    *puVar1 = 0;
    return -0x7ff8fff2;
  }
  puStack_5bc = (undefined4 *)*puVar1;
  piVar6 = (int *)&stack0xfffffa60;
  puStack_5c0 = (undefined1 *)0x11b9301;
  (**(code **)*puStack_5bc)();
  puVar7 = (undefined4 *)&stack0xfffffa64;
  for (iVar5 = 0xd4; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  puStack_5c0 = &stack0xfffffa64;
  iVar5 = (**(code **)(local_580[0] + 0xc))();
  if (-1 < iVar5) {
    lpMultiByteStr = (LPSTR)(param_3 + 2);
    if ((&stack0x00000000 == (undefined1 *)0x56c) || (aWStack_56c[0] != L'\0')) {
      WideCharToMultiByte(0,0,aWStack_56c,-1,lpMultiByteStr,0x100,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else if (lpMultiByteStr != (LPSTR)0x0) {
      *lpMultiByteStr = '\0';
    }
    *(undefined1 *)((int)param_3 + 0x107) = 0;
    param_3[0x42] = 0x350;
    param_3[0x43] = unaff_EBP;
    param_3[0x44] = unaff_EBX;
    param_3[0x45] = uStack_590;
  }
  (**(code **)(*piVar6 + 8))();
  FUN_011c2b00();
  (**(code **)(*(int *)*puVar1 + 8))();
  (**(code **)*puVar3)();
  puVar3 = auStack_268;
  for (iVar5 = 0x8c; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  auStack_268[0] = 0x230;
  (**(code **)(local_580[0] + 0x28))
            (local_580,DAT_011eee80,DAT_011eee84,DAT_011eee88,DAT_011eee8c,&puStack_5c0,auStack_268)
  ;
  FUN_011c2aa0(uStack_64);
  iVar5 = 0;
  param_3[1] = 0;
  while( true ) {
    iVar4 = (**(code **)(*(int *)*puVar1 + 0x10))((int *)*puVar1,iVar5,&stack0xfffffa28,0,0);
    iVar5 = iVar5 + 1;
    if (iVar4 != 0) break;
    param_3[1] = param_3[1] + 1;
  }
  param_3[0x8a] = 0;
  param_3[0x8b] = 0;
  iVar5 = _SfList_AllocAndInsertItem_20(local_580[3],param_3,0x230,0xffffffff,param_3 + 0x89);
  if (iVar5 < 0) {
    (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
    return iVar5;
  }
  if (local_580[3] == 0) {
    return iVar5;
  }
  return iVar5;
}


