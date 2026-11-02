/* Module: vegas30.exe
   Function: FUN_00435a30
   Address: 00435a30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00435a30(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  HCURSOR hCursor;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined4 local_c;
  int *local_8;
  HCURSOR local_4;
  
  bVar7 = false;
  hCursor = (HCURSOR)_SfGetUICursor_4(0x7f02);
  local_4 = SetCursor(hCursor);
  iVar5 = param_1;
  iVar6 = 1;
  uVar1 = *(undefined4 *)(param_1 + 0xbc8);
  FUN_004e9f70(uVar1,0x11,0);
  FUN_004ea880(uVar1);
  iVar4 = param_2;
  if ((param_2 == 0) || ((*(byte *)(param_2 + 0x10) & 0x10) != 0)) {
    piVar3 = (int *)FUN_005b87b0(uVar1);
    iVar4 = 0;
    if (piVar3 == (int *)0x0) {
      param_2 = 0;
    }
    else {
      param_2 = *piVar3;
    }
    local_8 = piVar3;
    if (0 < param_2) {
      do {
        iVar2 = *(int *)(piVar3[2] + iVar4 * 4);
        if ((*(byte *)(iVar2 + 0x10) & 0x10) != 0) {
          iVar4 = *(int *)(iVar2 + 0x18) + 1;
          iVar6 = FUN_005ce850(uVar1,iVar2,&local_c,iVar4);
          iVar5 = param_1;
          if ((iVar6 < 0) ||
             (iVar6 = FUN_00435990(param_1,iVar2,local_c), iVar5 = param_1, iVar6 < 0))
          goto LAB_00435b76;
          FUN_004ea250(uVar1,local_c,0xb,0);
          if (*(int *)(iVar2 + 4) == 3) {
            bVar7 = true;
          }
          param_2 = param_2 + 1;
          piVar3 = local_8;
          iVar5 = param_1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_2);
      goto LAB_00435b66;
    }
  }
  else {
    bVar7 = *(int *)(param_2 + 4) == 3;
    iVar6 = FUN_005ce850(uVar1,param_2,&param_1,*(int *)(param_2 + 0x18) + 1);
    if ((iVar6 < 0) || (iVar6 = FUN_00435990(iVar5,iVar4,param_1), iVar6 < 0)) goto LAB_00435b76;
    FUN_004ea250(uVar1,param_1,0xb,0);
LAB_00435b66:
    if (iVar6 < 0) goto LAB_00435b76;
  }
  FUN_0046ee50(iVar5);
LAB_00435b76:
  FUN_00456c20(iVar5);
  FUN_00469280(iVar5);
  if (-1 < iVar6) {
    FUN_004eb2b0(uVar1);
  }
  FUN_004ea040(uVar1,0);
  SetCursor(local_4);
  if (bVar7) {
    DAT_0064767c = DAT_0064767c | 0x400;
  }
  return iVar6;
}


