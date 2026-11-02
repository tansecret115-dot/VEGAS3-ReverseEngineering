/* Module: mp3plug.dll
   Function: FUN_5f6c9b00
   Address: 5f6c9b00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6c9b00(int *param_1,undefined1 *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  iVar3 = 0;
  if (*(int *)((int)param_1 + 0x7a) < 1) {
    uVar5 = param_3 + 5;
  }
  else {
    if ((char)param_1[7] == '\x02') {
      FUN_5f6cb0f0((int)param_1);
    }
    FUN_5f6c9cf0(param_1,(int *)((int)param_1 + 0xb0e));
    FUN_5f6c9cf0(param_1,(int *)((int)param_1 + 0xb1a));
    iVar3 = FUN_5f6ca2b0(param_1);
    uVar6 = *(int *)((int)param_1 + 0x169b) + 10U >> 3;
    uVar5 = *(int *)((int)param_1 + 0x169f) + 10U >> 3;
    if (uVar6 < uVar5) goto LAB_5f6c9b64;
  }
  uVar6 = uVar5;
LAB_5f6c9b64:
  if ((uVar6 < param_3 + 4U) || (param_2 == (undefined1 *)0x0)) {
    iVar2 = *(int *)((int)param_1 + 0x16ad);
    bVar4 = (byte)iVar2;
    if (uVar5 == uVar6) {
      iVar3 = param_4 + 2;
      if (iVar2 < 0xe) {
        puVar8 = &DAT_5f736aa0;
        puVar7 = &DAT_5f736620;
        *(ushort *)((int)param_1 + 0x16ab) =
             *(ushort *)((int)param_1 + 0x16ab) | (ushort)(iVar3 << (bVar4 & 0x1f));
        *(int *)((int)param_1 + 0x16ad) = iVar2 + 3;
      }
      else {
        puVar8 = &DAT_5f736aa0;
        puVar7 = &DAT_5f736620;
        *(ushort *)((int)param_1 + 0x16ab) =
             *(ushort *)((int)param_1 + 0x16ab) | (ushort)(iVar3 << (bVar4 & 0x1f));
        *(undefined1 *)(param_1[2] + param_1[5]) = *(undefined1 *)((int)param_1 + 0x16ab);
        iVar2 = param_1[5];
        param_1[5] = iVar2 + 1;
        *(char *)(param_1[2] + iVar2 + 1) = (char)param_1[0x5ab];
        iVar2 = *(int *)((int)param_1 + 0x16ad);
        param_1[5] = param_1[5] + 1;
        *(int *)((int)param_1 + 0x16ad) = iVar2 + -0xd;
        *(ushort *)((int)param_1 + 0x16ab) = (ushort)iVar3 >> (0x10U - (char)iVar2 & 0x1f);
      }
    }
    else {
      iVar1 = param_4 + 4;
      if (iVar2 < 0xe) {
        *(ushort *)((int)param_1 + 0x16ab) =
             *(ushort *)((int)param_1 + 0x16ab) | (ushort)(iVar1 << (bVar4 & 0x1f));
        *(int *)((int)param_1 + 0x16ad) = iVar2 + 3;
      }
      else {
        *(ushort *)((int)param_1 + 0x16ab) =
             *(ushort *)((int)param_1 + 0x16ab) | (ushort)(iVar1 << (bVar4 & 0x1f));
        *(undefined1 *)(param_1[5] + param_1[2]) = *(undefined1 *)((int)param_1 + 0x16ab);
        iVar2 = param_1[5];
        param_1[5] = iVar2 + 1;
        *(char *)(iVar2 + 1 + param_1[2]) = (char)param_1[0x5ab];
        iVar2 = *(int *)((int)param_1 + 0x16ad);
        param_1[5] = param_1[5] + 1;
        *(int *)((int)param_1 + 0x16ad) = iVar2 + -0xd;
        *(ushort *)((int)param_1 + 0x16ab) = (ushort)iVar1 >> (0x10U - (char)iVar2 & 0x1f);
      }
      FUN_5f6ca410((int)param_1,*(int *)((int)param_1 + 0xb12) + 1,
                   *(int *)((int)param_1 + 0xb1e) + 1,iVar3 + 1);
      puVar8 = (undefined *)((int)param_1 + 0x97e);
      puVar7 = (undefined *)((int)param_1 + 0x8a);
    }
    FUN_5f6cacb0((int)param_1,(int)puVar7,(int)puVar8);
  }
  else {
    FUN_5f6c9800((int)param_1,param_2,param_3,param_4);
  }
  FUN_5f6c9790((int)param_1);
  if (param_4 != 0) {
    FUN_5f6cb230((int)param_1);
  }
  return;
}


