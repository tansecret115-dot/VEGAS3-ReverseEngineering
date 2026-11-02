/* Module: rmbe3260.dll
   Function: FUN_6604ec20
   Address: 6604ec20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_6604ec20(void)

{
  UINT UVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  char local_120;
  undefined4 local_11f;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  undefined4 uStack_c;
  undefined4 local_8;
  
  local_120 = DAT_66075004;
  puVar4 = &local_11f;
  for (iVar2 = 0x3f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  uStack_c = 0;
  local_18 = 0;
  uVar3 = 0;
  uVar5 = 0;
  GetTempPathA(0xff,&local_120);
  local_11f._2_1_ = 0;
  FUN_6604ed40(&local_120,&uStack_c,(int *)&local_18);
  local_8 = DAT_6606ee1c;
  local_14 = 0x1a;
  do {
    if ((char)local_8 != local_120) {
      UVar1 = GetDriveTypeA((LPCSTR)&local_8);
      if (UVar1 == 3) {
        local_20 = 0;
        local_1c = 0;
        iVar2 = FUN_6604ed40((LPCSTR)&local_8,&local_20,(int *)&local_1c);
        if (iVar2 != 0) {
          if ((uVar3 < local_20) || ((local_20 == uVar3 && (uVar5 < local_1c)))) {
            uVar3 = local_20;
            uVar5 = local_1c;
          }
        }
      }
    }
    local_14 = local_14 + -1;
    local_8 = CONCAT31(local_8._1_3_,(char)local_8 + '\x01');
  } while (local_14 != 0);
  if ((uVar3 == 0) && (uVar5 < 0x77359401)) {
    if ((double)uVar5 <= (double)local_18 * _DAT_660686f0) {
      return 0;
    }
  }
  return 1;
}


