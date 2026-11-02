/* Module: mp3plug.dll
   Function: FUN_5f69a750
   Address: 5f69a750
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * __thiscall FUN_5f69a750(void *this,undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined1 *puVar3;
  HGLOBAL pvVar4;
  LPVOID pvVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  uint uVar8;
  byte *pbVar9;
  
  *(undefined1 *)((int)this + 4) = *param_1;
  *(undefined1 *)((int)this + 5) = param_1[1];
  *(undefined1 *)((int)this + 6) = param_1[2];
  *(undefined1 *)((int)this + 7) = param_1[3];
  *(undefined1 *)((int)this + 8) = 0;
  bVar2 = param_1[8];
  puVar3 = (undefined1 *)CONCAT31(CONCAT21(CONCAT11(param_1[4],param_1[5]),param_1[6]),param_1[7]);
  *(uint *)((int)this + 0x1c) = (uint)bVar2;
  puVar1 = param_1 + (int)(puVar3 + 10);
  *(uint *)((int)this + 0x1c) = (uint)CONCAT11(bVar2,param_1[9]);
  pbVar9 = param_1 + 10;
  if (param_2 < puVar1) {
    puVar3 = param_2 + (-10 - (int)param_1);
  }
  puVar7 = param_2;
  if (-1 < (int)puVar3) {
    uVar8 = *(uint *)((int)this + 0x1c);
    if ((uVar8 & 0x80) != 0) {
      bVar2 = *pbVar9;
      pbVar9 = param_1 + 0xe;
      puVar3 = puVar3 + -4;
      param_1 = (undefined1 *)
                CONCAT31(CONCAT21(CONCAT11(bVar2,param_1[0xb]),param_1[0xc]),param_1[0xd]);
    }
    if ((uVar8 & 0x40) != 0) {
      bVar2 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      *(uint *)((int)this + 0x20) = (uint)bVar2;
      puVar3 = puVar3 + -1;
    }
    if ((uVar8 & 0x20) != 0) {
      bVar2 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      *(uint *)((int)this + 0x24) = (uint)bVar2;
      puVar3 = puVar3 + -1;
    }
    if ((uVar8 & 0x80) != 0) {
      pvVar4 = GlobalAlloc(0x42,(SIZE_T)param_1);
      pvVar5 = GlobalLock(pvVar4);
      *(LPVOID *)((int)this + 0xc) = pvVar5;
      *(undefined1 **)((int)this + 0x18) = param_1;
      FUN_5f6bbfa0(pvVar5,&param_1,(int)pbVar9,puVar3);
      return puVar1;
    }
    puVar7 = puVar1;
    if (puVar3 != (undefined1 *)0x0) {
      pvVar4 = GlobalAlloc(0x42,(SIZE_T)(puVar3 + 1));
      pbVar6 = GlobalLock(pvVar4);
      *(undefined1 **)((int)this + 0x18) = puVar3;
      *(byte **)((int)this + 0xc) = pbVar6;
      for (uVar8 = (uint)puVar3 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pbVar6 = *(undefined4 *)pbVar9;
        pbVar9 = pbVar9 + 4;
        pbVar6 = pbVar6 + 4;
      }
      for (uVar8 = (uint)puVar3 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pbVar6 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        pbVar6 = pbVar6 + 1;
      }
    }
  }
  return puVar7;
}


