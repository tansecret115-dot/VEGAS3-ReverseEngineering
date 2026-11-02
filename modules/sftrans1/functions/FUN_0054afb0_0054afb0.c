/* Module: sftrans1.dll
   Function: FUN_0054afb0
   Address: 0054afb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_0054afb0(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5,uint param_6)

{
  undefined8 *puVar1;
  double *pdVar2;
  int iVar3;
  HCURSOR pHVar4;
  HCURSOR pHVar5;
  uint uVar6;
  tagRECT local_18;
  
  param_1[99] = 1;
  iVar3 = param_1[0x51];
  if (iVar3 < 0) {
    return 1;
  }
  uVar6 = param_6 & 8;
  switch(param_1[4]) {
  case 0:
    param_1[0x57] = param_4;
    param_1[0x58] = param_5;
    if (uVar6 != 0) {
      FUN_0054de90(1);
      return 1;
    }
    if (param_3 != 0x204) {
      return 1;
    }
    FUN_0054de90(0);
    FUN_0054ddf0();
    GetClientRect((HWND)param_1[-1],&local_18);
    InvalidateRect((HWND)param_1[-1],&local_18,0);
    return 1;
  case 1:
  case 2:
  case 3:
  case 4:
    puVar1 = *(undefined8 **)(*(int *)(*(int *)(param_1[0x52] + iVar3 * 8) + 8) + param_1[0x53] * 4)
    ;
    param_1[0x54] = param_1[0x53];
    *(undefined8 *)(param_1 + 100) = *puVar1;
    *(undefined8 *)(param_1 + 0x66) = puVar1[1];
    iVar3 = ftol();
    param_1[0x68] = iVar3 - param_4;
    iVar3 = ftol();
    param_1[0x69] = iVar3 - param_5;
    if (uVar6 == 0) {
      if ((param_6 & 4) == 0) {
        if (*(char *)(puVar1 + 2) != '\0') goto LAB_0054b11d;
        FUN_0054de90(0);
        param_1[0x55] = param_1[0x53];
      }
      else {
        FUN_0054de90(0);
        iVar3 = param_1[0x55];
        if ((-1 < iVar3) && (iVar3 < **(int **)(param_1[0x52] + param_1[0x51] * 8))) {
          FUN_0054def0(iVar3,param_1[0x53]);
          goto LAB_0054b11d;
        }
      }
    }
    else {
      param_1[0x55] = param_1[0x53];
      *(undefined1 *)((int)puVar1 + 0x11) = *(undefined1 *)(puVar1 + 2);
    }
    *(undefined1 *)(puVar1 + 2) = 1;
LAB_0054b11d:
    FUN_0054ef90(1,&param_4);
    FUN_0054ddf0();
    GetClientRect((HWND)param_1[-1],&local_18);
    InvalidateRect((HWND)param_1[-1],&local_18,0);
    return 1;
  case 5:
    pdVar2 = *(double **)(*(int *)(*(int *)(param_1[0x52] + iVar3 * 8) + 8) + param_1[0x53] * 4);
    *(double *)(param_1 + 100) = *pdVar2 + pdVar2[5];
    *(double *)(param_1 + 0x66) = pdVar2[1] + pdVar2[6];
    iVar3 = ftol();
    param_1[0x68] = iVar3 - param_4;
    iVar3 = ftol();
    param_1[0x69] = iVar3 - param_5;
    iVar3 = param_1[0x54];
    if (iVar3 == param_1[0x53]) goto LAB_0054b340;
    if ((-1 < iVar3) && (iVar3 < **(int **)(param_1[0x52] + param_1[0x51] * 8))) {
LAB_0054b31c:
      FUN_00550040(iVar3,iVar3);
    }
    break;
  case 6:
    pdVar2 = *(double **)(*(int *)(*(int *)(param_1[0x52] + iVar3 * 8) + 8) + param_1[0x53] * 4);
    *(double *)(param_1 + 100) = *pdVar2 + pdVar2[10];
    *(double *)(param_1 + 0x66) = pdVar2[1] + pdVar2[0xb];
    iVar3 = ftol();
    param_1[0x68] = iVar3 - param_4;
    iVar3 = ftol();
    param_1[0x69] = iVar3 - param_5;
    iVar3 = param_1[0x54];
    if (iVar3 == param_1[0x53]) goto LAB_0054b340;
    if ((-1 < iVar3) && (iVar3 < **(int **)(param_1[0x52] + param_1[0x51] * 8))) goto LAB_0054b31c;
    break;
  case 7:
    param_1[4] = 5;
    pHVar4 = (HCURSOR)(**(code **)(*param_1 + 0x20))(param_1[-1],5);
    pHVar5 = GetCursor();
    if (pHVar4 != pHVar5) {
      SetCursor(pHVar4);
    }
    iVar3 = param_1[0x54];
    if (iVar3 == param_1[0x53]) {
      return 1;
    }
    if ((iVar3 < 0) || (**(int **)(param_1[0x52] + param_1[0x51] * 8) <= iVar3)) goto LAB_0054b40b;
    goto LAB_0054b401;
  case 8:
    param_1[4] = 6;
    pHVar4 = (HCURSOR)(**(code **)(*param_1 + 0x20))(param_1[-1],6);
    pHVar5 = GetCursor();
    if (pHVar4 != pHVar5) {
      SetCursor(pHVar4);
    }
    iVar3 = param_1[0x54];
    if (iVar3 == param_1[0x53]) {
      return 1;
    }
    if ((iVar3 < 0) || (**(int **)(param_1[0x52] + param_1[0x51] * 8) <= iVar3)) goto LAB_0054b40b;
LAB_0054b401:
    FUN_00550040(iVar3,iVar3);
LAB_0054b40b:
    param_1[0x54] = param_1[0x53];
    FUN_00550040(param_1[0x53],param_1[0x53]);
    return 1;
  default:
    return 1;
  }
  param_1[0x54] = param_1[0x53];
  FUN_00550040(param_1[0x53],param_1[0x53]);
LAB_0054b340:
  FUN_0054ef90(1,&param_4);
  return 1;
}


