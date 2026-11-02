/* Module: vegas30k.dll
   Function: FUN_011b8d40
   Address: 011b8d40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __thiscall
FUN_011b8d40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 *param_6)

{
  LPSTR lpMultiByteStr;
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  int *piVar4;
  undefined4 *puVar5;
  int *piStack_37c;
  int *piStack_378;
  undefined4 *puStack_374;
  undefined4 *puStack_370;
  int local_350 [4];
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 local_32c;
  
  puVar1 = param_6 + 0x88;
  puVar5 = param_6;
  for (iVar3 = 0x8c; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *param_6 = 0x230;
  piVar4 = local_350;
  for (iVar3 = 0xd4; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  local_338 = DAT_011ef580;
  local_334 = DAT_011ef584;
  local_330 = DAT_011ef588;
  local_32c = DAT_011ef58c;
  local_350[2] = param_2;
  local_350[3] = param_3;
  local_340 = param_4;
  piStack_37c = *(int **)(param_1 + 0x18);
  local_33c = param_5;
  piStack_378 = local_350;
  local_350[0] = 0x350;
  local_350[1] = 3;
  puStack_374 = &DAT_011ef500;
  puStack_370 = puVar1;
  iVar3 = (**(code **)(*piStack_37c + 0xc))();
  if (-1 < iVar3) {
    (*(code *)**(undefined4 **)*puVar1)((undefined4 *)*puVar1,&DAT_011eedf0);
    puVar5 = (undefined4 *)&stack0xfffffc94;
    for (iVar3 = 0xd4; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    iVar3 = (**(code **)(*piStack_378 + 0xc))(piStack_378,&stack0xfffffc94);
    if (-1 < iVar3) {
      lpMultiByteStr = (LPSTR)(param_6 + 2);
      if ((&stack0x00000000 == (undefined1 *)0x33c) || ((WCHAR)local_33c != L'\0')) {
        WideCharToMultiByte(0,0,(LPCWSTR)&local_33c,-1,lpMultiByteStr,0x100,(LPCSTR)0x0,(LPBOOL)0x0)
        ;
      }
      else if (lpMultiByteStr != (LPSTR)0x0) {
        *lpMultiByteStr = '\0';
      }
      *(undefined1 *)((int)param_6 + 0x107) = 0;
      param_6[0x42] = 0x350;
      param_6[0x43] = unaff_ESI;
      param_6[0x44] = unaff_EBP;
      param_6[0x45] = unaff_EBX;
    }
    (*pcRam00000358)(&stack0xfffffc94);
    iVar3 = 0;
    param_6[1] = 0;
    while( true ) {
      iVar2 = (**(code **)(*(int *)*puVar1 + 0x10))((int *)*puVar1,iVar3,&piStack_37c,0,0);
      iVar3 = iVar3 + 1;
      if (iVar2 != 0) break;
      param_6[1] = param_6[1] + 1;
    }
    param_6[0x8a] = 0;
    param_6[0x8b] = 0;
    iVar3 = _SfList_AllocAndInsertItem_20(unaff_EBX,param_6,0x230,0xffffffff,param_6 + 0x89);
    if (-1 < iVar3) {
      if (unaff_EBX != 0) {
        return iVar3;
      }
      return iVar3;
    }
    (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
  }
  return iVar3;
}


