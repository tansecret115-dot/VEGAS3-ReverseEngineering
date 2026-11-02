/* Module: rmme3260.dll
   Function: FUN_66211940
   Address: 66211940
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66211940(void *this,byte *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  
  uVar2 = 0xffffffff;
  if (*(int *)((int)this + 0xf4) != 0) {
    puVar3 = (undefined4 *)(*(int *)((int)this + 0x100) + 0x10);
    uVar2 = 0;
    do {
      pbVar5 = (byte *)*puVar3;
      pbVar7 = param_1;
      if (pbVar5 != (byte *)0x0) {
        do {
          bVar1 = *pbVar5;
          bVar8 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_6621199d:
            iVar6 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_662119a2;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar8 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_6621199d;
          pbVar5 = pbVar5 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_662119a2:
        if (iVar6 == 0) goto LAB_662119c1;
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 5;
    } while (uVar2 < *(uint *)((int)this + 0xf4));
    uVar2 = 0xffffffff;
  }
LAB_662119c1:
  if ((int)uVar2 < 1) {
    *(undefined4 *)((int)this + 0x24) = 0;
    return;
  }
  uVar4 = (**(code **)(*(int *)this + 0x4c))
                    (*(undefined4 *)(*(int *)((int)this + 0x100) + 8 + uVar2 * 0x14));
  *(undefined4 *)((int)this + 0x24) = uVar4;
  return;
}


