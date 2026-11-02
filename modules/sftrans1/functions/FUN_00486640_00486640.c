/* Module: sftrans1.dll
   Function: FUN_00486640
   Address: 00486640
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_00486640(int param_1,int *param_2,LPCSTR param_3,int param_4,undefined4 param_5,int param_6,
            LPCSTR param_7,int param_8)

{
  bool bVar1;
  HGLOBAL hMem;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  
  iVar4 = (int)param_2;
  if ((int)param_2 < 0) {
    return 0;
  }
  bVar1 = (int)param_2 < 3;
  hMem = GlobalAlloc(0x40,0x18);
  piVar2 = GlobalLock(hMem);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  piVar7 = piVar2;
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar7 = 0;
    piVar7 = piVar7 + 1;
  }
  uVar3 = lstrlenA(param_3);
  if (uVar3 < 0x32) {
    iVar6 = lstrlenA(param_3);
  }
  else {
    iVar6 = 0x32;
  }
  FUN_00486790(piVar2 + 1,&param_3,iVar6);
  piVar2[3] = param_4;
  iVar6 = FUN_004c9440(DAT_0057b888,param_5,0,0,0,(-(uint)(param_6 != 0) & 0xfffff010) + 0x1000);
  piVar2[2] = iVar6;
  *piVar2 = iVar4;
  if (param_7 != (LPCSTR)0x0) {
    uVar3 = lstrlenA(param_7);
    if (uVar3 < 100) {
      iVar4 = lstrlenA(param_7);
    }
    else {
      iVar4 = 100;
    }
    FUN_00486790(piVar2 + 4,&param_7,iVar4);
  }
  if (param_8 == 0) {
    piVar2[5] = 0;
  }
  else {
    piVar2[5] = param_8;
  }
  if (bVar1) {
    puVar5 = (undefined4 *)(param_1 + 0xa8);
  }
  else {
    puVar5 = (undefined4 *)(param_1 + 0xac);
  }
  param_2 = piVar2;
  FUN_004dc110((undefined4 *)*puVar5,*(undefined4 *)*puVar5,&param_2,1);
  if (!bVar1) {
    *(undefined4 *)(param_1 + 0x128) = 1;
  }
  return 1;
}


