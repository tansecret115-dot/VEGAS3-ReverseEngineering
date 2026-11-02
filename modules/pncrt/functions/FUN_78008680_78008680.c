/* Module: pncrt.dll
   Function: FUN_78008680
   Address: 78008680
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_78008680(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  int *piVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  
  piVar5 = param_5;
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  if (param_3 != (byte *)0x0) {
    *param_3 = *param_1;
    param_3 = param_3 + 1;
  }
  *param_5 = *param_5 + 1;
  if (*param_1 == 0x22) {
    bVar2 = param_1[1];
    while ((pbVar6 = param_1 + 1, bVar2 != 0x22 && (bVar2 != 0))) {
      if (((*(byte *)((int)&_mbctype + bVar2 + 1) & 4) != 0) &&
         (*param_5 = *param_5 + 1, param_3 != (byte *)0x0)) {
        *param_3 = *pbVar6;
        param_3 = param_3 + 1;
        pbVar6 = param_1 + 2;
      }
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *pbVar6;
        param_3 = param_3 + 1;
      }
      param_1 = pbVar6;
      bVar2 = pbVar6[1];
    }
    *param_5 = *param_5 + 1;
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    if (*pbVar6 == 0x22) {
      pbVar6 = param_1 + 2;
    }
  }
  else {
    do {
      *piVar5 = *piVar5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      bVar2 = *param_1;
      pbVar6 = param_1 + 1;
      param_5 = (int *)(uint)bVar2;
      if ((*(byte *)((int)param_5 + 0x780421f9) & 4) != 0) {
        *piVar5 = *piVar5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar6;
          param_3 = param_3 + 1;
        }
        pbVar6 = param_1 + 2;
      }
      if (bVar2 == 0x20) break;
      if (bVar2 == 0) goto LAB_78008769;
      param_1 = pbVar6;
    } while (bVar2 != 9);
    if (bVar2 == 0) {
LAB_78008769:
      pbVar6 = pbVar6 + -1;
    }
    else if (param_3 != (byte *)0x0) {
      param_3[-1] = 0;
    }
  }
  bVar4 = false;
  while (*pbVar6 != 0) {
    for (; (*pbVar6 == 0x20 || (*pbVar6 == 9)); pbVar6 = pbVar6 + 1) {
    }
    if (*pbVar6 == 0) break;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    if (param_3 != (byte *)0x0) {
      *param_3 = *pbVar6;
      param_3 = param_3 + 1;
    }
    iVar7 = *piVar5 + 1;
    *piVar5 = iVar7;
    while( true ) {
      uVar8 = 0;
      bVar3 = true;
      bVar2 = *pbVar6;
      while (bVar2 == 0x5c) {
        pbVar1 = pbVar6 + 1;
        pbVar6 = pbVar6 + 1;
        uVar8 = uVar8 + 1;
        bVar2 = *pbVar1;
      }
      if (*pbVar6 == 0x22) {
        if ((uVar8 & 1) == 0) {
          if ((bVar4) && (pbVar6[1] == 0x22)) {
            pbVar6 = pbVar6 + 1;
          }
          else {
            bVar3 = false;
          }
          bVar4 = !bVar4;
        }
        uVar8 = uVar8 >> 1;
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        if (param_3 != (byte *)0x0) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
        iVar7 = *piVar5 + 1;
        *piVar5 = iVar7;
      }
      bVar2 = *pbVar6;
      if ((bVar2 == 0) || ((!bVar4 && ((bVar2 == 0x20 || (bVar2 == 9)))))) break;
      if (bVar3) {
        if (param_3 == (byte *)0x0) {
          if ((*(byte *)((int)&_mbctype + bVar2 + 1) & 4) != 0) {
            pbVar6 = pbVar6 + 1;
            *piVar5 = iVar7 + 1;
          }
          iVar7 = *piVar5 + 1;
          *piVar5 = iVar7;
          goto LAB_78008885;
        }
        if ((*(byte *)((int)&_mbctype + bVar2 + 1) & 4) != 0) {
          *param_3 = bVar2;
          param_3 = param_3 + 1;
          pbVar6 = pbVar6 + 1;
          *piVar5 = *piVar5 + 1;
        }
        *param_3 = *pbVar6;
        param_3 = param_3 + 1;
        iVar7 = *piVar5 + 1;
        *piVar5 = iVar7;
        pbVar6 = pbVar6 + 1;
      }
      else {
LAB_78008885:
        pbVar6 = pbVar6 + 1;
      }
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    *piVar5 = *piVar5 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}


