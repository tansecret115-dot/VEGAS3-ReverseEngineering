/* Module: vegas30.exe
   Function: FUN_004bb6f0
   Address: 004bb6f0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_004bb6f0(void)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint local_8;
  
  if (((*(uint *)(DAT_00647630 + 0x18) & 2) == 0) || ((*(uint *)(DAT_00647630 + 0x18) & 0x10) != 0))
  {
    local_8 = *(uint *)(DAT_00647630 + 0xb70);
    uVar10 = *(uint *)(DAT_00647630 + 0xb74);
  }
  else {
    local_8 = *(uint *)(DAT_00647630 + 0xb30);
    uVar10 = *(uint *)(DAT_00647630 + 0xb34);
  }
  puVar5 = (uint *)FUN_005b89b0(DAT_0064b138);
  uVar1 = *puVar5;
  uVar9 = 0;
  if (uVar1 != 0) {
    piVar6 = (int *)puVar5[2];
    do {
      puVar2 = (uint *)*piVar6;
      if (((((byte *)puVar2[10] != (byte *)0x0) && ((*(byte *)puVar2[10] & 1) != 0)) &&
          (*puVar2 == local_8)) && (puVar2[1] == uVar10)) {
        return false;
      }
      uVar9 = uVar9 + 1;
      piVar6 = piVar6 + 1;
    } while (uVar9 < uVar1);
  }
  uVar9 = 0;
  if (uVar1 != 0) {
    piVar6 = (int *)puVar5[2];
    do {
      puVar2 = (uint *)*piVar6;
      if (((byte *)puVar2[10] == (byte *)0x0) || ((*(byte *)puVar2[10] & 1) == 0)) {
        uVar3 = puVar2[1];
        uVar4 = *puVar2;
        if (((int)uVar3 <= (int)uVar10) && (((int)uVar3 < (int)uVar10 || (uVar4 < local_8)))) {
          iVar7 = puVar2[3] + uVar3 + (uint)CARRY4(puVar2[2],uVar4);
          if (((int)uVar10 < iVar7) || (((int)uVar10 <= iVar7 && (local_8 < puVar2[2] + uVar4)))) {
            uVar10 = 0;
            iVar7 = uVar9 + 1;
            if ((iVar7 < 0) || ((int)((-(uint)(puVar5 != (uint *)0x0) & uVar1) - 1) < iVar7)) {
              iVar8 = 0;
            }
            else {
              iVar8 = *(int *)(puVar5[2] + iVar7 * 4);
            }
            if (iVar8 == 0) goto LAB_004bb824;
            piVar6 = (int *)(puVar5[2] + iVar7 * 4);
            goto LAB_004bb7f8;
          }
        }
      }
      uVar9 = uVar9 + 1;
      piVar6 = piVar6 + 1;
    } while (uVar9 < uVar1);
  }
  return false;
  while( true ) {
    iVar7 = iVar7 + 1;
    piVar6 = piVar6 + 1;
    if ((iVar7 < 0) || ((int)((-(uint)(puVar5 != (uint *)0x0) & uVar1) - 1) < iVar7)) {
      iVar8 = 0;
    }
    else {
      iVar8 = *piVar6;
    }
    uVar10 = uVar10 + 1;
    if (iVar8 == 0) break;
LAB_004bb7f8:
    if ((*(byte **)(iVar8 + 0x28) == (byte *)0x0) || ((**(byte **)(iVar8 + 0x28) & 1) == 0)) break;
  }
LAB_004bb824:
  return uVar10 < 99;
}


