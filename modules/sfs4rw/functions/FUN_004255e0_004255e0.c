/* Module: sfs4rw.dll
   Function: FUN_004255e0
   Address: 004255e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004255e0(uint *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  HGLOBAL pvVar5;
  undefined2 *puVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 unaff_EBX;
  uint uVar10;
  undefined4 unaff_EBP;
  int iVar11;
  code *pcVar12;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int iVar13;
  uint uStack_164;
  uint uStack_160;
  int iStack_15c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  short local_140;
  ushort uStack_13e;
  ushort uStack_13c;
  undefined4 uStack_132;
  CHAR aCStack_124 [264];
  int iStack_1c;
  undefined4 *puStack_18;
  
  if ((param_1 == (uint *)0x0) || (param_2 == 0)) {
    return 0x80070057;
  }
  uVar2 = *param_1;
  local_140 = (short)uVar2;
  uStack_13e = (ushort)(uVar2 >> 0x10);
  if ((int)(uint)*(ushort *)(uVar2 + 0x1e) <= (int)(param_1[1] + 1)) {
    return 0x80070057;
  }
  uStack_164 = param_1[3];
  iStack_15c = 0;
  uStack_160 = 0;
  (**(code **)(*(int *)(uVar2 + 0xc) + 4))(*(undefined4 *)(uVar2 + 8));
  iVar3 = (*(code *)**(undefined4 **)(uVar2 + 0xc))
                    (*(undefined4 *)(uVar2 + 8),&stack0xfffffeb4,0x2e,&stack0xfffffeac);
  if (iVar3 == 0) {
    return 0x8004e008;
  }
  if (iStack_15c != 0x2014b50) {
    return 0x8004e008;
  }
  iVar4 = (uVar2 & 0xffff) + 0x35;
  iVar3 = iVar4 + (uint)uStack_13e;
  pvVar5 = GlobalAlloc(0x42,iVar3 + 1 + (uint)uStack_13c);
  puVar6 = GlobalLock(pvVar5);
  if (puVar6 == (undefined2 *)0x0) {
    return 0x8007000e;
  }
  iVar13 = 1;
  *puVar6 = (short)((uint)unaff_EDI >> 0x10);
  puVar6[1] = (short)unaff_ESI;
  puVar6[2] = (short)((uint)unaff_ESI >> 0x10);
  puVar6[3] = (short)unaff_EBP;
  puVar6[4] = (short)((uint)unaff_EBP >> 0x10);
  *(undefined4 *)(puVar6 + 6) = unaff_EBX;
  *(undefined4 *)(puVar6 + 8) = uStack_148;
  *(undefined4 *)(puVar6 + 10) = uStack_144;
  puVar6[0xc] = local_140;
  puVar6[0xd] = uStack_13e;
  puVar6[0xe] = uStack_13c;
  *(undefined4 *)(puVar6 + 0x10) = uStack_132;
  *(undefined2 **)(puVar6 + 0x12) = puVar6 + 0x1a;
  uVar10 = uVar2;
  pcVar12 = GlobalHandle_exref;
  if (local_140 != 0) {
    pvVar5 = GlobalAlloc(0x42,(uVar2 & 0xffff) + 1);
    pcVar7 = GlobalLock(pvVar5);
    iVar11 = 0;
    if ((pcVar7 == (char *)0x0) ||
       (iVar13 = (*(code *)**(undefined4 **)(uVar2 + 0xc))
                           (*(undefined4 *)(uVar2 + 8),pcVar7,uVar2 & 0xffff,&uStack_164),
       iVar13 == 0)) {
      iVar13 = 0;
    }
    else {
      iVar13 = 1;
      if (*pcVar7 != '\0') {
        pcVar8 = pcVar7;
        do {
          uVar10 = uStack_160;
          if ((int)(uVar2 & 0xffff) <= iVar11) break;
          cVar1 = *pcVar8;
          pcVar8[(int)(aCStack_124 + -(int)pcVar7)] = cVar1;
          if (cVar1 == '/') {
            pcVar8[(int)(aCStack_124 + -(int)pcVar7)] = '\\';
          }
          pcVar9 = pcVar8 + 1;
          pcVar8 = pcVar8 + 1;
          iVar11 = iVar11 + 1;
        } while (*pcVar9 != '\0');
      }
      aCStack_124[uVar2 & 0xffff] = '\0';
      OemToCharBuffA(aCStack_124,*(LPSTR *)(puVar6 + 0x12),(uVar2 & 0xffff) + 1);
      if ((*(byte *)(uVar10 + 0x10) & 1) != 0) {
        pcVar8 = FUN_0041c6b0(*(LPCSTR *)(puVar6 + 0x12));
        *(char **)(puVar6 + 0x12) = pcVar8;
      }
    }
    pcVar12 = GlobalHandle_exref;
    if (pcVar7 != (char *)0x0) {
      pvVar5 = GlobalHandle(pcVar7);
      GlobalUnlock(pvVar5);
      pvVar5 = GlobalHandle(pcVar7);
      GlobalFree(pvVar5);
    }
    if (iVar13 == 0) goto LAB_0042596e;
  }
  if (uStack_13e == 0) {
    *(undefined4 *)(puVar6 + 0x14) = 0;
  }
  else {
    iVar4 = iVar4 + (int)puVar6;
    *(int *)(puVar6 + 0x14) = iVar4;
    iVar13 = (*(code *)**(undefined4 **)(uVar10 + 0xc))
                       (*(undefined4 *)(uVar10 + 8),iVar4,uStack_13e,&uStack_164);
  }
  if (iVar13 != 0) {
    *(int *)(puVar6 + 0x16) = (int)puVar6 + iVar3;
    if (uStack_13c != 0) {
      pvVar5 = GlobalAlloc(0x42,uStack_13c + 1);
      pcVar7 = GlobalLock(pvVar5);
      if ((pcVar7 == (char *)0x0) ||
         (iVar3 = (*(code *)**(undefined4 **)(uVar10 + 0xc))
                            (*(undefined4 *)(uVar10 + 8),pcVar7,uStack_13c,&uStack_164), iVar3 == 0)
         ) {
        iVar13 = 0;
      }
      else {
        cVar1 = *pcVar7;
        pcVar8 = *(char **)(puVar6 + 0x16);
        iVar13 = 1;
        pcVar9 = pcVar7;
        pcVar12 = GlobalHandle_exref;
        for (iVar3 = 0;
            (GlobalHandle_exref = pcVar12, cVar1 != '\0' && (iVar3 < (int)(uint)uStack_13c));
            iVar3 = iVar3 + 1) {
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          *pcVar8 = cVar1;
          pcVar8 = pcVar8 + 1;
          cVar1 = *pcVar9;
          pcVar12 = GlobalHandle_exref;
        }
      }
      if (pcVar7 != (char *)0x0) {
        pvVar5 = (HGLOBAL)(*pcVar12)(pcVar7);
        GlobalUnlock(pvVar5);
        pvVar5 = (HGLOBAL)(*pcVar12)(pcVar7);
        GlobalFree(pvVar5);
      }
    }
    if (iVar13 != 0) {
      *(int *)(iStack_1c + 8) = *(int *)(iStack_1c + 0xc);
      *(int *)(iStack_1c + 4) = *(int *)(iStack_1c + 4) + 1;
      *(uint *)(iStack_1c + 0xc) =
           (uVar2 & 0xffff) + 0x2e + (uint)uStack_13e + *(int *)(iStack_1c + 0xc) + (uint)uStack_13c
      ;
      *puStack_18 = puVar6;
      return 0;
    }
  }
LAB_0042596e:
  pvVar5 = (HGLOBAL)(*pcVar12)(puVar6);
  GlobalUnlock(pvVar5);
  pvVar5 = (HGLOBAL)(*pcVar12)(puVar6);
  GlobalFree(pvVar5);
  return 0x8004e008;
}


