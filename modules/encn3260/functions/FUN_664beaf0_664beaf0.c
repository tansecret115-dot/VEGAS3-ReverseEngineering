/* Module: encn3260.dll
   Function: FUN_664beaf0
   Address: 664beaf0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_664beaf0(int param_1,uint param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  ushort uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  uVar3 = *(uint *)(param_1 + 0xc);
  uVar2 = *(uint *)(param_1 + 8);
  if (uVar2 == uVar3) {
    return uVar3 & 0xffff0000;
  }
  if (uVar3 <= uVar2) {
    puVar7 = (undefined4 *)(uVar2 + 1);
    if (*(undefined4 **)(param_1 + 0x10) <= puVar7) {
      param_2 = (uint)*(ushort *)(param_1 + 0x14);
      do {
        puVar7 = (undefined4 *)((int)puVar7 - param_2);
      } while (*(undefined4 **)(param_1 + 0x10) <= puVar7);
    }
    uVar6 = *(short *)(param_1 + 0x10) - (short)puVar7;
    uVar3 = CONCAT22((short)(param_2 >> 0x10),uVar6);
    if ((ushort)param_4 <= uVar6) {
      uVar3 = param_4;
    }
    uVar2 = param_4 - uVar3;
    puVar8 = param_3;
    for (uVar4 = (uVar3 & 0xffff) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    if ((short)uVar2 != 0) {
      puVar7 = *(undefined4 **)(param_1 + 4);
      puVar8 = (undefined4 *)((int)param_3 + (uVar3 & 0xffff));
      for (uVar4 = (uVar2 & 0xffff) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar4 = uVar2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
    }
    return uVar2 + uVar3;
  }
  iVar1 = uVar3 - uVar2;
  if (iVar1 < 0) {
    sVar5 = *(short *)(param_1 + 0x14);
  }
  else {
    sVar5 = 0;
  }
  if ((ushort)((short)iVar1 + sVar5) <= (ushort)param_4) {
    if (iVar1 < 0) {
      uVar3 = (uint)*(ushort *)(param_1 + 0x14);
    }
    else {
      uVar3 = 0;
    }
    param_4 = iVar1 + uVar3;
  }
  puVar7 = (undefined4 *)(uVar2 + 1);
  for (uVar3 = (param_4 & 0xffff) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_3 = *puVar7;
    puVar7 = puVar7 + 1;
    param_3 = param_3 + 1;
  }
  for (uVar3 = param_4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)param_3 = *(undefined1 *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    param_3 = (undefined4 *)((int)param_3 + 1);
  }
  return param_4;
}


