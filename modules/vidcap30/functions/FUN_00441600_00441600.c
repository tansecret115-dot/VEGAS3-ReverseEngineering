/* Module: vidcap30.exe
   Function: FUN_00441600
   Address: 00441600
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00441600(LPCSTR param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CHAR *pCVar4;
  undefined4 uVar5;
  char *pcVar6;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  CHAR local_120 [259];
  undefined1 local_1d;
  uint local_8;
  
  FUN_0046ed20();
  local_13c = 0;
  local_140 = 0;
  local_128 = *(int *)(DAT_005ba4c0 + 0x6c);
  local_134 = 0;
  local_124 = 0;
  local_138 = 0;
  local_12c = 0;
  local_130 = **(int **)(local_128 + 0x1c68);
  local_148 = 1;
  iVar1 = FUN_00441ab0(0);
  local_144 = FUN_0045b2c0(param_1,DAT_005bba28);
  if (DAT_005bba94 != 0) {
    return 1;
  }
  pCVar4 = local_120;
  for (iVar3 = 0x48; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar4[0] = '\0';
    pCVar4[1] = '\0';
    pCVar4[2] = '\0';
    pCVar4[3] = '\0';
    pCVar4 = pCVar4 + 4;
  }
  if ((0 < local_130) && (DAT_005bba30 == 4)) {
    return 1;
  }
  if (((local_144 != 0) && (local_148 = FUN_0046fdd0(param_1,&local_13c,0,0), -1 < local_148)) &&
     (iVar1 != 0)) {
    local_148 = FUN_0046fdd0(iVar1,&local_140,0,0);
  }
  if (local_13c != 0) {
    local_134 = FUN_004715a0(2);
    local_138 = FUN_004715a0(1);
  }
  iVar1 = local_124;
  iVar3 = local_12c;
  if (local_140 != 0) {
    iVar1 = FUN_004715a0(2);
    iVar3 = FUN_004715a0(1);
  }
  if (local_144 == 0) {
    pcVar6 = "%s: The file type is not recognized.";
    uVar5 = 0x8004e007;
  }
  else if ((local_140 == 0) || (iVar2 = FUN_00472ea0(), iVar2 != 0)) {
    if (((local_13c == 0) || (local_140 == 0)) || (iVar2 = FUN_00472ea0(), iVar2 != 0)) {
      if (((local_134 == 0) || (iVar1 == 0)) ||
         (*(double *)(local_134 + 0x48) == *(double *)(iVar1 + 0x48))) {
        if (((local_138 == 0) || (iVar3 == 0)) ||
           (*(int *)(*(int *)(local_138 + 0x2c) + 4) == *(int *)(*(int *)(iVar3 + 0x2c) + 4)))
        goto LAB_004417da;
        pcVar6 = 
        "%s: The audio stream format doesn\'t match the first entry.  Preview may not sound correct, but the file will be output to the device properly."
        ;
        uVar5 = 0x8004e038;
      }
      else {
        pcVar6 = "%s: The files are different formats.";
        local_144 = 0;
        uVar5 = 0x8004e007;
      }
    }
    else {
      pcVar6 = "%s: Multiple files can only be added if all files are in DV format.";
      local_144 = 0;
      uVar5 = 0x8004e007;
    }
  }
  else {
    pcVar6 = "%s: Multiple files can only be added if all files are in DV format.";
    local_144 = 0;
    uVar5 = 0x8004e007;
  }
  SfErrorHandler_DetailsAddString(uVar5,pcVar6,param_1);
LAB_004417da:
  if (-1 < local_148) {
    if (local_144 != 0) {
      lstrcpynA(local_120,param_1,0x104);
      local_1d = 0;
      local_8 = local_8 ^ (local_8 ^ param_2) & 1;
      local_148 = _SfList_AllocAndInsertItem_20
                            (*(undefined4 *)(local_128 + 0x1c68),local_120,0x120,local_130,0);
      DAT_005ba50c = DAT_005ba50c | 0x200;
    }
    if ((-1 < local_148) && (local_144 != 0)) {
      DAT_005ba50c = DAT_005ba50c | 0x200;
    }
  }
  return local_148;
}


