/* Module: erv33260.dll
   Function: FUN_67084b10
   Address: 67084b10
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl
FUN_67084b10(byte *param_1,int param_2,undefined2 param_3,char *param_4,int *param_5,int *param_6,
            int param_7,int param_8,int param_9,int param_10)

{
  int iVar1;
  char cVar3;
  byte *pbVar2;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  char *pcVar12;
  byte bStack0000000f;
  byte local_6 [2];
  
  param_4[0] = '\0';
  param_4[1] = '\0';
  cVar7 = (char)param_3;
  uVar4 = 1;
  cVar3 = (char)((ushort)param_3 >> 8);
  if ((((cVar7 != '\0') || (cVar3 != '\0')) && (param_7 <= cVar7)) &&
     (((cVar7 <= param_8 && (param_9 <= cVar3)) && (cVar3 <= param_10)))) {
    *(undefined2 *)(param_4 + 2) = param_3;
    uVar4 = 2;
  }
  bVar6 = *(byte *)(*(int *)(param_1 + 0x30) + 5 + param_2 * 0xc);
  iVar1 = *(int *)(param_1 + 0x1c) + *(int *)(param_2 * 0x10 + 8 + *(int *)(param_1 + 0x34)) * 2;
  if ((~bVar6 & 1) == 0) {
    pbVar2 = (byte *)(iVar1 + -2);
  }
  else {
    pbVar2 = local_6;
  }
  pbVar10 = pbVar2;
  pbVar9 = pbVar2;
  if ((~(bVar6 >> 2) & 1) == 0) {
    pbVar9 = (byte *)(iVar1 + *(int *)(param_1 + 0x4c) * -2);
    if ((~(bVar6 >> 1) & 1) == 0) {
      pbVar10 = pbVar9 + 8;
    }
    else {
      pbVar10 = pbVar9 + -2;
    }
  }
  param_1 = pbVar9;
  bVar6 = *pbVar2;
  bVar5 = *param_1;
  bStack0000000f = bVar6;
  if ((char)bVar5 <= (char)bVar6) {
    bStack0000000f = bVar5;
  }
  bVar8 = *pbVar10;
  if ((char)bVar8 <= (char)bVar5) {
    bVar5 = bVar8;
  }
  if ((char)bVar6 <= (char)bVar8) {
    bVar8 = bVar6;
  }
  *param_5 = (int)(char)(bStack0000000f ^ bVar5 ^ bVar8);
  bVar6 = pbVar2[1];
  bVar5 = param_1[1];
  bStack0000000f = bVar6;
  if ((char)bVar5 <= (char)bVar6) {
    bStack0000000f = bVar5;
  }
  bVar8 = pbVar10[1];
  if ((char)bVar8 <= (char)bVar5) {
    bVar5 = bVar8;
  }
  if ((char)bVar8 < (char)bVar6) {
    bVar6 = bVar8;
  }
  *param_6 = (int)(char)(bVar6 ^ bStack0000000f ^ bVar5);
  param_4[uVar4 * 2] =
       (char)((ulonglong)((longlong)*param_5 * 0x55555556) >> 0x20) -
       (char)((longlong)*param_5 * 0x55555556 >> 0x3f);
  uVar11 = 0;
  cVar7 = (char)((ulonglong)((longlong)*param_6 * 0x55555556) >> 0x20) -
          (char)((longlong)*param_6 * 0x55555556 >> 0x3f);
  param_4[uVar4 * 2 + 1] = cVar7;
  pcVar12 = param_4;
  if (uVar4 != 0) {
    do {
      cVar3 = param_4[uVar4 * 2];
      if ((cVar3 == *pcVar12) && (cVar7 == pcVar12[1])) break;
      if ((uVar11 == uVar4 - 1) &&
         ((((param_7 <= cVar3 && (cVar3 <= param_8)) && (param_9 <= cVar7)) && (cVar7 <= param_10)))
         ) {
        uVar4 = uVar4 + 1;
        break;
      }
      uVar11 = uVar11 + 1;
      pcVar12 = pcVar12 + 2;
    } while (uVar11 < uVar4);
  }
  param_4[uVar4 * 2] =
       (char)((ulonglong)((longlong)(int)(char)*param_1 * 0x55555556) >> 0x20) -
       (char)((longlong)(int)(char)*param_1 * 0x55555556 >> 0x3f);
  uVar11 = 0;
  cVar7 = (char)((ulonglong)((longlong)(int)(char)param_1[1] * 0x55555556) >> 0x20) -
          (char)((longlong)(int)(char)param_1[1] * 0x55555556 >> 0x3f);
  param_4[uVar4 * 2 + 1] = cVar7;
  if (uVar4 != 0) {
    cVar3 = param_4[uVar4 * 2];
    pcVar12 = param_4;
    do {
      if ((cVar3 == *pcVar12) && (cVar7 == pcVar12[1])) break;
      if ((((uVar11 == uVar4 - 1) && ((param_7 <= cVar3 && (cVar3 <= param_8)))) &&
          (param_9 <= cVar7)) && (cVar7 <= param_10)) {
        uVar4 = uVar4 + 1;
        break;
      }
      uVar11 = uVar11 + 1;
      pcVar12 = pcVar12 + 2;
    } while (uVar11 < uVar4);
  }
  param_4[uVar4 * 2] =
       (char)((ulonglong)((longlong)(int)(char)*pbVar2 * 0x55555556) >> 0x20) -
       (char)((longlong)(int)(char)*pbVar2 * 0x55555556 >> 0x3f);
  uVar11 = 0;
  cVar7 = (char)((ulonglong)((longlong)(int)(char)pbVar2[1] * 0x55555556) >> 0x20) -
          (char)((longlong)(int)(char)pbVar2[1] * 0x55555556 >> 0x3f);
  param_4[uVar4 * 2 + 1] = cVar7;
  if (uVar4 != 0) {
    cVar3 = param_4[uVar4 * 2];
    while( true ) {
      if ((cVar3 == *param_4) && (cVar7 == param_4[1])) {
        return uVar4;
      }
      if ((((uVar11 == uVar4 - 1) && (param_7 <= cVar3)) && (cVar3 <= param_8)) &&
         ((param_9 <= cVar7 && (cVar7 <= param_10)))) break;
      uVar11 = uVar11 + 1;
      param_4 = param_4 + 2;
      if (uVar4 <= uVar11) {
        return uVar4;
      }
    }
    uVar4 = uVar4 + 1;
  }
  return uVar4;
}


