/* Module: vegas30.exe
   Function: FUN_00479a60
   Address: 00479a60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00479a7e) */

undefined4 FUN_00479a60(uint param_1,byte param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  HCURSOR hCursor;
  HCURSOR pHVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int local_8;
  
  iVar6 = param_1;
  piVar1 = *(int **)(param_1 + 0x18);
  puVar2 = *(undefined4 **)(param_1 + 0x54);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  iVar7 = *(int *)(param_1 + 0x44);
  if ((iVar7 < 0) || (*piVar1 + -1 < iVar7)) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(piVar1[2] + iVar7 * 4);
  }
  if (iVar8 == 0) {
    return 0;
  }
  if ((*(byte *)(iVar8 + 0xc) & 4) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x40) != iVar7) {
    *(int *)(param_1 + 0x40) = iVar7;
    FUN_00479520(param_1);
  }
  FUN_00477e00(iVar6,0,3);
  uVar3 = **(uint **)(iVar8 + 0x30);
  if (param_3 < *(int *)(iVar6 + 0x20)) {
    return 0;
  }
  if (*(int *)(iVar6 + 0x28) < param_3) {
    return 0;
  }
  piVar1 = puVar2 + 2;
  puVar2[3] = 0;
  *piVar1 = 0;
  local_8 = 0;
  param_1 = FUN_00479820(iVar6,iVar8,param_3,param_4,piVar1);
  if ((uVar3 <= param_1) &&
     (local_8 = FUN_00479ce0(iVar6,iVar8,param_3,param_4,&param_1,piVar1), local_8 == 0)) {
    *(undefined4 *)(iVar6 + 0x4c) = 0;
    *(undefined4 *)(iVar6 + 0x48) = 0xffffffff;
    puVar2[4] = param_3;
    puVar2[5] = param_4;
    puVar2[6] = 0xffffffff;
    puVar2[10] = puVar2[10] | 8;
    SetCapture((HWND)*puVar2);
    return 1;
  }
  FUN_00479550(iVar6,0,iVar8);
  FUN_004798d0(iVar6,iVar8);
  param_3 = param_3 + *piVar1;
  iVar7 = param_4 + puVar2[3];
  if ((local_8 == 0) || (iVar4 = FUN_00478b00(param_1,iVar8,iVar6), iVar4 != 0)) {
    iVar6 = FUN_00478b00(param_1,iVar8,iVar6);
    if (iVar6 == 0) goto LAB_00479c06;
    uVar9 = 8;
    puVar2[10] = puVar2[10] | 1;
  }
  else {
    if ((param_2 & 4) == 0) {
      if (param_1 == uVar3 - 1) {
        puVar2[10] = puVar2[10] | 4;
        hCursor = (HCURSOR)_SfGetUICursor_4(6);
        *(undefined4 *)(iVar6 + 0x4c) = 1;
        *(uint *)(iVar6 + 0x48) = param_1;
      }
      else {
        puVar2[10] = puVar2[10] | 4;
        hCursor = (HCURSOR)_SfGetUICursor_4(6);
        *(undefined4 *)(iVar6 + 0x4c) = 2;
        *(uint *)(iVar6 + 0x48) = param_1;
      }
      goto LAB_00479c18;
    }
    param_1 = FUN_004796c0(iVar6,iVar8,param_3,iVar7);
    if (param_1 == 0xffffffff) {
      FUN_00479940(iVar6,iVar8);
      FUN_00479620(iVar6,0,iVar8);
      return 1;
    }
    FUN_00477e00(iVar6,iVar8,1);
    FUN_00479520(iVar6);
LAB_00479c06:
    uVar9 = 4;
    puVar2[10] = puVar2[10] | 2;
  }
  hCursor = (HCURSOR)_SfGetUICursor_4(uVar9);
LAB_00479c18:
  puVar2[4] = param_3;
  puVar2[1] = param_1;
  puVar2[5] = iVar7;
  SetCapture((HWND)*puVar2);
  pHVar5 = GetCursor();
  if (pHVar5 != hCursor) {
    SetCursor(hCursor);
  }
  return 1;
}


