/* Module: sfcdi.dll
   Function: FUN_5bf0b9f0
   Address: 5bf0b9f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5bf0b9f0(uint param_1,UINT param_2,uint param_3,char param_4)

{
  LPCSTR lpString;
  CHAR CVar1;
  byte bVar2;
  BOOL BVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  byte *pbVar9;
  uint unaff_retaddr;
  
  FUN_5bf52dd0();
  puVar6 = (undefined *)0x0;
  ppuVar7 = (undefined **)&DAT_5bf631d4;
  do {
    ppuVar8 = ppuVar7;
    for (iVar4 = 0x22; iVar4 != 0; iVar4 = iVar4 + -1) {
      *ppuVar8 = (undefined *)0x0;
      ppuVar8 = ppuVar8 + 1;
    }
    *ppuVar7 = puVar6;
    FUN_5bf0b740((byte *)ppuVar7);
    ppuVar7 = ppuVar7 + 0x22;
    puVar6 = puVar6 + 1;
  } while (ppuVar7 < &PTR_DAT_5bf63614);
  param_2 = SetErrorMode(0x8001);
  lpString = &param_4;
  QueryDosDeviceA((LPCSTR)0x0,&param_4,0x8000);
  CVar1 = param_4;
  do {
    if (CVar1 == '\0') {
      SetErrorMode(param_2);
      return 1;
    }
    if ((((lpString[1] == ':') && ('B' < *lpString)) &&
        (BVar3 = FUN_5bf0b8a0(lpString,&param_1,&param_3,(uint *)&stack0x00000000), BVar3 != 0)) &&
       (param_1 < 8)) {
      iVar4 = param_1 * 0x88;
      uVar5 = 0;
      if ((&DAT_5bf631d8)[param_1 * 0x22] != 0) {
        pbVar9 = &DAT_5bf631de + iVar4;
        do {
          if ((((pbVar9[-2] & 0xf) == param_3) && (pbVar9[-2] >> 4 == unaff_retaddr)) &&
             (((*pbVar9 & 0xe0) != 0x20 || ((byte)(*lpString + 0xbfU) < (*pbVar9 & 0x1f))))) {
            bVar2 = (&DAT_5bf631de)[uVar5 * 8 + iVar4] & 0x1f | 0x20;
            (&DAT_5bf631de)[uVar5 * 8 + iVar4] = bVar2;
            (&DAT_5bf631de)[uVar5 * 8 + iVar4] = (*lpString - 1U ^ bVar2) & 0x1f ^ bVar2;
            *(int *)(&DAT_5bf631e0 + uVar5 * 8 + iVar4) = *lpString + -0x40;
            break;
          }
          uVar5 = uVar5 + 1;
          pbVar9 = pbVar9 + 8;
        } while (uVar5 < (uint)(&DAT_5bf631d8)[param_1 * 0x22]);
      }
    }
    iVar4 = lstrlenA(lpString);
    lpString = lpString + iVar4 + 1;
    CVar1 = *lpString;
  } while( true );
}


