/* Module: vidcap30.exe
   Function: FUN_00446270
   Address: 00446270
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00446270(uchar *param_1,uchar *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uchar *puVar2;
  HGLOBAL hMem;
  undefined4 *puVar3;
  size_t _Size;
  uchar *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  if (DAT_005bba30 == 4) {
    return 1;
  }
  iVar1 = *(int *)(DAT_005ba4c0 + 0x70);
  hMem = GlobalAlloc(0x42,0x28);
  puVar3 = GlobalLock(hMem);
  puVar2 = param_1;
  if (param_1 == (uchar *)0x0) {
    _Size = 0;
  }
  else {
    iVar5 = lstrlenA((LPCSTR)param_1);
    _Size = iVar5 + 1;
  }
  puVar4 = calloc(1,_Size);
  *puVar3 = puVar4;
  _mbscpy(puVar4,puVar2);
  puVar2 = param_2;
  if (param_2 == (uchar *)0x0) {
    puVar3[1] = 0;
  }
  else {
    iVar5 = lstrlenA((LPCSTR)param_2);
    puVar4 = calloc(1,iVar5 + 1);
    puVar3[1] = puVar4;
    _mbscpy(puVar4,puVar2);
  }
  if (param_3 == 0) {
    puVar3[4] = 0;
  }
  else {
    uVar7 = _SfTextToLongLongToken_8(param_3,0);
    *(undefined8 *)(puVar3 + 2) = uVar7;
    puVar3[4] = 1;
  }
  if (param_4 == 0) {
    puVar3[8] = 0;
  }
  else {
    uVar7 = _SfTextToLongLongToken_8(param_4,0);
    *(undefined8 *)(puVar3 + 6) = uVar7;
    puVar3[8] = 1;
  }
  if (param_5 == 0) {
    puVar3[9] = 0;
  }
  else {
    uVar6 = _SfTextToLongToken_8(param_5,0);
    puVar3[9] = uVar6;
  }
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x2e0) != 0)) {
    param_1 = (uchar *)puVar3;
    uVar6 = _SfList_InsertList_16(*(int *)(iVar1 + 0x2e0),0xffffffff,&param_1,1);
    *(undefined4 *)(iVar1 + 0x2e4) = 1;
    return uVar6;
  }
  return 1;
}


