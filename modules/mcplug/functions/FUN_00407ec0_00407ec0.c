/* Module: mcplug.dll
   Function: FUN_00407ec0
   Address: 00407ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * __cdecl FUN_00407ec0(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  bool bVar6;
  
  pcVar4 = "malloc";
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_00407ef6:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00407efb;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_00407ef6;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00407efb:
  if (iVar3 == 0) {
    return malloc_exref;
  }
  pbVar5 = &DAT_00476a48;
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00407f37:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00407f3c;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00407f37;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00407f3c:
  if (iVar3 == 0) {
    return free_exref;
  }
  pcVar4 = "err_printf";
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_00407f78:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00407f7d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_00407f78;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00407f7d:
  if (iVar3 == 0) {
    return printf_exref;
  }
  pcVar4 = "prg_printf";
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_00407fb9:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00407fbe;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_00407fb9;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00407fbe:
  if (iVar3 == 0) {
    return printf_exref;
  }
  pcVar4 = "wrn_printf";
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_00407ffa:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00407fff;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_00407ffa;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00407fff:
  if (iVar3 == 0) {
    return printf_exref;
  }
  pbVar2 = (byte *)0x476a18;
  while( true ) {
    bVar1 = *param_1;
    bVar6 = bVar1 < *pbVar2;
    if (bVar1 != *pbVar2) break;
    if (bVar1 == 0) {
      return printf_exref;
    }
    bVar1 = param_1[1];
    bVar6 = bVar1 < pbVar2[1];
    if (bVar1 != pbVar2[1]) break;
    param_1 = param_1 + 2;
    pbVar2 = pbVar2 + 2;
    if (bVar1 == 0) {
      return printf_exref;
    }
  }
  return (undefined *)(~-(uint)(1 - bVar6 != (uint)(bVar6 != 0)) & (uint)printf_exref);
}


