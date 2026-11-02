/* Module: sfpublish.dll
   Function: FUN_00421e90
   Address: 00421e90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00421e90(void *this,undefined4 *param_1)

{
  HGLOBAL pvVar1;
  undefined4 *pMem;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 uVar8;
  char *pcVar9;
  
  uVar4 = (*(int *)((int)this + 0x70) + 1) * 5;
  pvVar1 = GlobalAlloc(0x40,uVar4);
  pMem = GlobalLock(pvVar1);
  if (pMem == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  puVar6 = pMem;
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  puVar6 = param_1;
  for (iVar5 = 0xf; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *param_1 = 0x3c;
  param_1[2] = *(undefined4 *)((int)this + 0x70);
  param_1[1] = pMem;
  param_1[5] = *(undefined4 *)((int)this + 0x70);
  param_1[4] = (undefined1 *)((int)pMem + *(int *)((int)this + 0x70) + 1);
  param_1[10] = *(undefined4 *)((int)this + 0x70);
  param_1[9] = (undefined1 *)((int)pMem + *(int *)((int)this + 0x70) * 2 + 2);
  param_1[0xc] = *(undefined4 *)((int)this + 0x70);
  param_1[0xb] = (undefined1 *)((int)pMem + (*(int *)((int)this + 0x70) + 1) * 3);
  param_1[0xe] = *(undefined4 *)((int)this + 0x70);
  param_1[0xd] = pMem + *(int *)((int)this + 0x70) + 1;
  iVar5 = InternetCrackUrlA(*(undefined4 *)((int)this + 0x74),0,0,param_1);
  if (iVar5 != 0) {
    return 0;
  }
  GetLastError();
  pcVar9 = "InternetCrackUrl failed on %s  GLE=%d";
  uVar8 = 0x7f8;
  pcVar7 = "sfinternet.cpp";
  uVar4 = 1;
  puVar2 = FUN_004012b0();
  FUN_00415b60((int)puVar2,uVar4,pcVar7,uVar8,pcVar9);
  pvVar1 = GlobalHandle(pMem);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(pMem);
  GlobalFree(pvVar1);
  return 0x80004005;
}


