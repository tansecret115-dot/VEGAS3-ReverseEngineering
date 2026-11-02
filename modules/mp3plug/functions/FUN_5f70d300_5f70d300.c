/* Module: mp3plug.dll
   Function: FUN_5f70d300
   Address: 5f70d300
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __cdecl FUN_5f70d300(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  puVar6 = (undefined4 *)0x0;
  uVar4 = 0;
  while( true ) {
    if ((float)(&DAT_5f74ba80)[uVar4 * 3] == param_2) {
      if (((param_1 == 0) || (param_1 == 1)) || (param_1 == 3)) {
        puVar6 = (undefined4 *)FUN_5f6d9760(0xc0);
        if (puVar6 != (undefined4 *)0x0) {
          puVar7 = *(undefined4 **)(uVar4 * 0xc + 0x5f74ba84);
          puVar8 = puVar6;
          for (iVar2 = 0x30; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
        }
      }
      else if ((param_1 == 2) &&
              (puVar6 = (undefined4 *)FUN_5f6d9760(0xc0), puVar6 != (undefined4 *)0x0)) {
        puVar7 = *(undefined4 **)(uVar4 * 0xc + 0x5f74ba88);
        puVar8 = puVar6;
        for (iVar2 = 0x30; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      goto LAB_5f70d37a;
    }
    uVar5 = uVar4 + 1;
    if (8 < uVar5) goto LAB_5f70d37a;
    if ((float)(&DAT_5f74ba80)[uVar5 * 3] == param_2) break;
    if (8 < uVar4 + 2) goto LAB_5f70d37a;
    if ((float)(&DAT_5f74ba8c)[uVar5 * 3] == param_2) {
      if (((param_1 == 0) || (param_1 == 1)) || (param_1 == 3)) {
        puVar6 = (undefined4 *)FUN_5f6d9760(0xc0);
        if (puVar6 != (undefined4 *)0x0) {
          puVar7 = *(undefined4 **)(uVar5 * 0xc + 0x5f74ba90);
          puVar8 = puVar6;
          for (iVar2 = 0x30; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
        }
      }
      else if ((param_1 == 2) &&
              (puVar6 = (undefined4 *)FUN_5f6d9760(0xc0), puVar6 != (undefined4 *)0x0)) {
        puVar7 = *(undefined4 **)(uVar5 * 0xc + 0x5f74ba94);
        puVar8 = puVar6;
        for (iVar2 = 0x30; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      goto LAB_5f70d37a;
    }
    uVar4 = uVar4 + 3;
    if (8 < uVar4) goto LAB_5f70d37a;
  }
  if (((param_1 == 0) || (param_1 == 1)) || (param_1 == 3)) {
    puVar6 = (undefined4 *)FUN_5f6d9760(0xc0);
    if (puVar6 != (undefined4 *)0x0) {
      puVar7 = *(undefined4 **)(uVar5 * 0xc + 0x5f74ba84);
      puVar8 = puVar6;
      for (iVar2 = 0x30; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
    }
  }
  else if ((param_1 == 2) &&
          (puVar6 = (undefined4 *)FUN_5f6d9760(0xc0), puVar6 != (undefined4 *)0x0)) {
    puVar7 = *(undefined4 **)(uVar5 * 0xc + 0x5f74ba88);
    puVar8 = puVar6;
    for (iVar2 = 0x30; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
  }
LAB_5f70d37a:
  iVar2 = puVar6[1];
  iVar1 = 0;
  iVar3 = 0;
  if (iVar2 != -1 && -1 < iVar2 + 1) {
    do {
      puVar6[iVar1 + 0x19] = iVar3;
      iVar2 = puVar6[1];
      iVar3 = iVar3 + puVar6[iVar1 + 3];
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2 + 1);
  }
  puVar6[iVar2 + 0x1a] = iVar3;
  return puVar6;
}


