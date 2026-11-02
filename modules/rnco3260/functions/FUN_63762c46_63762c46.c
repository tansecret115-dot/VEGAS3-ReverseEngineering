/* Module: rnco3260.dll
   Function: FUN_63762c46
   Address: 63762c46
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_63762c46(int param_1,int param_2,int param_3,ulonglong *param_4,ulonglong *param_5,
            undefined4 param_6,uint param_7,uint param_8)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  DAT_6379a454 = param_3;
  DAT_6379a458 = param_4;
  DAT_6379a45c = param_5;
  DAT_6379a460 = param_6;
  DAT_6379a424 = param_7;
  puVar8 = (ulonglong *)(param_3 + (param_8 & 1) * param_7);
  iVar2 = (param_8 & 1) * 0x2d0;
  puVar6 = (ulonglong *)(param_1 + iVar2 + _DAT_6379a428);
  DAT_6379a420 = (ulonglong *)(param_2 + iVar2 + _DAT_6379a42c);
  iVar2 = (DAT_6379a414 >> 1) - 1;
  if ((iVar2 != 0 && DAT_6379a414 >> 1 != 0) && (uVar5 = DAT_6379a410 >> 4, uVar5 != 0)) {
    DAT_6379a408 = '\x02';
    iVar4 = 0x5a0;
    DAT_6379a41c = uVar5;
    puVar9 = puVar8;
    puVar7 = puVar6;
    do {
      do {
        iVar3 = iVar2;
        uVar10 = *puVar6;
        uVar11 = *(ulonglong *)(iVar4 + (int)puVar6);
        *puVar8 = uVar10;
        uVar10 = uVar10 >> 1 & 0x7f7f7f7f7f7f7f7f;
        uVar11 = uVar11 >> 1 & 0x7f7f7f7f7f7f7f7f;
        *(ulonglong *)(param_7 + (int)puVar8) =
             CONCAT17((char)(uVar10 >> 0x38) + (char)(uVar11 >> 0x38),
                      CONCAT16((char)(uVar10 >> 0x30) + (char)(uVar11 >> 0x30),
                               CONCAT15((char)(uVar10 >> 0x28) + (char)(uVar11 >> 0x28),
                                        CONCAT14((char)(uVar10 >> 0x20) + (char)(uVar11 >> 0x20),
                                                 CONCAT13((char)(uVar10 >> 0x18) +
                                                          (char)(uVar11 >> 0x18),
                                                          CONCAT12((char)(uVar10 >> 0x10) +
                                                                   (char)(uVar11 >> 0x10),
                                                                   CONCAT11((char)(uVar10 >> 8) +
                                                                            (char)(uVar11 >> 8),
                                                                            (char)uVar10 +
                                                                            (char)uVar11)))))));
        uVar10 = puVar6[1];
        uVar11 = *(ulonglong *)(iVar4 + 8 + (int)puVar6);
        puVar8[1] = uVar10;
        uVar10 = uVar10 >> 1 & 0x7f7f7f7f7f7f7f7f;
        uVar11 = uVar11 >> 1 & 0x7f7f7f7f7f7f7f7f;
        *(ulonglong *)(param_7 + 8 + (int)puVar8) =
             CONCAT17((char)(uVar10 >> 0x38) + (char)(uVar11 >> 0x38),
                      CONCAT16((char)(uVar10 >> 0x30) + (char)(uVar11 >> 0x30),
                               CONCAT15((char)(uVar10 >> 0x28) + (char)(uVar11 >> 0x28),
                                        CONCAT14((char)(uVar10 >> 0x20) + (char)(uVar11 >> 0x20),
                                                 CONCAT13((char)(uVar10 >> 0x18) +
                                                          (char)(uVar11 >> 0x18),
                                                          CONCAT12((char)(uVar10 >> 0x10) +
                                                                   (char)(uVar11 >> 0x10),
                                                                   CONCAT11((char)(uVar10 >> 8) +
                                                                            (char)(uVar11 >> 8),
                                                                            (char)uVar10 +
                                                                            (char)uVar11)))))));
        puVar6 = puVar6 + 2;
        puVar8 = puVar8 + 2;
        uVar5 = uVar5 - 1;
        iVar2 = iVar3;
      } while (uVar5 != 0);
      puVar6 = (ulonglong *)((int)puVar7 + iVar4);
      puVar8 = (ulonglong *)((int)puVar9 + param_7 * 2);
      iVar2 = iVar3 + -1;
      uVar5 = DAT_6379a41c;
      puVar9 = puVar8;
      puVar7 = puVar6;
    } while ((iVar2 != 0 && 0 < iVar3) || (iVar4 = 0, 0 < iVar3));
    while( true ) {
      cVar1 = DAT_6379a408;
      DAT_6379a408 = DAT_6379a408 + -1;
      if (cVar1 < '\x01') break;
      uVar5 = DAT_6379a41c;
      if (DAT_6379a408 == '\0') {
        iVar2 = 0x5a0;
        puVar6 = DAT_6379a420;
        puVar8 = DAT_6379a458;
        puVar9 = DAT_6379a458;
        puVar7 = DAT_6379a420;
        iVar4 = (DAT_6379a414 >> 2) - 1;
      }
      else {
        DAT_6379a424 = DAT_6379a424 >> ((byte)DAT_6379a460 & 0x1f);
        puVar6 = DAT_6379a420 + 0x2d;
        iVar4 = (DAT_6379a414 >> 2) - 1;
        iVar2 = 0x5a0;
        puVar8 = DAT_6379a45c;
        puVar9 = DAT_6379a45c;
        puVar7 = puVar6;
        param_7 = DAT_6379a424;
        if (iVar4 == 0) {
          return;
        }
      }
      do {
        do {
          iVar3 = iVar4;
          uVar10 = *puVar6;
          uVar11 = *(ulonglong *)(iVar2 + (int)puVar6);
          *puVar8 = uVar10;
          uVar10 = uVar10 >> 1 & 0x7f7f7f7f7f7f7f7f;
          uVar11 = uVar11 >> 1 & 0x7f7f7f7f7f7f7f7f;
          *(ulonglong *)(param_7 + (int)puVar8) =
               CONCAT17((char)(uVar10 >> 0x38) + (char)(uVar11 >> 0x38),
                        CONCAT16((char)(uVar10 >> 0x30) + (char)(uVar11 >> 0x30),
                                 CONCAT15((char)(uVar10 >> 0x28) + (char)(uVar11 >> 0x28),
                                          CONCAT14((char)(uVar10 >> 0x20) + (char)(uVar11 >> 0x20),
                                                   CONCAT13((char)(uVar10 >> 0x18) +
                                                            (char)(uVar11 >> 0x18),
                                                            CONCAT12((char)(uVar10 >> 0x10) +
                                                                     (char)(uVar11 >> 0x10),
                                                                     CONCAT11((char)(uVar10 >> 8) +
                                                                              (char)(uVar11 >> 8),
                                                                              (char)uVar10 +
                                                                              (char)uVar11)))))));
          uVar5 = uVar5 - 1;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
          iVar4 = iVar3;
        } while (uVar5 != 0);
        puVar6 = (ulonglong *)((int)puVar7 + iVar2);
        puVar8 = (ulonglong *)((int)puVar9 + param_7 * 2);
        iVar4 = iVar3 + -1;
        uVar5 = DAT_6379a41c;
        puVar9 = puVar8;
        puVar7 = puVar6;
      } while ((iVar4 != 0 && 0 < iVar3) || (iVar2 = 0, 0 < iVar3));
    }
  }
  return;
}


