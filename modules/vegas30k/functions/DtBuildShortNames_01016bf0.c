/* Module: vegas30k.dll
   Function: DtBuildShortNames
   Address: 01016bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall DtBuildShortNames(struct tagDIR_TREE *,struct tagDIR_ENTRY *,int) */

long DtBuildShortNames(tagDIR_TREE *param_1,tagDIR_ENTRY *param_2,int param_3)

{
  int *piVar1;
  DWORD DVar2;
  HANDLE hObject;
  uchar *puVar3;
  undefined4 uVar4;
  tagDIR_ENTRY *ptVar5;
  int iVar6;
  int iVar7;
  long local_410;
  uchar local_408 [260];
  CHAR local_304 [260];
  undefined1 local_200 [512];
  
                    /* 0x16bf0  41  ?DtBuildShortNames@@YGJPAUtagDIR_TREE@@PAUtagDIR_ENTRY@@H@Z */
  iVar7 = 0;
  local_410 = 0;
  FUN_01016830(param_1,0);
  DVar2 = GetTempPathA(0x104,(LPSTR)local_408);
  while( true ) {
    piVar1 = *(int **)(param_2 + 0x214);
    if (piVar1 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar1;
    }
    if (iVar6 <= iVar7) goto LAB_01016d2c;
    if (piVar1 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar1;
    }
    if ((iVar7 < 0) || (iVar6 + -1 < iVar7)) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(piVar1[2] + iVar7 * 4);
    }
    _mbscpy(local_408 + DVar2,(uchar *)(iVar6 + 0x110));
    hObject = CreateFileA((LPCSTR)local_408,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,
                          (HANDLE)0x0);
    if (hObject == (HANDLE)0xffffffff) break;
    CloseHandle(hObject);
    GetShortPathNameA((LPCSTR)local_408,local_304,0x104);
    puVar3 = (uchar *)_SfGetFileNamePtrA_4(local_304);
    _mbscpy((uchar *)(iVar6 + 0xc),puVar3);
    iVar7 = iVar7 + 1;
    *(uint *)(iVar6 + 0x218) = *(uint *)(iVar6 + 0x218) | 0x20;
  }
  puVar3 = local_408;
  uVar4 = _SfGetString2_8(DAT_0120e5c8,0x1080);
  SfPrintF(local_200,uVar4,puVar3);
  FUN_01016830(param_1,local_200);
  local_410 = -0x7ffb1ff9;
LAB_01016d2c:
  iVar7 = 0;
  while( true ) {
    piVar1 = *(int **)(param_2 + 0x214);
    if (piVar1 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar1;
    }
    if (iVar6 <= iVar7) break;
    if (piVar1 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar1;
    }
    if ((iVar7 < 0) || (iVar6 + -1 < iVar7)) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(piVar1[2] + iVar7 * 4);
    }
    _mbscpy(local_408 + DVar2,(uchar *)(iVar6 + 0x110));
    DeleteFileA((LPCSTR)local_408);
    iVar7 = iVar7 + 1;
  }
  if (param_3 != 0) {
    iVar7 = 0;
    while( true ) {
      piVar1 = *(int **)(param_2 + 0x214);
      if (piVar1 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar1;
      }
      if (iVar6 <= iVar7) break;
      if (piVar1 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar1;
      }
      if ((iVar7 < 0) || (iVar6 + -1 < iVar7)) {
        ptVar5 = (tagDIR_ENTRY *)0x0;
      }
      else {
        ptVar5 = *(tagDIR_ENTRY **)(piVar1[2] + iVar7 * 4);
      }
      if (((*(uint *)(ptVar5 + 8) & 0x10) != 0) &&
         (local_410 = DtBuildShortNames(param_1,ptVar5,param_3), local_410 < 0)) {
        return local_410;
      }
      iVar7 = iVar7 + 1;
    }
  }
  return local_410;
}


