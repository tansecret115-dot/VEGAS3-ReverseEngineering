/* Module: erv23260.dll
   Function: FUN_637f44d0
   Address: 637f44d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_637f44d0(void *param_1)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  
  *(undefined4 *)((int)param_1 + 0x460) = *(undefined4 *)(*(int *)((int)param_1 + 0x340) + 0x18);
  *(undefined4 *)((int)param_1 + 0x464) = *(undefined4 *)(*(int *)((int)param_1 + 0x340) + 8);
  FUN_637fcf80((int)param_1);
  if ((*(int *)((int)param_1 + 0x464) == 7) && (*(int *)((int)param_1 + 0x2f8) != 0)) {
    pcVar4 = FUN_637fddc0;
  }
  else {
    pcVar4 = FUN_637fdd60;
  }
  *(code **)((int)param_1 + 0x478) = pcVar4;
  *(undefined4 *)((int)param_1 + 0x47c) = 0;
  if ((*(int *)((int)param_1 + 0x460) == 3) ||
     (pcVar4 = FUN_637fdb50, *(int *)((int)param_1 + 0x460) == 5)) {
    pcVar4 = FUN_637fdc90;
  }
  *(code **)((int)param_1 + 0x470) = pcVar4;
  *(undefined4 *)((int)param_1 + 0x474) = 0;
  iVar5 = FUN_637f4300(param_1,*(int *)(*(int *)((int)param_1 + 0x340) + 0xf0),
                       *(int *)(*(int *)((int)param_1 + 0x340) + 0xf4));
  if (iVar5 != 0) {
    return iVar5;
  }
  if (*(int *)((int)param_1 + 0x338) == 0) {
    *(undefined4 *)((int)param_1 + 0x388) = *(undefined4 *)(*(int *)((int)param_1 + 0x340) + 0x110);
    *(undefined4 *)((int)param_1 + 0x38c) = *(undefined4 *)(*(int *)((int)param_1 + 0x340) + 0x118);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x388) = *(undefined4 *)(*(int *)((int)param_1 + 0x344) + 0x110);
    *(undefined4 *)((int)param_1 + 0x38c) = *(undefined4 *)(*(int *)((int)param_1 + 0x344) + 0x118);
  }
  if ((*(int *)((int)param_1 + 0x338) == 0) && (*(int *)((int)param_1 + 0x334) == 0)) {
    *(undefined4 *)((int)param_1 + 0x398) = 0;
    *(undefined4 *)((int)param_1 + 0x390) = 0;
    *(undefined4 *)((int)param_1 + 0x394) = 0;
  }
  else {
    iVar5 = *(int *)((int)param_1 + 0x348);
    *(undefined4 *)((int)param_1 + 0x398) = *(undefined4 *)(iVar5 + 0x118);
    *(undefined4 *)((int)param_1 + 0x390) = *(undefined4 *)(iVar5 + 0x110);
    *(undefined4 *)((int)param_1 + 0x394) = *(undefined4 *)(iVar5 + 0x114);
  }
  if (*(int *)((int)param_1 + 0x334) == 0) {
    uVar8 = *(undefined4 *)(*(int *)((int)param_1 + 0x348) + 0x11c);
  }
  else {
    uVar8 = *(undefined4 *)(*(int *)((int)param_1 + 0x340) + 0x11c);
  }
  *(undefined4 *)((int)param_1 + 0x39c) = uVar8;
  iVar5 = *(int *)((int)param_1 + 0x340);
  *(uint *)((int)param_1 + 0x3c8) = (*(uint *)(iVar5 + 0xfc) >> 4) * (*(uint *)(iVar5 + 0xf8) >> 4);
  uVar7 = *(uint *)(iVar5 + 0xf8) >> 4;
  *(uint *)((int)param_1 + 0x3b4) = uVar7;
  uVar6 = *(uint *)(iVar5 + 0xfc) >> 4;
  *(uint *)((int)param_1 + 0x3b8) = uVar6;
  if (uVar6 < 0x1a) {
    *(uint *)((int)param_1 + 0x3c4) = uVar6;
    *(uint *)((int)param_1 + 0x3bc) = uVar7;
  }
  else if (uVar6 < 0x33) {
    *(int *)((int)param_1 + 0x3c4) = (int)(uVar6 + 1) >> 1;
    uVar7 = *(uint *)((int)param_1 + 0x3b4);
    *(uint *)((int)param_1 + 0x3bc) = uVar7 * 2;
  }
  else {
    *(int *)((int)param_1 + 0x3c4) = (int)(uVar6 + 3) >> 2;
    uVar7 = *(uint *)((int)param_1 + 0x3b4);
    *(uint *)((int)param_1 + 0x3bc) = uVar7 * 4;
  }
  *(uint *)((int)param_1 + 0x3c0) = *(int *)((int)param_1 + 0x3b8) * uVar7;
  iVar5 = FUN_6381e2d0(param_1);
  if (iVar5 != 0) {
    return iVar5;
  }
  piVar1 = (int *)((int)param_1 + 0x358);
  *(undefined4 *)((int)param_1 + 0x34c) = 0;
  *(undefined4 *)((int)param_1 + 0x350) = 0;
  *(undefined4 *)((int)param_1 + 0x354) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)param_1 + 0x35c) = 0;
  *(undefined4 *)((int)param_1 + 0x360) = 0;
  if (*(int *)((int)param_1 + 0x3a4) != 0) {
    return 0;
  }
  iVar5 = 3;
  if (*(int *)((int)param_1 + 0x334) == 0) {
    iVar5 = *(int *)((int)param_1 + 0x460);
  }
  FUN_637f9810(*(void **)((int)param_1 + 0x2c0),iVar5,(undefined4 *)((int)param_1 + 0x34c),
               (undefined4 *)((int)param_1 + 0x350),(undefined4 *)((int)param_1 + 0x354),piVar1,
               (undefined4 *)((int)param_1 + 0x35c),(undefined4 *)((int)param_1 + 0x360));
  iVar5 = *(int *)((int)param_1 + 0x460);
  if ((((iVar5 != 0) && (iVar5 != 4)) &&
      ((*(int *)((int)param_1 + 0x300) != 0 ||
       ((((*(int *)((int)param_1 + 0x2f8) != 0 || (*(int *)((int)param_1 + 0x308) != 0)) ||
         (*(int *)((int)param_1 + 0x338) != 0)) || (iVar5 == 5)))))) &&
     (FUN_637f4460(*(int **)((int)param_1 + 0x35c)), *(int *)((int)param_1 + 0x338) != 0)) {
    FUN_637f4460(*(int **)((int)param_1 + 0x360));
  }
  if (*(int *)((int)param_1 + 0x360) != 0) {
    *(uint *)((int)param_1 + 0x33c) =
         (uint)(*(int *)(*piVar1 + 0xc) != *(int *)(*(int *)((int)param_1 + 0x360) + 0xc));
  }
  iVar5 = FUN_63819c20(param_1);
  if (iVar5 != 0) {
    return iVar5;
  }
  if ((*(int *)((int)param_1 + 0x2b8) == 0) || (*(int *)((int)param_1 + 0x88) == 0))
  goto LAB_637f48fb;
  iVar5 = *(int *)((int)param_1 + 0x460);
  if (iVar5 == 1) {
LAB_637f483b:
    if (iVar5 == 0) goto LAB_637f483f;
LAB_637f4853:
    uVar8 = *(undefined4 *)((int)param_1 + 0x460);
  }
  else {
    if (iVar5 != 0) {
      if ((*(int *)((int)param_1 + 0x338) == 0) && (*(int *)((int)param_1 + 0x334) == 0))
      goto LAB_637f48fb;
      goto LAB_637f483b;
    }
LAB_637f483f:
    iVar5 = FUN_637fa620(*(int *)((int)param_1 + 0x2b4));
    uVar8 = 1;
    if (iVar5 == 0) goto LAB_637f4853;
  }
  if (*(int *)((int)param_1 + 0x334) == 0) {
    iVar5 = *piVar1;
  }
  else {
    iVar5 = *(int *)((int)param_1 + 0x360);
  }
  iVar2 = *(int *)((int)param_1 + 0x340);
  iVar5 = FUN_637f51a0(*(void **)((int)param_1 + 0x2b8),iVar5,*(undefined4 *)((int)param_1 + 0x35c),
                       *(undefined4 *)(iVar2 + 0x100),*(undefined4 *)(iVar2 + 0xf0),
                       *(undefined4 *)(iVar2 + 0xf4),*(undefined4 *)((int)param_1 + 0x3c0),
                       *(undefined4 *)((int)param_1 + 0x3b4),uVar8,
                       *(undefined4 *)((int)param_1 + 0x39c),*(undefined4 *)((int)param_1 + 0x38c),
                       *(undefined4 *)((int)param_1 + 0x388),
                       (void *)((*(int *)((int)param_1 + 700) + 0x48) * 0x10 + (int)param_1));
  if (((*(int *)((int)param_1 + 0x338) != 0) &&
      (*(int *)(*(int *)(*(int *)((int)param_1 + 0x34c) + 0x28) + 8) == 3)) && (2 < iVar5)) {
    *(undefined4 *)((int)param_1 + 0x34c) = 0;
    return 0;
  }
LAB_637f48fb:
  if (((*(int *)((int)param_1 + 0x308) != 0) ||
      ((*(int *)((int)param_1 + 0x338) != 0 &&
       (*(int *)(*(int *)((int)param_1 + 0x344) + 0x120) != 0)))) &&
     (*(int *)((int)param_1 + 0x30c) == 0)) {
    if ((*(int *)((int)param_1 + 0x334) == 0) && (*(int *)((int)param_1 + 0x338) == 0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = (uint)*(byte *)(*(int *)((int)param_1 + 0x340) + 0x94);
    }
    puVar3 = (uint *)*piVar1;
    FUN_637f6ef0(*(void **)((int)param_1 + 0x2c4),*puVar3,puVar3[1],
                 *(uint *)(*(int *)((int)param_1 + 0x340) + 0xf8),
                 *(uint *)(*(int *)((int)param_1 + 0x340) + 0xfc),puVar3[7],
                 *(int *)((int)param_1 + 0x3c4),*(int *)((int)param_1 + 0x3bc),
                 *(uint *)((int)param_1 + 0x3b4),(int)param_1 + 0x3cc,*(int *)((int)param_1 + 0x39c)
                 ,*(int *)((int)param_1 + 800),(uint)(2 < *(int *)((int)param_1 + 700)),uVar7);
    *(undefined4 *)(*piVar1 + 0x7c) = 1;
    if (*(int *)((int)param_1 + 0x334) != 0) {
      puVar3 = *(uint **)((int)param_1 + 0x360);
      FUN_637f6ef0(*(void **)((int)param_1 + 0x2c4),*puVar3,puVar3[1],
                   *(uint *)(*(int *)((int)param_1 + 0x340) + 0xf8),
                   *(uint *)(*(int *)((int)param_1 + 0x340) + 0xfc),puVar3[7],
                   *(int *)((int)param_1 + 0x3c4),*(int *)((int)param_1 + 0x3bc),
                   *(uint *)((int)param_1 + 0x3b4),(int)param_1 + 0x3cc,
                   *(int *)((int)param_1 + 0x39c),*(int *)((int)param_1 + 800),
                   (uint)(2 < *(int *)((int)param_1 + 700)),0);
      *(undefined4 *)(*(int *)((int)param_1 + 0x360) + 0x7c) = 1;
    }
  }
  return 0;
}


