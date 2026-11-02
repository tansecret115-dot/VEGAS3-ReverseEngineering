/* Module: rv203260.dll
   Function: FUN_638a59f0
   Address: 638a59f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_638a59f0(byte *param_1,int *param_2,FILE *param_3)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  bool bVar8;
  byte local_108 [260];
  
  uVar5 = 0xffffffff;
  pbVar3 = param_1;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
  } while (bVar1 != 0);
  uVar5 = ~uVar5;
  do {
    pcVar2 = fgets((char *)local_108,0x104,param_3);
    if (pcVar2 == (char *)0x0) {
      return 0;
    }
    if (((((local_108[0] == 0x53) || (local_108[0] == 0x73)) && (local_108[1] == 'c')) &&
        ((local_108[2] == 'e' && (local_108[3] == 'n')))) && (local_108[4] == 'e')) {
      return 0;
    }
    local_108[uVar5 - 1] = 0;
    pbVar3 = local_108;
    pbVar7 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar8 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_638a5a97:
        iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_638a5a9c;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar8 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_638a5a97;
      pbVar3 = pbVar3 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_638a5a9c:
  } while (iVar4 != 0);
  uVar6 = 0xffffffff;
  local_108[uVar5 - 1] = 0x20;
  pbVar3 = local_108;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
  } while (bVar1 != 0);
  if ((~uVar6 != 1) && (bVar1 = local_108[uVar5], bVar1 != 10)) {
    while (((bVar1 != 0xd && (((bVar1 != 0 && (uVar5 <= ~uVar6 - 1)) && (bVar1 != 0x2c)))) &&
           ((bVar1 != 0x3b && (bVar1 != 0x2e))))) {
      if (('/' < (char)bVar1) && ((char)bVar1 < ':')) {
        pbVar3 = local_108 + uVar5 + 1;
        *param_2 = (char)local_108[uVar5] + -0x30;
        bVar1 = *pbVar3;
        while (('/' < (char)bVar1 && ((char)bVar1 < ':'))) {
          bVar1 = *pbVar3;
          pbVar3 = pbVar3 + 1;
          *param_2 = (char)bVar1 + -0x30 + *param_2 * 10;
          bVar1 = *pbVar3;
        }
        return 1;
      }
      bVar1 = local_108[uVar5 + 1];
      uVar5 = uVar5 + 1;
      if (bVar1 == 10) {
        return 0;
      }
    }
  }
  return 0;
}


