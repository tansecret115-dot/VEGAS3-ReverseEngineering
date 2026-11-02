/* Module: erv23260.dll
   Function: FUN_63813320
   Address: 63813320
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_63813320(void *param_1)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar1 = FUN_638128a0((int)param_1);
  *(undefined4 *)((int)param_1 + 0x508) = 0x2000a;
  if (*(int *)((int)param_1 + 0x68) != 0) {
    *(undefined4 *)((int)param_1 + 0x508) = 0x402000a;
  }
  switch(*(undefined4 *)((int)param_1 + 0x30)) {
  case 0:
    local_10 = *(int *)((int)param_1 + 0x10);
    local_c = *(int *)((int)param_1 + 8);
    if (*(int *)((int)param_1 + 0x50) != 0) {
      *(uint *)((int)param_1 + 0x508) = *(uint *)((int)param_1 + 0x508) | 0x40;
    }
    uVar4 = 0;
    if (*(int *)((int)param_1 + 0x18) != 0) {
      do {
        iVar3 = *(int *)((int)param_1 + 0x14);
        if (iVar3 != 0) {
          pbVar2 = (byte *)(*(int *)(*(int *)((int)param_1 + 0x110) + uVar4 * iVar3 * 4) +
                            (iVar1 + 8) * *(int *)((int)param_1 + 0x118) +
                            *(int *)((int)param_1 + 0x120) + 10);
          do {
            iVar3 = iVar3 + -1;
            *pbVar2 = *pbVar2 | 0x80;
            pbVar2 = pbVar2 + 0x10;
          } while (iVar3 != 0);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)((int)param_1 + 0x18));
      iVar1 = *(int *)((int)param_1 + 0x510);
      break;
    }
    goto LAB_63813440;
  case 1:
    local_10 = *(int *)((int)param_1 + 0x10);
    local_c = *(int *)((int)param_1 + 8);
    if (*(int *)((int)param_1 + 100) != 0) {
      *(uint *)((int)param_1 + 0x508) = *(uint *)((int)param_1 + 0x508) | 0x80000;
    }
    if (*(int *)((int)param_1 + 0x3c) != 0) {
      *(uint *)((int)param_1 + 0x508) = *(uint *)((int)param_1 + 0x508) | 0x20;
    }
    if ((*(int *)((int)param_1 + 0x54) != 0) || (*(int *)((int)param_1 + 0x3c) != 0)) {
      *(uint *)((int)param_1 + 0x508) = *(uint *)((int)param_1 + 0x508) & 0xfffffff7 | 4;
    }
    if (*(int *)((int)param_1 + 0x34) != 0) {
      *(uint *)((int)param_1 + 0x508) = *(uint *)((int)param_1 + 0x508) & 0xfffffff7 | 0x10;
    }
LAB_63813440:
    iVar1 = *(int *)((int)param_1 + 0x510);
    break;
  default:
    break;
  case 3:
    local_c = *(int *)((int)param_1 + 8);
    local_10 = *(int *)((int)param_1 + 0x10);
    if (*(int *)((int)param_1 + 100) != 0) {
      *(uint *)((int)param_1 + 0x508) = *(uint *)((int)param_1 + 0x508) | 0x80000;
    }
    iVar1 = *(int *)((int)param_1 + 0x514);
    *(uint *)((int)param_1 + 0x508) = *(uint *)((int)param_1 + 0x508) & 0xfffffff7 | 0x20400;
    switch(*(undefined4 *)(*(int *)((int)param_1 + 0x10c) + 0x108)) {
    case 0:
    case 1:
      iVar3 = *(int *)((int)param_1 + 0x510);
      break;
    default:
      iVar3 = local_4;
      break;
    case 4:
      iVar3 = *(int *)((int)param_1 + 0x51c);
      break;
    case 5:
      iVar3 = *(int *)((int)param_1 + 0x518);
    }
    *(int *)((int)param_1 + iVar1 * 0x30 + 0x394) =
         ((iVar3 - iVar1) * *(int *)((int)param_1 + 0x118) - *(int *)((int)param_1 + 0x120)) +
         *(int *)(*(int *)((int)param_1 + 0x10c) + 0x120);
    FUN_638114a0(param_1,*(uint *)(local_c + 0x14) % *(uint *)(local_c + 0x18),
                 *(uint *)(*(int *)((int)param_1 + 0xc) + 0x14) %
                 *(uint *)(*(int *)((int)param_1 + 0xc) + 0x18),
                 *(uint *)(local_10 + 0x14) % *(uint *)(local_10 + 0x18),&local_8,&local_4);
    *(int *)((int)param_1 + iVar1 * 0x30 + 0x3a0) = local_8;
    *(int *)((int)param_1 + iVar1 * 0x30 + 0x3a4) = local_4;
    break;
  case 4:
    local_10 = *(int *)((int)param_1 + 8);
    local_c = *(int *)((int)param_1 + 0x10);
    iVar1 = *(int *)((int)param_1 + 0x51c);
    *(uint *)((int)param_1 + 0x508) = *(uint *)((int)param_1 + 0x508) | 0xc000;
    break;
  case 5:
    local_10 = *(int *)((int)param_1 + 8);
    local_c = *(int *)((int)param_1 + 0x10);
    iVar1 = *(int *)((int)param_1 + 0x518);
    *(uint *)((int)param_1 + 0x508) = *(uint *)((int)param_1 + 0x508) | 0xf000;
  }
  if ((*(int *)((int)param_1 + 0x30) == 0) && (*(int *)((int)param_1 + 0x50) != 0)) {
    iVar3 = *(int *)((int)param_1 + 0x130);
    iVar7 = 0;
    iVar6 = 0;
    iVar5 = 0;
  }
  else {
    iVar7 = *(int *)((int)param_1 + 0x134);
    iVar5 = *(int *)((int)param_1 + 0x130);
    iVar6 = *(int *)(local_10 + 4);
    iVar3 = *(int *)(local_c + 4);
  }
  FUN_63812470(param_1,iVar1,(int)param_1 + 0x348,iVar1,*(int *)((int)param_1 + 0x120),
               *(int *)(*(int *)((int)param_1 + 0xc) + 4),iVar3,iVar5,iVar6,iVar7);
  return;
}


