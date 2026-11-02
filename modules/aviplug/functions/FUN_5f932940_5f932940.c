/* Module: aviplug.dll
   Function: FUN_5f932940
   Address: 5f932940
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f932940(void *this,int param_1,int param_2)

{
  int extraout_EAX;
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_94;
  int local_90;
  undefined4 local_80 [32];
  
  iVar4 = *(int *)(param_2 + 0x60);
  if (iVar4 == *(int *)(param_1 + 0x60)) {
    iVar1 = 0;
    if (0 < iVar4) {
      piVar6 = (int *)(param_2 + 0xac);
      do {
        iVar1 = iVar1 + *piVar6;
        piVar6 = piVar6 + 0x20;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (iVar1 == *(int *)((int)this + 0x240)) {
      local_90 = 0;
      local_94 = 0;
      if (0 < *(int *)(param_1 + 0x60)) {
        puVar2 = (undefined4 *)(param_2 + 0x68);
        do {
          if (local_94 < *(int *)(param_2 + 0x60)) {
            piVar6 = puVar2 + 0x11;
            iVar4 = local_94;
LAB_5f9329d0:
            if ((piVar6[-0xf] != *(int *)((param_1 - param_2) + 8 + (int)puVar2)) ||
               (*piVar6 != *(int *)((param_1 - param_2) + 0x44 + (int)puVar2))) goto LAB_5f9329e9;
            if (iVar4 != local_94) {
              puVar8 = (undefined4 *)(iVar4 * 0x80 + 0x68 + param_2);
              puVar5 = puVar2;
              puVar7 = local_80;
              for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar7 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar7 = puVar7 + 1;
              }
              puVar5 = puVar8;
              puVar7 = puVar2;
              for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar7 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar7 = puVar7 + 1;
              }
              puVar5 = local_80;
              for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar8 = puVar8 + 1;
              }
            }
            local_90 = local_90 + 1;
          }
LAB_5f932a2a:
          local_94 = local_94 + 1;
          puVar2 = puVar2 + 0x20;
        } while (local_94 < *(int *)(param_1 + 0x60));
      }
      if (local_90 == *(int *)(param_2 + 0x60)) {
        iVar1 = 0;
        iVar4 = 0;
        local_94 = 0;
        if (0 < *(int *)(param_2 + 0x60)) {
          piVar6 = (int *)(param_2 + 0x68);
          while( true ) {
            iVar3 = 0;
            if (0 < piVar6[0x11]) {
              do {
                piVar6 = (int *)FUN_5f933500((int)this,iVar1,param_2,piVar6,0,1);
                if (extraout_EAX < 0) {
                  return;
                }
                iVar1 = iVar1 + 1;
                iVar3 = iVar3 + 1;
                iVar4 = extraout_EAX;
              } while (iVar3 < piVar6[0x11]);
            }
            if (iVar4 < 0) break;
            local_94 = local_94 + 1;
            piVar6 = piVar6 + 0x20;
            if (*(int *)(param_2 + 0x60) <= local_94) {
              return;
            }
          }
        }
      }
    }
  }
  return;
LAB_5f9329e9:
  iVar4 = iVar4 + 1;
  piVar6 = piVar6 + 0x20;
  if (*(int *)(param_2 + 0x60) <= iVar4) goto LAB_5f932a2a;
  goto LAB_5f9329d0;
}


