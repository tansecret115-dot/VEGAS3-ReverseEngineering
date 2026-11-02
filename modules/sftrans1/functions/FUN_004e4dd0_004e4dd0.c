/* Module: sftrans1.dll
   Function: FUN_004e4dd0
   Address: 004e4dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_004e4dd0(int param_1)

{
  int iVar1;
  undefined *puVar2;
  
  switch(param_1) {
  case 100:
    puVar2 = &DAT_005fbf18;
    break;
  default:
    if (0x11 < param_1) {
      return (undefined *)0x0;
    }
    puVar2 = &DAT_005fbd98 + param_1 * 8;
    break;
  case 0x66:
    puVar2 = &DAT_005fbef8;
    break;
  case 0x68:
    puVar2 = &DAT_005fbf08;
    break;
  case 0x6e:
    puVar2 = &DAT_005fbee8;
    break;
  case 0x70:
    puVar2 = &DAT_005fbed8;
    break;
  case 0x78:
    puVar2 = &DAT_005fbec8;
    break;
  case 0x81:
    puVar2 = &DAT_005fbe98;
    break;
  case 0x82:
    puVar2 = &DAT_005fbeb8;
    break;
  case 0x86:
    puVar2 = &DAT_005fbea8;
    break;
  case 0x8c:
    puVar2 = &DAT_005fbe68;
    break;
  case 0x8d:
    puVar2 = &DAT_005fbe58;
    break;
  case 0x8e:
    puVar2 = &DAT_005fbe48;
    break;
  case 0x8f:
    puVar2 = &DAT_005fbe38;
    break;
  case 0x90:
    puVar2 = &DAT_005fbe28;
    break;
  case 0x91:
    puVar2 = &DAT_005fbe88;
    break;
  case 0x92:
    puVar2 = &DAT_005fbe78;
  }
  if ((puVar2 != (undefined *)0x0) && (*(int *)(puVar2 + 4) == 0)) {
    iVar1 = FUN_004e4320(param_1);
    if (iVar1 == 0) {
      return (undefined *)0x0;
    }
    FUN_004e4d20(iVar1,puVar2);
  }
  return puVar2;
}


