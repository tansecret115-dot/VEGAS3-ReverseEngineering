/* Module: vegas30k.dll
   Function: Mixer_MakeFXString
   Address: 0117a9b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* unsigned char * __stdcall Mixer_MakeFXString(struct _tfxsend *,unsigned long *) */

uchar * Mixer_MakeFXString(_tfxsend *param_1,ulong *param_2)

{
  SIZE_T dwBytes;
  int iVar1;
  HGLOBAL hMem;
  uchar *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uchar *puVar7;
  uint *puVar8;
  uchar *puVar9;
  
                    /* 0x17a9b0  210  ?Mixer_MakeFXString@@YGPAEPAU_tfxsend@@PAK@Z */
  if (param_2 != (ulong *)0x0) {
    *param_2 = 0;
  }
  if (param_1 == (_tfxsend *)0x0) {
    return (uchar *)0x0;
  }
  iVar1 = lstrlenA((LPCSTR)param_1);
  uVar5 = iVar1 * 2 + 2;
  dwBytes = *(int *)(param_1 + 0x114) + uVar5 + 0x10 + *(int *)(param_1 + 0x10c);
  hMem = GlobalAlloc(0x42,dwBytes);
  puVar2 = GlobalLock(hMem);
  *(undefined4 *)puVar2 = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x10c);
  uVar4 = *(uint *)(param_1 + 0x10c);
  puVar7 = *(uchar **)(param_1 + 0x108);
  puVar9 = puVar2 + 8;
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)puVar9 = *(undefined4 *)puVar7;
    puVar7 = puVar7 + 4;
    puVar9 = puVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar6 = (uint *)(puVar2 + 8 + *(int *)(param_1 + 0x10c));
  *puVar6 = uVar5;
  MultiByteToWideChar(0,1,(LPCSTR)param_1,-1,(LPWSTR)(puVar6 + 1),uVar5 >> 1);
  *(undefined2 *)((int)puVar6 + (uVar5 >> 1) * 2 + 2) = 0;
  puVar6[1] = *(undefined4 *)(param_1 + 0x114);
  uVar5 = *(uint *)(param_1 + 0x114);
  if ((uVar5 != 0) && (*(uint **)(param_1 + 0x110) != (uint *)0x0)) {
    puVar8 = *(uint **)(param_1 + 0x110);
    puVar6 = puVar6 + 2;
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar6 = (char)*puVar8;
      puVar8 = (uint *)((int)puVar8 + 1);
      puVar6 = (uint *)((int)puVar6 + 1);
    }
  }
  *param_2 = dwBytes;
  return puVar2;
}


