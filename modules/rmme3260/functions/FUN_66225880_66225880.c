/* Module: rmme3260.dll
   Function: FUN_66225880
   Address: 66225880
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_66225880(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
            ,uint param_5,uint param_6,undefined4 *param_7,uint param_8,undefined2 param_9)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  uVar6 = param_6 >> 0x10;
  uVar7 = param_8 & 0xffff;
  uVar1 = param_5 & 0xffff;
  uVar5 = uVar7 + uVar6 + uVar1 + 0x12 + (uint)param_3._2_2_;
  puVar2 = operator_new(uVar5);
  if (puVar2 == (undefined1 *)0x0) {
    return 0x8007000e;
  }
  *puVar2 = (char)((uint)param_1 >> 0x18);
  puVar2[1] = (char)((uint)param_1 >> 0x10);
  puVar2[2] = (char)((uint)param_1 >> 8);
  puVar2[3] = (char)param_1;
  puVar2[4] = 0;
  puVar2[5] = (char)(uVar5 >> 0x10);
  puVar2[6] = (char)(uVar5 >> 8);
  puVar2[7] = (char)uVar5;
  puVar2[8] = (char)((uint)param_3 >> 8);
  puVar2[9] = (char)param_3;
  puVar3 = puVar2 + 10;
  if ((short)param_3 == 0) {
    *puVar3 = (char)((uint)param_3 >> 0x18);
    puVar2[0xb] = (char)((uint)param_3 >> 0x10);
    puVar3 = (undefined1 *)((int)(puVar2 + 0xc) + (uint)param_3._2_2_);
    puVar8 = (undefined4 *)(puVar2 + 0xc);
    for (uVar5 = (uint)(param_3._2_2_ >> 2); uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *param_4;
      param_4 = param_4 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = param_3._2_2_ & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)param_4;
      param_4 = (undefined4 *)((int)param_4 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    *puVar3 = (char)(param_5 >> 8);
    puVar3[1] = (char)param_5;
    puVar4 = (undefined1 *)((int)(puVar3 + 2) + uVar1);
    puVar8 = (undefined4 *)CONCAT22((undefined2)param_6,param_5._2_2_);
    puVar9 = (undefined4 *)(puVar3 + 2);
    for (uVar1 = uVar1 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar5 = param_5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    *puVar4 = (char)(param_6 >> 0x18);
    puVar4[1] = (char)(param_6 >> 0x10);
    puVar3 = (undefined1 *)((int)(puVar4 + 2) + uVar6);
    puVar8 = (undefined4 *)(puVar4 + 2);
    for (uVar5 = param_6 >> 0x12; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *param_7;
      param_7 = param_7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)param_7;
      param_7 = (undefined4 *)((int)param_7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    *puVar3 = (char)(param_8 >> 8);
    puVar3[1] = (char)param_8;
    puVar8 = (undefined4 *)CONCAT22(param_9,param_8._2_2_);
    puVar9 = (undefined4 *)(puVar3 + 2);
    for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    puVar3 = (undefined1 *)((int)(puVar3 + 2) + uVar7);
    for (uVar5 = param_8 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
  }
  (**(code **)(*(int *)((int)this + 0x114) + 0x1c))(puVar2,(int)puVar3 - (int)puVar2);
  operator_delete(puVar2);
  return 0;
}


