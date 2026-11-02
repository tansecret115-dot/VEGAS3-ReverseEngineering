/* Module: sftrans1.dll
   Function: FUN_004db730
   Address: 004db730
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004db730(int *param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int unaff_ESI;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 local_6c [4];
  int *piStack_5c;
  int *piStack_10;
  int *piStack_c;
  int *piStack_8;
  int iStack_4;
  
  puVar6 = local_6c;
  for (iVar2 = 0x1b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_6c[0] = 0x6c;
  iVar2 = (**(code **)(*param_1 + 100))(param_1,0,local_6c,1,0);
  if (iVar2 != 0) {
    return iVar2;
  }
  piVar4 = piStack_8;
  if (piStack_8 != (int *)0x0) goto LAB_004db7b1;
  if (piStack_c[4] == 0) {
    if (((piStack_c[8] != 0) || (uVar1 = *(ushort *)((int)piStack_c + 0xe), uVar1 == 0)) ||
       (8 < uVar1)) goto LAB_004db7a7;
    iVar2 = 1 << ((byte)uVar1 & 0x1f);
  }
  else {
    if (piStack_c[4] == 3) {
      piVar4 = piStack_c + 0xd;
      goto LAB_004db7b1;
    }
LAB_004db7a7:
    iVar2 = piStack_c[8];
  }
  piVar4 = (int *)(*piStack_c + iVar2 * 4 + (int)piStack_c);
LAB_004db7b1:
  piStack_8 = (int *)0x0;
  if (0 < piStack_c[2]) {
    do {
      piVar5 = piVar4;
      piVar7 = piStack_5c;
      for (uVar3 = piStack_c[1] & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
        *piVar7 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar7 = piVar7 + 1;
      }
      piStack_5c = (int *)((int)piStack_5c + unaff_ESI);
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(char *)piVar7 = (char)*piVar5;
        piVar5 = (int *)((int)piVar5 + 1);
        piVar7 = (int *)((int)piVar7 + 1);
      }
      piVar4 = (int *)((int)piVar4 + iStack_4);
      piStack_8 = (int *)((int)piStack_8 + 1);
      param_1 = piStack_10;
    } while ((int)piStack_8 < piStack_c[2]);
  }
  (**(code **)(*param_1 + 0x80))(param_1,0);
  return 0;
}


