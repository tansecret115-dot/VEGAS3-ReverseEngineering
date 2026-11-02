/* Module: vegas30k.dll
   Function: FUN_01166010
   Address: 01166010
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01166010(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x7a) < 1) {
    uVar4 = param_3 + 5;
  }
  else {
    if (*(char *)(param_1 + 0x1c) == '\x02') {
      FUN_01167600(param_1);
    }
    FUN_01166200(param_1,param_1 + 0xb0e);
    FUN_01166200(param_1,param_1 + 0xb1a);
    iVar2 = FUN_011667c0(param_1);
    uVar5 = *(int *)(param_1 + 0x169b) + 10U >> 3;
    uVar4 = *(int *)(param_1 + 0x169f) + 10U >> 3;
    if (uVar5 < uVar4) goto LAB_01166074;
  }
  uVar5 = uVar4;
LAB_01166074:
  if ((uVar5 < param_3 + 4U) || (param_2 == 0)) {
    iVar6 = *(int *)(param_1 + 0x16ad);
    bVar3 = (byte)iVar6;
    if (uVar4 == uVar5) {
      iVar2 = param_4 + 2;
      if (iVar6 < 0xe) {
        puVar8 = &DAT_011e978c;
        puVar7 = &DAT_011e930c;
        *(ushort *)(param_1 + 0x16ab) =
             *(ushort *)(param_1 + 0x16ab) | (ushort)(iVar2 << (bVar3 & 0x1f));
        *(int *)(param_1 + 0x16ad) = iVar6 + 3;
      }
      else {
        puVar8 = &DAT_011e978c;
        puVar7 = &DAT_011e930c;
        *(ushort *)(param_1 + 0x16ab) =
             *(ushort *)(param_1 + 0x16ab) | (ushort)(iVar2 << (bVar3 & 0x1f));
        *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
             *(undefined1 *)(param_1 + 0x16ab);
        iVar6 = *(int *)(param_1 + 0x14) + 1;
        *(int *)(param_1 + 0x14) = iVar6;
        *(undefined1 *)(*(int *)(param_1 + 8) + iVar6) = *(undefined1 *)(param_1 + 0x16ac);
        iVar6 = *(int *)(param_1 + 0x16ad);
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        *(int *)(param_1 + 0x16ad) = iVar6 + -0xd;
        *(ushort *)(param_1 + 0x16ab) = (ushort)iVar2 >> (0x10U - (char)iVar6 & 0x1f);
      }
    }
    else {
      iVar1 = param_4 + 4;
      if (iVar6 < 0xe) {
        *(ushort *)(param_1 + 0x16ab) =
             *(ushort *)(param_1 + 0x16ab) | (ushort)(iVar1 << (bVar3 & 0x1f));
        *(int *)(param_1 + 0x16ad) = iVar6 + 3;
      }
      else {
        *(ushort *)(param_1 + 0x16ab) =
             *(ushort *)(param_1 + 0x16ab) | (ushort)(iVar1 << (bVar3 & 0x1f));
        *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
             *(undefined1 *)(param_1 + 0x16ab);
        iVar6 = *(int *)(param_1 + 0x14) + 1;
        *(int *)(param_1 + 0x14) = iVar6;
        *(undefined1 *)(iVar6 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16ac);
        iVar6 = *(int *)(param_1 + 0x16ad);
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        *(int *)(param_1 + 0x16ad) = iVar6 + -0xd;
        *(ushort *)(param_1 + 0x16ab) = (ushort)iVar1 >> (0x10U - (char)iVar6 & 0x1f);
      }
      FUN_01166920(param_1,*(int *)(param_1 + 0xb12) + 1,*(int *)(param_1 + 0xb1e) + 1,iVar2 + 1);
      puVar8 = (undefined *)(param_1 + 0x97e);
      puVar7 = (undefined *)(param_1 + 0x8a);
    }
    FUN_011671c0(param_1,puVar7,puVar8);
  }
  else {
    FUN_01165d10(param_1,param_2,param_3,param_4);
  }
  FUN_01165ca0(param_1);
  if (param_4 != 0) {
    FUN_01167740(param_1);
  }
  return;
}


