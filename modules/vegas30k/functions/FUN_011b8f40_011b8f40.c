/* Module: vegas30k.dll
   Function: FUN_011b8f40
   Address: 011b8f40
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_011b8f40(int *param_1,LPCSTR param_2,undefined4 *param_3)

{
  LPSTR lpMultiByteStr;
  HGLOBAL hMem;
  LPVOID pvVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int local_580 [5];
  WCHAR aWStack_56c [2];
  undefined4 local_568;
  undefined4 local_564;
  undefined4 local_560;
  undefined4 local_55c;
  WCHAR local_448 [240];
  undefined4 auStack_268 [9];
  undefined2 local_242;
  undefined4 uStack_38;
  uchar *puStack_24;
  int iStack_1c;
  
  puVar5 = param_3;
  for (iVar4 = 0x8c; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  piVar6 = local_580;
  for (iVar4 = 0xd4; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  *param_3 = 0x230;
  local_564 = DAT_011ef584;
  local_560 = DAT_011ef588;
  local_568 = DAT_011ef580;
  local_580[0] = 0x350;
  local_55c = DAT_011ef58c;
  local_580[1] = 0x32;
  MultiByteToWideChar(0,1,param_2,-1,local_448,0x104);
  puVar5 = param_3 + 0x88;
  piVar6 = local_580;
  local_242 = 0;
  iVar4 = (**(code **)(*(int *)param_1[6] + 0xc))();
  if (-1 < iVar4) {
    piVar7 = (int *)&stack0xfffffa64;
    (*(code *)**(undefined4 **)*puVar5)((undefined4 *)*puVar5,&DAT_011eedf0);
    puVar2 = (undefined4 *)&stack0xfffffa64;
    for (iVar4 = 0xd4; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    iVar4 = (**(code **)(*piVar6 + 0xc))(piVar6,&stack0xfffffa64);
    if (-1 < iVar4) {
      lpMultiByteStr = (LPSTR)(param_3 + 2);
      if ((&stack0x00000000 == (undefined1 *)0x56c) || (aWStack_56c[0] != L'\0')) {
        WideCharToMultiByte(0,0,aWStack_56c,-1,lpMultiByteStr,0x100,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      else if (lpMultiByteStr != (LPSTR)0x0) {
        *lpMultiByteStr = '\0';
      }
      *(undefined1 *)((int)param_3 + 0x107) = 0;
      param_3[0x42] = 0x350;
      param_3[0x43] = unaff_ESI;
      param_3[0x44] = unaff_EBP;
      param_3[0x45] = unaff_EBX;
    }
    (**(code **)(*piVar7 + 8))(piVar7);
    _mbscpy((uchar *)(param_3 + 0x46),puStack_24);
    if (iStack_1c != 0) {
      hMem = GlobalAlloc(0x40,0x24);
      pvVar1 = GlobalLock(hMem);
      if ((pvVar1 == (LPVOID)0x0) ||
         (puVar2 = (undefined4 *)FUN_011c29e0(param_1[6]), puVar2 == (undefined4 *)0x0)) {
        (**(code **)(*(int *)*puVar5 + 8))((int *)*puVar5);
        *puVar5 = 0;
        return -0x7ff8fff2;
      }
      FUN_011c2b00(*puVar5);
      (**(code **)(*(int *)*puVar5 + 8))((int *)*puVar5);
      (**(code **)*puVar2)(puVar2,&DAT_011ef500,puVar5);
      puVar2 = auStack_268;
      for (iVar4 = 0x8c; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      auStack_268[0] = 0x230;
      (**(code **)(*piVar6 + 0x18))(piVar6,auStack_268);
      param_1 = piVar7;
      FUN_011c2aa0(uStack_38);
    }
    iVar4 = 0;
    param_3[1] = 0;
    while( true ) {
      iVar3 = (**(code **)(*(int *)*puVar5 + 0x10))((int *)*puVar5,iVar4,&stack0xfffffa54,0,0);
      iVar4 = iVar4 + 1;
      if (iVar3 != 0) break;
      param_3[1] = param_3[1] + 1;
    }
    param_3[0x8a] = 0;
    param_3[0x8b] = 0;
    iVar4 = _SfList_AllocAndInsertItem_20(param_1[3],param_3,0x230,0xffffffff,param_3 + 0x89);
    if (-1 < iVar4) {
      if ((int *)param_1[3] != (int *)0x0) {
        param_1[2] = *(int *)param_1[3];
        return iVar4;
      }
      param_1[2] = 0;
      return iVar4;
    }
    (**(code **)(*(int *)*puVar5 + 8))((int *)*puVar5);
  }
  return iVar4;
}


