/* Module: rmbe3260.dll
   Function: FUN_66046c50
   Address: 66046c50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_66046c50(undefined4 *param_1)

{
  undefined4 *this;
  char cVar1;
  undefined *this_00;
  char *pcVar2;
  intptr_t _FindHandle;
  void *this_01;
  intptr_t iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  char *pcVar9;
  ushort uVar10;
  undefined1 local_238 [20];
  undefined4 local_224 [65];
  char local_120;
  undefined4 local_11f [65];
  int local_18;
  intptr_t local_14;
  undefined4 *local_10;
  undefined4 local_c;
  undefined1 local_8;
  
  local_10 = param_1;
  FUN_660587a0(param_1);
  this = param_1 + 4;
  FUN_6605c7f0(this,10);
  *param_1 = &PTR_FUN_660681b0;
  local_120 = DAT_66075004;
  puVar7 = local_11f;
  for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  uVar10 = 2;
  this_00 = FUN_6602dab0();
  pcVar2 = (char *)FUN_66052f60(this_00,uVar10);
  if (pcVar2 != (char *)0x0) {
    uVar5 = 0xffffffff;
    do {
      pcVar9 = pcVar2;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar9 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar9;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar2 = pcVar9 + -uVar5;
    pcVar9 = &local_120;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar9 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar9 = pcVar9 + 1;
    }
  }
  uVar5 = 0xffffffff;
  pcVar2 = &DAT_6606e644;
  do {
    pcVar9 = pcVar2;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar4 = -1;
  pcVar2 = &local_120;
  do {
    pcVar8 = pcVar2;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar8 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar8;
  } while (cVar1 != '\0');
  pcVar2 = pcVar9 + -uVar5;
  pcVar9 = pcVar8 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar9 = pcVar9 + 1;
  }
  _FindHandle = findfirst(&local_120,local_238);
  local_14 = _FindHandle;
  iVar3 = _FindHandle;
  do {
    if (iVar3 == -1) {
      _findclose(_FindHandle);
      return local_10;
    }
    iVar4 = -1;
    pcVar2 = (char *)local_224;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (iVar4 == -0xe) {
      local_8 = 0;
      local_c = local_224[0];
      _strlwr((char *)&local_c);
      pcVar2 = (char *)0x0;
      local_18 = 0;
      iVar4 = FUN_6605cad0(this,(byte *)&local_c,&local_18);
      if (iVar4 == 0) {
        this_01 = operator_new(0x25f);
        if (this_01 != (void *)0x0) {
          pcVar2 = FUN_6604a830(this_01,(char *)&local_c);
        }
        if (*(int *)(pcVar2 + 0x20c) == 0) {
          FUN_66058900(local_10,pcVar2);
          local_c = *(undefined4 *)(pcVar2 + 0x218);
          _strlwr((char *)&local_c);
          FUN_6605c9a0(this,(byte *)&local_c,(int)pcVar2);
        }
        else if (pcVar2 != (char *)0x0) {
          FUN_6604ad40((int)pcVar2);
          operator_delete(pcVar2);
        }
      }
    }
    _FindHandle = local_14;
    iVar3 = findnext(local_14,local_238);
  } while( true );
}


