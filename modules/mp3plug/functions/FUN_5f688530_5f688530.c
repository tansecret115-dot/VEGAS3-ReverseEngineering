/* Module: mp3plug.dll
   Function: FUN_5f688530
   Address: 5f688530
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f688530(HANDLE param_1,ushort *param_2,int param_3,uint *param_4)

{
  ushort uVar1;
  bool bVar2;
  BOOL BVar3;
  uint uVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  ushort *puVar9;
  DWORD local_c;
  uint local_8 [2];
  
  puVar9 = param_2;
  if (param_3 == 0) {
    BVar3 = ReadFile(param_1,local_8,4,&local_c,(LPOVERLAPPED)0x0);
    puVar9 = param_2;
    if (BVar3 == 0) {
      return 0x8004e008;
    }
    FUN_5f6889f0(param_2,(byte *)local_8);
    bVar2 = FUN_5f688c00(puVar9);
    if (CONCAT31(extraout_var_00,bVar2) == 0) {
      return 0x8004e008;
    }
LAB_5f688844:
    uVar8 = *puVar9 & 0x6000;
    if (uVar8 == 0x6000) {
      iVar5 = FUN_5f6883f0(puVar9);
      iVar6 = FUN_5f688910(puVar9);
      iVar7 = FUN_5f688c70(puVar9);
      puVar9[2] = 0x180;
      puVar9[3] = 0;
      *(int *)(puVar9 + 4) = ((iVar5 * 0xc) / iVar6 + iVar7) * 4;
      return 0;
    }
    if ((uVar8 == 0x2000) || (uVar8 == 0x4000)) {
      iVar5 = FUN_5f6883f0(puVar9);
      iVar6 = FUN_5f688910(puVar9);
      iVar7 = FUN_5f688c70(puVar9);
      uVar4 = (iVar5 * 0x90) / iVar6;
      puVar9[2] = 0x480;
      puVar9[3] = 0;
      *(uint *)(puVar9 + 4) = uVar4;
      if ((*puVar9 & 0x1800) != 0x1800) {
        puVar9[2] = 0x240;
        puVar9[3] = 0;
        *(uint *)(puVar9 + 4) = uVar4 >> 1;
      }
      *(int *)(puVar9 + 4) = *(int *)(puVar9 + 4) + iVar7;
      return 0;
    }
  }
  else {
    param_3 = 0;
    while( true ) {
      BVar3 = ReadFile(param_1,local_8,4,&local_c,(LPOVERLAPPED)0x0);
      if (BVar3 == 0) break;
      param_2 = (ushort *)0xf;
      uVar4 = (local_8[0] >> 8 & 0xff) << 8;
      uVar8 = (*puVar9 ^
              ((ushort)((local_8[0] >> 8 & 0xe0) >> 5) | (ushort)((local_8[0] & 0xff) << 3))) &
              0x7ff ^ *puVar9;
      *puVar9 = uVar8;
      *puVar9 = (ushort)((((uVar4 & 0x600) >> 9) << 2 | (uVar4 & 0x1800) >> 0xb) << 0xb) |
                uVar8 & 0x87ff;
      uVar4 = FUN_5f688990((int)local_8,1,(int *)&param_2);
      *puVar9 = *puVar9 & 0x7fff | (ushort)(uVar4 << 0xf);
      uVar4 = FUN_5f688990((int)local_8,4,(int *)&param_2);
      puVar9[1] = (byte)((byte)puVar9[1] ^ (byte)uVar4) & 0xf ^ puVar9[1];
      uVar4 = FUN_5f688990((int)local_8,2,(int *)&param_2);
      puVar9[1] = (ushort)((uVar4 & 3) << 4) | puVar9[1] & 0xffcf;
      uVar4 = FUN_5f688990((int)local_8,1,(int *)&param_2);
      puVar9[1] = (ushort)((uVar4 & 1) << 6) | puVar9[1] & 0xffbf;
      uVar4 = FUN_5f688990((int)local_8,1,(int *)&param_2);
      puVar9[1] = (ushort)((uVar4 & 1) << 7) | puVar9[1] & 0xff7f;
      uVar4 = FUN_5f688990((int)local_8,2,(int *)&param_2);
      puVar9[1] = ((byte)uVar4 & 3) << 8 | puVar9[1] & 0xfcff;
      uVar4 = FUN_5f688990((int)local_8,2,(int *)&param_2);
      uVar8 = puVar9[1];
      uVar1 = (ushort)((uVar4 & 3) << 10);
      puVar9[1] = uVar1 | uVar8 & 0xf3ff;
      if ((uVar8 & 0x300) == 0) {
        puVar9[1] = uVar1 | uVar8 & 0xf0ff;
      }
      uVar4 = FUN_5f688990((int)local_8,1,(int *)&param_2);
      puVar9[1] = (ushort)((uVar4 & 1) << 0xc) | puVar9[1] & 0xefff;
      uVar4 = FUN_5f688990((int)local_8,1,(int *)&param_2);
      puVar9[1] = (ushort)((uVar4 & 1) << 0xd) | puVar9[1] & 0xdfff;
      uVar4 = FUN_5f688990((int)local_8,2,(int *)&param_2);
      puVar9[1] = (ushort)(uVar4 << 0xe) | puVar9[1] & 0x3fff;
      bVar2 = FUN_5f688c00(puVar9);
      if (CONCAT31(extraout_var,bVar2) != 0) goto LAB_5f688844;
      SetFilePointer(param_1,-3,(PLONG)0x0,1);
      uVar4 = *param_4;
      *param_4 = uVar4 + 1;
      param_4[1] = param_4[1] + (uint)(0xfffffffe < uVar4);
      param_3 = param_3 + 1;
      if (0x7ff < param_3) {
        return 0x8004e008;
      }
    }
  }
  return 0x8004e008;
}


