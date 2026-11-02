/* Module: sfxpfx2.dll
   Function: FUN_5c8aa270
   Address: 5c8aa270
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_5c8aa270(HWND param_1,int *param_2)

{
  LONG LVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  HPALETTE pHVar6;
  uint uVar7;
  int *piVar8;
  
  LVar1 = GetWindowLongA(param_1,4);
  if (*(HGDIOBJ *)(LVar1 + 4) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(LVar1 + 4));
    *(undefined4 *)(LVar1 + 4) = 0;
  }
  if (*(HLOCAL *)(LVar1 + 0x10) != (HLOCAL)0x0) {
    LocalFree(*(HLOCAL *)(LVar1 + 0x10));
    *(undefined4 *)(LVar1 + 0x10) = 0;
  }
  if (*(int *)(LVar1 + 0xc) == 0) {
    uVar2 = DrawDibOpen();
    *(undefined4 *)(LVar1 + 0xc) = uVar2;
  }
  else {
    DrawDibEnd(*(int *)(LVar1 + 0xc));
  }
  if (*(int *)(LVar1 + 0xc) != 0) {
    if ((param_2[8] == 0) && (*(ushort *)((int)param_2 + 0xe) < 9)) {
      uVar3 = 1 << ((byte)*(ushort *)((int)param_2 + 0xe) & 0x1f);
    }
    else {
      uVar3 = (uint)*(ushort *)(param_2 + 8);
    }
    iVar4 = param_2[5];
    param_2[8] = uVar3 & 0xffff;
    if (iVar4 == 0) {
      iVar4 = ((uint)*(ushort *)((int)param_2 + 0xe) * param_2[1] + 0x1f >> 3 & 0x1ffffffc) *
              param_2[2];
    }
    uVar3 = iVar4 + (uVar3 & 0xffff) * 4 + *param_2;
    param_2[5] = iVar4;
    piVar5 = LocalAlloc(0x40,uVar3);
    if (piVar5 != (int *)0x0) {
      piVar8 = piVar5;
      for (uVar7 = uVar3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *piVar8 = *param_2;
        param_2 = param_2 + 1;
        piVar8 = piVar8 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(char *)piVar8 = (char)*param_2;
        param_2 = (int *)((int)param_2 + 1);
        piVar8 = (int *)((int)piVar8 + 1);
      }
      *(int **)(LVar1 + 0x10) = piVar5;
      pHVar6 = FUN_5c8aa3a0(piVar5);
      if (pHVar6 != (HPALETTE)0x0) {
        if (*(HGDIOBJ *)(LVar1 + 0x14) != (HGDIOBJ)0x0) {
          DeleteObject(*(HGDIOBJ *)(LVar1 + 0x14));
          *(undefined4 *)(LVar1 + 0x14) = 0;
        }
        DrawDibSetPalette(*(undefined4 *)(LVar1 + 0xc),pHVar6);
        *(HPALETTE *)(LVar1 + 0x14) = pHVar6;
      }
    }
  }
  InvalidateRect(param_1,(RECT *)0x0,1);
  return *(int *)(LVar1 + 0x10) != 0;
}


