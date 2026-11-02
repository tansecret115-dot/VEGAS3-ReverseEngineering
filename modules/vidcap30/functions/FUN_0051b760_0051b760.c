/* Module: vidcap30.exe
   Function: FUN_0051b760
   Address: 0051b760
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0051b760(undefined4 *param_1,HDC param_2)

{
  int *piVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  HGDIOBJ h;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  bool bVar9;
  uint local_74;
  uint local_6c;
  HBRUSH local_68;
  HGDIOBJ local_64;
  undefined4 uStack_1c;
  
  uVar6 = param_1[3];
  if ((uVar6 & 0x81) != 0) {
    return 0;
  }
  if ((uVar6 & 0x800) != 0) {
    uVar4 = FUN_0051a340(param_1,param_2);
    return uVar4;
  }
  bVar9 = ((byte)*param_1 & 0x30) != 0x10;
  if ((uVar6 & 0x10) != 0) {
    FUN_0051bda0(param_1,param_2,param_1 + 0x2e,param_1[0x32],1,1,bVar9);
    FUN_0051bda0(param_1,param_2,param_1 + 0x37,param_1[0x3b],1,0,bVar9);
    return 1;
  }
  piVar1 = param_1 + 0x2e;
  iVar7 = param_1[0x30] - param_1[0x2e];
  iVar5 = param_1[0x31] - param_1[0x2f];
  if ((uVar6 & 0x400) != 0) {
    GetSysColor(0x10);
    GetSysColor(0x14);
    h = (HGDIOBJ)_SfGetUIBrush_4(6);
    SelectObject(param_2,h);
    PatBlt(param_2,*piVar1 + 1,param_1[0x2f],iVar7 + -2,1,0xf00021);
    PatBlt(param_2,*piVar1 + 1,param_1[0x31] + -1,iVar7 + -2,1,0xf00021);
    PatBlt(param_2,*piVar1,param_1[0x2f] + 1,1,iVar5 + -2,0xf00021);
    PatBlt(param_2,param_1[0x30] + -1,param_1[0x2f] + 1,1,iVar5 + -2,0xf00021);
    local_68 = CreateSolidBrush(0);
    pcVar8 = SelectObject_exref;
    local_64 = SelectObject(param_2,local_68);
    local_74 = 0;
    if (iVar5 != 2) {
      uStack_1c = 0;
      do {
        local_6c = 1;
        if (iVar7 != 1 && iVar7 != 2) {
          do {
            if (((((local_74 < 3) || (iVar5 - 5U <= local_74)) || (local_6c < 3)) ||
                (iVar7 - 4U < local_6c)) &&
               (((local_74 != 2 && (local_74 != iVar5 - 5U)) ||
                ((local_6c < 4 || (iVar7 - 4U <= local_6c)))))) {
              ftol();
              ftol();
              ftol();
              ftol();
              ftol();
            }
            else {
              ftol();
              ftol();
              ftol();
              ftol();
              ftol();
            }
            ftol();
            uVar6 = ftol();
            uVar2 = ftol();
            uVar3 = ftol();
            SelectObject(param_2,local_64);
            DeleteObject(local_68);
            local_68 = CreateSolidBrush((uint)CONCAT11(uVar3,uVar2) << 8 | uVar6 & 0xff);
            local_64 = SelectObject(param_2,local_68);
            PatBlt(param_2,*piVar1 + local_6c,param_1[0x2f] + 1 + local_74,1,1,0xf00021);
            local_6c = local_6c + 1;
          } while (local_6c < iVar7 - 1U);
        }
        local_74 = local_74 + 1;
        pcVar8 = SelectObject_exref;
      } while (local_74 < iVar5 - 2U);
    }
    (*pcVar8)(param_2,local_64);
    DeleteObject(local_68);
    (*pcVar8)(param_2,uStack_1c);
    return 1;
  }
  FUN_0051bda0(param_1,param_2,piVar1,param_1[0x32],0,0,bVar9);
  return 1;
}


