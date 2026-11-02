/* Module: vegas30.exe
   Function: FUN_004ea250
   Address: 004ea250
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004ea250(undefined4 param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint local_20 [8];
  
  iVar3 = -0x7fffbffb;
  iVar2 = FUN_005b8630(param_1);
  if (*(char *)(iVar2 + 0x1d0) != '\x01') goto LAB_004ea30e;
  uVar1 = *(uint *)(param_2 + 0x18);
  uVar4 = param_3 << 0x18 | uVar1;
  if ((param_4 != 1) && (iVar3 = FUN_005b4620(*(undefined4 *)(iVar2 + 0x3bc),uVar4), iVar3 != 0)) {
    return 0;
  }
  iVar3 = FUN_005b4660(iVar2 + 0x3bc,uVar4);
  if (iVar3 < 0) goto LAB_004ea30e;
  puVar5 = local_20;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  switch(param_3) {
  case 1:
    local_20[0] = 0x736c6b74;
    break;
  default:
    FUN_004ea010(iVar2,0x80004005);
    return -0x7fffbffb;
  case 0xb:
    local_20[0] = 0x6b617274;
    local_20[3] = 2;
    break;
  case 0xc:
    local_20[0] = 0x6b617274;
    local_20[3] = 1;
    break;
  case 0xd:
    local_20[0] = 0x64686b74;
    break;
  case 0xe:
  case 0x1e:
    local_20[0] = 0x75616b74;
    local_20[4] = uVar1;
    iVar3 = FUN_005b5820(local_20);
    if (param_3 == 0x1e) {
      if (iVar3 < 0) goto LAB_004ea30e;
      goto switchD_004ea2e1_caseD_f;
    }
    goto LAB_004ea30a;
  case 0xf:
switchD_004ea2e1_caseD_f:
    puVar5 = local_20;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    local_20[0] = 0x73656b74;
    break;
  case 0x21:
    local_20[0] = 0x6c666b74;
    break;
  case 0x29:
    local_20[0] = 0x68766b74;
  }
  local_20[4] = uVar1;
  iVar3 = FUN_005b5820(local_20);
LAB_004ea30a:
  if (-1 < iVar3) {
    return iVar3;
  }
LAB_004ea30e:
  FUN_004ea010(iVar2,iVar3);
  return iVar3;
}


