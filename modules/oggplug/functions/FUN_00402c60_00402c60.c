/* Module: oggplug.dll
   Function: FUN_00402c60
   Address: 00402c60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00402c60(int param_1)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uchar *hObject;
  int unaff_EBX;
  int unaff_ESI;
  int iVar6;
  undefined4 *puStack_218;
  WCHAR aWStack_214 [4];
  int *local_20c;
  undefined1 local_208 [520];
  
  piVar1 = (int *)(param_1 + 8);
  if (((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0xc) != 0)) &&
     (*(int *)(param_1 + 0x10) != 0)) {
    return 0;
  }
  local_20c = piVar1;
  iVar3 = (**(code **)(**(int **)(param_1 + 0x24) + 0x34))
                    (*(int **)(param_1 + 0x24),local_208,0x104);
  if (-1 < iVar3) {
    if (*piVar1 == 0) {
      iVar3 = FUN_004140e0(piVar1,4,-1,-1,0x80000002);
    }
    if (*(int *)(param_1 + 0xc) == 0) {
      iVar3 = FUN_004140e0((int *)(param_1 + 0xc),4,-1,-1,0x80000002);
    }
    piVar1 = (int *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x10) == 0) {
      iVar3 = FUN_004140e0(piVar1,4,-1,-1,0x80000002);
    }
    piVar4 = *(int **)(param_1 + 0x28);
    if ((piVar4 != (int *)0x0) && (iVar6 = 0, 0 < piVar4[2])) {
      do {
        pcVar2 = *(char **)(*piVar4 + iVar6 * 4);
        iVar5 = FUN_00402b30(pcVar2,(int *)&stack0xfffffde4);
        if (iVar5 != 0) {
          FUN_00402bb0((int *)*piVar1,iVar5,pcVar2 + unaff_EBX);
        }
        piVar4 = *(int **)(param_1 + 0x28);
        iVar6 = iVar6 + 1;
      } while (iVar6 < piVar4[2]);
    }
    FUN_004023b0(*(void **)(param_1 + 0x24),(undefined4 *)&stack0xfffffde0);
    if (unaff_ESI == 0) {
      unaff_ESI = 0xac44;
    }
    hObject = FUN_00402dd0(aWStack_214);
    if (hObject != (uchar *)0xffffffff) {
      FUN_004143a0(hObject,unaff_ESI,(int *)*puStack_218);
      FUN_00414870(hObject,(int *)*piVar1);
      CloseHandle(hObject);
    }
  }
  return iVar3;
}


