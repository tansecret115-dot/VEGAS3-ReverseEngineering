/* Module: aviplug.dll
   Function: FUN_5f9734a0
   Address: 5f9734a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f9734a0(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  iVar6 = 6;
  uVar1 = *param_1;
  iVar7 = 0;
  do {
    uVar9 = 0;
    uVar3 = param_1[3];
    uVar5 = 0;
    uVar2 = param_1[2];
    puVar4 = param_1 + 2;
    while (uVar2 != 0x1556) {
      uVar8 = (int)uVar3 >> 0x10;
      iVar7 = iVar7 + (&DAT_5f9ddf50)[uVar5];
      uVar9 = uVar9 + (uVar2 & 0xffff);
      uVar3 = puVar4[3];
      uVar5 = (uint)(*(ulonglong *)(&DAT_5f9dcf50 + ((puVar4[1] ^ uVar8) - uVar8) * 8) >>
                    (ulonglong)
                    *(uint *)(&DAT_5f9dcb50 +
                             (uVar2 >> 0x10) * 4 + (uVar1 & 3) * 0x10 + param_2 * 0x40)) &
              (uint)DAT_5f9df750;
      uVar2 = (uint)(uVar5 == 0);
      uVar5 = uVar5 | uVar9;
      uVar9 = uVar9 + uVar2 & -uVar2;
      uVar2 = puVar4[2];
      puVar4 = puVar4 + 2;
    }
    iVar7 = iVar7 + (&DAT_5f9ddf50)[uVar5];
    uVar1 = puVar4[2];
    param_1 = puVar4 + 2;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return iVar7;
}


