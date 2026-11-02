/* Module: mp3plug.dll
   Function: FUN_5f699a30
   Address: 5f699a30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f699a30(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  HGLOBAL pvVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  short *psVar7;
  
  *(int *)((int)this + 8) = param_1;
  if (*(LPCVOID *)((int)this + 0x18) != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle(*(LPCVOID *)((int)this + 0x18));
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(*(LPCVOID *)((int)this + 0x18));
    GlobalFree(pvVar3);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  iVar1 = *(int *)((int)this + 0xc);
  if (iVar1 == 0) {
    return 0x80070057;
  }
  iVar2 = *(int *)(iVar1 + 0x24);
  *(int *)((int)this + 0x14) = iVar2;
  if (iVar2 == 0) {
    return 0x8000ffff;
  }
  psVar7 = *(short **)(iVar1 + 0x18);
  pvVar3 = GlobalAlloc(0x42,0x12);
  puVar4 = GlobalLock(pvVar3);
  *(undefined4 **)((int)this + 0x18) = puVar4;
  if (puVar4 == (undefined4 *)0x0) {
    (**(code **)(*(int *)this + 0x14))(this);
    return 0x8007000e;
  }
  if ((*psVar7 == 3) || (*psVar7 == 1)) {
    uVar5 = 0x10;
  }
  else {
    uVar5 = (ushort)psVar7[8] + 0x12;
  }
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar4 = *(undefined4 *)psVar7;
    psVar7 = psVar7 + 2;
    puVar4 = puVar4 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(char *)puVar4 = (char)*psVar7;
    psVar7 = (short *)((int)psVar7 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  return 0;
}


