/* Module: vidpcore.dll
   Function: FUN_5ded7790
   Address: 5ded7790
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_5ded7790(int param_1)

{
  int iVar1;
  undefined *puVar2;
  
  switch(param_1) {
  case 100:
    puVar2 = &DAT_5dfc3590;
    break;
  default:
    if (0x11 < param_1) {
      return (undefined *)0x0;
    }
    puVar2 = &DAT_5dfc3410 + param_1 * 8;
    break;
  case 0x66:
    puVar2 = &DAT_5dfc3570;
    break;
  case 0x68:
    puVar2 = &DAT_5dfc3580;
    break;
  case 0x6e:
    puVar2 = &DAT_5dfc3560;
    break;
  case 0x70:
    puVar2 = &DAT_5dfc3550;
    break;
  case 0x78:
    puVar2 = &DAT_5dfc3540;
    break;
  case 0x81:
    puVar2 = &DAT_5dfc3510;
    break;
  case 0x82:
    puVar2 = &DAT_5dfc3530;
    break;
  case 0x86:
    puVar2 = &DAT_5dfc3520;
    break;
  case 0x8c:
    puVar2 = &DAT_5dfc34e0;
    break;
  case 0x8d:
    puVar2 = &DAT_5dfc34d0;
    break;
  case 0x8e:
    puVar2 = &DAT_5dfc34c0;
    break;
  case 0x8f:
    puVar2 = &DAT_5dfc34b0;
    break;
  case 0x90:
    puVar2 = &DAT_5dfc34a0;
    break;
  case 0x91:
    puVar2 = &DAT_5dfc3500;
    break;
  case 0x92:
    puVar2 = &DAT_5dfc34f0;
  }
  if ((puVar2 != (undefined *)0x0) && (*(int *)(puVar2 + 4) == 0)) {
    iVar1 = FUN_5ded6ce0(param_1);
    if (iVar1 == 0) {
      return (undefined *)0x0;
    }
    FUN_5ded76e0(iVar1,puVar2);
  }
  return puVar2;
}


