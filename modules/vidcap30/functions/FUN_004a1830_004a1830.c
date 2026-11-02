/* Module: vidcap30.exe
   Function: FUN_004a1830
   Address: 004a1830
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004a1830(int param_1,uchar *param_2,LPSTR param_3)

{
  ushort uVar1;
  uchar uVar2;
  ushort uVar3;
  uchar *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uchar *puVar8;
  uchar local_428 [260];
  uchar local_324 [260];
  ushort local_220;
  ushort uStack_21e;
  uchar local_21c [540];
  
  if (param_2 == (uchar *)0x0) {
    return 0x80004005;
  }
  local_428[0] = '*';
  _mbscpy(local_428 + 1,param_2);
  puVar4 = local_428;
  uVar2 = local_428[0];
  do {
    if (uVar2 == '\0') {
LAB_004a188e:
      iVar5 = lstrlenA((LPCSTR)local_428);
      local_220 = (ushort)iVar5;
      puVar4 = (uchar *)_SfGetFileNamePtrA_4(local_428);
      _mbscpy(local_324,puVar4);
      FUN_0049ecb0(local_324);
      uVar7 = 0;
      iVar5 = FUN_004a0110(local_324);
      while (iVar5 != -1) {
        uVar7 = uVar7 + 1;
        wsprintfA((LPSTR)local_324,"%s (%u)",puVar4,uVar7 & 0xffff);
        FUN_0049ecb0(local_324);
        iVar5 = FUN_004a0110(local_324);
      }
      iVar5 = lstrlenA((LPCSTR)local_324);
      uStack_21e = (short)iVar5 + 1;
      uVar7 = (uint)local_220;
      uVar1 = local_220 + 1;
      local_220 = local_220 + 2;
      local_428[uVar7] = '*';
      uVar3 = uStack_21e;
      uVar7 = (uint)uStack_21e;
      local_428[uVar1] = '\0';
      puVar4 = local_428;
      puVar8 = local_21c;
      for (uVar6 = (uint)(local_220 >> 2); uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)puVar8 = *(undefined4 *)puVar4;
        puVar4 = puVar4 + 4;
        puVar8 = puVar8 + 4;
      }
      for (uVar6 = local_220 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
      puVar4 = local_324;
      puVar8 = local_21c + local_220;
      for (uVar6 = (uint)(uVar3 >> 2); uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)puVar8 = *(undefined4 *)puVar4;
        puVar4 = puVar4 + 4;
        puVar8 = puVar8 + 4;
      }
      for (uVar6 = uVar7 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
      _SfList_AllocAndInsertItem_20
                (*(undefined4 *)(param_1 + 0xc),&local_220,local_220 + 5 + uVar7,0xffffffff,0);
      _SfList_Sort_12(*(undefined4 *)(param_1 + 0xc),0,FUN_004a0ed0);
      if (param_3 != (LPSTR)0x0) {
        wsprintfA(param_3,"%s\\%s",param_1 + 0x24,s__My_Favorites__005b73e8);
      }
      return 0;
    }
    if (uVar2 == '\t') {
      *puVar4 = '\0';
      goto LAB_004a188e;
    }
    puVar4 = (uchar *)CharNextA((LPCSTR)puVar4);
    uVar2 = *puVar4;
  } while( true );
}


