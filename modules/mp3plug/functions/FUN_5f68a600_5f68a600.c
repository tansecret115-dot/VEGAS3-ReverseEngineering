/* Module: mp3plug.dll
   Function: FUN_5f68a600
   Address: 5f68a600
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f68a600(HANDLE param_1,uint *param_2,LPVOID param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  LPVOID pMem;
  HGLOBAL pvVar7;
  LPVOID lpBuffer;
  BOOL BVar8;
  byte *pbVar9;
  LPVOID pvVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  byte *pbVar15;
  bool bVar16;
  DWORD local_18;
  uint local_14;
  uint local_10;
  ushort local_c;
  byte bStack_a;
  byte bStack_9;
  
  lpBuffer = param_3;
  if (param_3 == (LPVOID)0x0) {
    pvVar7 = GlobalAlloc(0x42,0x46);
    lpBuffer = GlobalLock(pvVar7);
    param_3 = lpBuffer;
    if (lpBuffer == (LPVOID)0x0) {
      return 0;
    }
  }
  else {
    param_3 = (LPVOID)0x0;
  }
  local_14 = *param_2;
  local_10 = param_2[1];
  SetFilePointer(param_1,local_14,(PLONG)&local_10,0);
  BVar8 = ReadFile(param_1,lpBuffer,0x46,&local_18,(LPOVERLAPPED)0x0);
  pMem = param_3;
  if ((BVar8 != 0) && (local_18 == 0x46)) {
    pbVar15 = &DAT_5f72ca0c;
    pbVar9 = (byte *)((int)lpBuffer + 0x24);
    do {
      bVar1 = *pbVar9;
      bVar16 = bVar1 < *pbVar15;
      if (bVar1 != *pbVar15) {
LAB_5f68a6ac:
        pvVar10 = (LPVOID)((1 - (uint)bVar16) - (uint)(bVar16 != 0));
        goto LAB_5f68a6b1;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar9[1];
      bVar16 = bVar1 < pbVar15[1];
      if (bVar1 != pbVar15[1]) goto LAB_5f68a6ac;
      pbVar9 = pbVar9 + 2;
      pbVar15 = pbVar15 + 2;
    } while (bVar1 != 0);
    pvVar10 = (LPVOID)0x0;
LAB_5f68a6b1:
    if (pvVar10 == (LPVOID)0x0) {
      param_3 = pvVar10;
      uVar11 = FUN_5f688990((int)lpBuffer,0xb,(int *)&param_3);
      local_c = local_c ^ ((ushort)uVar11 ^ local_c) & 0x7ff;
      uVar11 = FUN_5f688990((int)lpBuffer,2,(int *)&param_3);
      local_c = (ushort)((uVar11 & 3) << 0xb) | local_c & 0xe7ff;
      uVar11 = FUN_5f688990((int)lpBuffer,2,(int *)&param_3);
      local_c = (ushort)((uVar11 & 3) << 0xd) | local_c & 0x9fff;
      uVar11 = FUN_5f688990((int)lpBuffer,1,(int *)&param_3);
      local_c = (ushort)(uVar11 << 0xf) | local_c & 0x7fff;
      uVar11 = FUN_5f688990((int)lpBuffer,4,(int *)&param_3);
      bStack_a = bStack_a ^ (bStack_a ^ (byte)uVar11) & 0xf;
      uVar11 = FUN_5f688990((int)lpBuffer,2,(int *)&param_3);
      uVar5 = CONCAT11(bStack_9,bStack_a) & 0xffcf;
      bStack_a = (byte)((uVar11 & 3) << 4) | (byte)uVar5;
      bStack_9 = (byte)(uVar5 >> 8);
      uVar11 = FUN_5f688990((int)lpBuffer,1,(int *)&param_3);
      uVar5 = CONCAT11(bStack_9,bStack_a) & 0xffbf;
      bStack_a = (byte)((uVar11 & 1) << 6) | (byte)uVar5;
      bStack_9 = (byte)(uVar5 >> 8);
      uVar11 = FUN_5f688990((int)lpBuffer,1,(int *)&param_3);
      uVar5 = CONCAT11(bStack_9,bStack_a) & 0xff7f;
      bStack_a = (byte)((uVar11 & 1) << 7) | (byte)uVar5;
      bStack_9 = (byte)(uVar5 >> 8);
      uVar11 = FUN_5f688990((int)lpBuffer,2,(int *)&param_3);
      uVar5 = CONCAT11(bStack_9,bStack_a) & 0xfcff;
      bStack_9 = (byte)uVar11 & 3 | (byte)(uVar5 >> 8);
      bStack_a = (byte)uVar5;
      uVar11 = FUN_5f688990((int)lpBuffer,2,(int *)&param_3);
      uVar6 = CONCAT11(bStack_9,bStack_a);
      uVar5 = uVar6 & 0xf3ff;
      bVar1 = (byte)(uVar5 >> 8);
      bStack_a = (byte)uVar5;
      if ((bStack_9 & 3) == 0) {
        uVar6 = uVar6 & 0xf0ff;
        bVar1 = (byte)(uVar6 >> 8);
        bStack_a = (byte)uVar6;
      }
      bStack_9 = (byte)(((uVar11 & 3) << 10) >> 8) | bVar1;
      uVar11 = FUN_5f688990((int)lpBuffer,1,(int *)&param_3);
      uVar5 = CONCAT11(bStack_9,bStack_a) & 0xefff;
      bStack_9 = (byte)(((uVar11 & 1) << 0xc) >> 8) | (byte)(uVar5 >> 8);
      bStack_a = (byte)uVar5;
      uVar11 = FUN_5f688990((int)lpBuffer,1,(int *)&param_3);
      uVar5 = CONCAT11(bStack_9,bStack_a) & 0xdfff;
      bStack_9 = (byte)(((uVar11 & 1) << 0xd) >> 8) | (byte)(uVar5 >> 8);
      bStack_a = (byte)uVar5;
      uVar11 = FUN_5f688990((int)lpBuffer,2,(int *)&param_3);
      uVar5 = CONCAT11(bStack_9,bStack_a) & 0x3fff;
      bStack_9 = (byte)(uVar5 >> 8) | (byte)((uVar11 << 0xe) >> 8);
      bStack_a = (byte)uVar5;
      iVar12 = FUN_5f6883f0(&local_c);
      iVar13 = FUN_5f688910(&local_c);
      uVar14 = (iVar12 * 0x90) / iVar13;
      uVar3 = *(undefined4 *)((int)lpBuffer + 0x2e);
      *(char *)((int)lpBuffer + 0x31) = (char)uVar3;
      *(char *)((int)lpBuffer + 0x30) = (char)((uint)uVar3 >> 8);
      *(char *)((int)lpBuffer + 0x2f) = (char)((uint)uVar3 >> 0x10);
      *(char *)((int)lpBuffer + 0x2e) = (char)((uint)uVar3 >> 0x18);
      uVar3 = *(undefined4 *)((int)lpBuffer + 0x32);
      *(char *)((int)lpBuffer + 0x35) = (char)uVar3;
      *(char *)((int)lpBuffer + 0x34) = (char)((uint)uVar3 >> 8);
      *(char *)((int)lpBuffer + 0x33) = (char)((uint)uVar3 >> 0x10);
      *(char *)((int)lpBuffer + 0x32) = (char)((uint)uVar3 >> 0x18);
      uVar2 = *(undefined1 *)((int)lpBuffer + 0x28);
      *(undefined1 *)((int)lpBuffer + 0x28) = *(undefined1 *)((int)lpBuffer + 0x29);
      *(undefined1 *)((int)lpBuffer + 0x29) = uVar2;
      uVar2 = *(undefined1 *)((int)lpBuffer + 0x2a);
      *(undefined1 *)((int)lpBuffer + 0x2a) = *(undefined1 *)((int)lpBuffer + 0x2b);
      *(undefined1 *)((int)lpBuffer + 0x2b) = uVar2;
      uVar2 = *(undefined1 *)((int)lpBuffer + 0x2c);
      *(undefined1 *)((int)lpBuffer + 0x2c) = *(undefined1 *)((int)lpBuffer + 0x2d);
      *(undefined1 *)((int)lpBuffer + 0x2d) = uVar2;
      uVar2 = *(undefined1 *)((int)lpBuffer + 0x36);
      *(undefined1 *)((int)lpBuffer + 0x36) = *(undefined1 *)((int)lpBuffer + 0x37);
      *(undefined1 *)((int)lpBuffer + 0x37) = uVar2;
      uVar2 = *(undefined1 *)((int)lpBuffer + 0x38);
      *(undefined1 *)((int)lpBuffer + 0x38) = *(undefined1 *)((int)lpBuffer + 0x39);
      *(undefined1 *)((int)lpBuffer + 0x39) = uVar2;
      uVar2 = *(undefined1 *)((int)lpBuffer + 0x3a);
      *(undefined1 *)((int)lpBuffer + 0x3a) = *(undefined1 *)((int)lpBuffer + 0x3b);
      *(undefined1 *)((int)lpBuffer + 0x3b) = uVar2;
      uVar2 = *(undefined1 *)((int)lpBuffer + 0x3d);
      *(undefined1 *)((int)lpBuffer + 0x3d) = *(undefined1 *)((int)lpBuffer + 0x3c);
      *(undefined1 *)((int)lpBuffer + 0x3c) = uVar2;
      uVar11 = *param_2;
      uVar4 = param_2[1];
      *(uint *)((int)lpBuffer + 0x3e) = uVar11 + 0x3e;
      *(uint *)((int)lpBuffer + 0x42) = uVar4 + (0xffffffc1 < uVar11);
      uVar11 = *param_2;
      *param_2 = uVar11 + uVar14;
      param_2[1] = param_2[1] + (uint)CARRY4(uVar11,uVar14);
      return 1;
    }
  }
  if (param_3 != (LPVOID)0x0) {
    pvVar7 = GlobalHandle(param_3);
    GlobalUnlock(pvVar7);
    pvVar7 = GlobalHandle(pMem);
    GlobalFree(pvVar7);
  }
  return 0;
}


