/* Module: encn3260.dll
   Function: FUN_664b6c40
   Address: 664b6c40
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_664b6c40(HDC param_1,COLORREF param_2)

{
  HDC pHVar1;
  int iVar2;
  undefined4 *puVar3;
  BITMAPINFO *pBVar4;
  uint *puVar5;
  uint uVar6;
  BITMAPINFO local_8dc [24];
  uint local_4b4 [270];
  int *local_7c;
  undefined4 local_70 [9];
  uint *local_4c;
  uint local_1c;
  
  pHVar1 = param_1;
  if (((param_1->unused & 0x100U) != 0) && ((param_1->unused & 1U) != 0)) {
    puVar3 = local_70;
    for (iVar2 = 0x1b; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    pBVar4 = local_8dc;
    for (iVar2 = 0x10a; iVar2 != 0; iVar2 = iVar2 + -1) {
      (pBVar4->bmiHeader).biSize = 0;
      pBVar4 = (BITMAPINFO *)&(pBVar4->bmiHeader).biWidth;
    }
    local_70[0] = 0x6c;
    FUN_664b59c0((uint *)param_1,(DWORD *)local_8dc);
    local_8dc[0].bmiHeader.biHeight = 2;
    local_8dc[0].bmiHeader.biWidth = 2;
    puVar5 = local_4b4;
    for (iVar2 = 0x111; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    FUN_664b5f30((uint *)pHVar1,local_4b4,local_8dc,1,0);
    FUN_664b63a0((uint *)pHVar1,local_4b4,(uint *)&param_1);
    SetPixel(param_1,0,0,param_2);
    FUN_664b6420((uint *)pHVar1,local_4b4,(uint)param_1);
    (**(code **)(*local_7c + 100))(local_7c,0,local_70,1,0);
    uVar6 = *local_4c;
    (**(code **)(*local_7c + 0x80))(local_7c,local_4c);
    if (local_1c < 0x20) {
      uVar6 = uVar6 & (1 << ((byte)local_1c & 0x1f)) - 1U;
    }
    FUN_664b60c0((uint *)pHVar1,local_4b4);
    return uVar6;
  }
  return 0;
}


