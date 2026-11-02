/* Module: vegas30.exe
   Function: FUN_00475560
   Address: 00475560
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00475560(HDC param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  POINT local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if (param_3 == 1) {
    LineTo(param_1,param_2[2],param_2[3]);
    return;
  }
  if (param_3 == 2) {
    local_10 = param_2[2];
    local_14 = param_2[3];
    local_18 = (*param_2 + local_10 * 2) / 3;
    local_20.x = (local_10 + *param_2 * 2) / 3;
    local_20.y = (param_2[1] + local_14 * 2) / 3;
    local_c = local_14;
    PolyBezierTo(param_1,&local_20,3);
    return;
  }
  if (param_3 == -2) {
    local_10 = param_2[2];
    local_20.y = param_2[1];
    local_c = param_2[3];
    local_20.x = (local_10 + *param_2 * 2) / 3;
    local_18 = (*param_2 + local_10 * 2) / 3;
    local_14 = (local_c + local_20.y * 2) / 3;
    PolyBezierTo(param_1,&local_20,3);
    return;
  }
  if (param_3 == 4) {
    local_10 = param_2[2];
    iVar1 = *param_2;
    local_20.x = (local_10 - iVar1) / 3 + iVar1;
    local_20.y = param_2[1];
    local_14 = param_2[3];
    local_18 = (iVar1 - local_10) / 3 + local_10;
    local_c = local_14;
    PolyBezierTo(param_1,&local_20,3);
    return;
  }
  if (param_3 == -4) {
    iVar1 = param_2[2];
    iVar2 = *param_2;
    iVar5 = ftol();
    iVar3 = param_2[3];
    iVar4 = param_2[1];
    local_14 = ftol();
    local_20.x = iVar2 + iVar5;
    local_20.y = iVar4 + local_14;
    local_18 = iVar1 - iVar5;
    local_14 = iVar3 - local_14;
    local_10 = iVar1;
    local_c = iVar3;
    PolyBezierTo(param_1,&local_20,3);
  }
  return;
}


