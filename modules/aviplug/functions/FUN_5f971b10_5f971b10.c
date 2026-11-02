/* Module: aviplug.dll
   Function: FUN_5f971b10
   Address: 5f971b10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f971b10(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  uint *puVar8;
  undefined8 uVar9;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar7 = (int *)(param_1 + 8);
  iVar5 = 6;
  do {
    puVar6 = (uint *)*piVar7;
    uVar2 = *puVar6;
    puVar8 = puVar6 + 2;
    *param_2 = (int)(puVar6[1] << 0x17) >> 0x11;
    uVar3 = puVar6[3];
    if (*puVar8 != 0x1556) {
      puVar6 = (uint *)(&DAT_5f9dbc7c + *puVar8 * 4 + (uVar2 & 4) * 0x100);
      do {
        uVar9 = pmaddwd((ulonglong)*puVar6,(ulonglong)uVar3);
        uVar4 = puVar8[2];
        uVar3 = puVar8[3];
        if (puVar6[0x80] == 0) break;
        param_2[puVar6[0x80]] =
             (int)uVar9 >>
             (ulonglong)
             *(uint *)(&DAT_5f9db878 + puVar6[0x40] * 4 + (uVar2 & 3) * 0x10 + iVar1 * 0x40);
        puVar6 = puVar6 + uVar4 + 1;
        puVar8 = puVar8 + 2;
      } while (uVar4 != 0x1556);
    }
    piVar7 = piVar7 + 1;
    param_2 = param_2 + 0x40;
    iVar5 = iVar5 + -1;
    if (iVar5 == 0) {
      return;
    }
  } while( true );
}


